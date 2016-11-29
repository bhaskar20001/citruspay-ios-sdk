//
//  InitialViewController.m
//  CTS iOS Sdk
//
//  Created by Vikas Singh on 1/13/16.
//  Copyright © 2016 Citrus. All rights reserved.
//

#import "InitialViewController.h"
#import "SignUpViewController.h"
#import "CardsViewController.h"
#import "SVSegmentedControl.h"
#import "BaseViewController.h"

@interface InitialViewController (){
    
    BOOL isDirectPaymentEnable;
    UIAlertView *alert;

}
@property (strong) SVSegmentedControl *segmentedControl;
@property (strong) BaseViewController *baseViewController;
@end

@implementation InitialViewController

- (void)viewDidLoad {
    
    [super viewDidLoad];
    
    self.versionLabel.text = [NSString stringWithFormat:@"CitrusPay Core SDK Demo v%@", SDK_VERSION];

    _baseViewController = [[BaseViewController alloc] init];
    
    [self SetUpSegmentedControl];
    
     self.signupOptionOneButton.layer.cornerRadius = 4;
     self.signupOptionTwoButton.layer.cornerRadius = 4;
     self.signupOptionThreeButton.layer.cornerRadius = 4;
}


#pragma mark - initializers

-(void)SetUpSegmentedControl {
    
    self.navigationController.navigationBar.tintColor = [UIColor whiteColor];
    
    self.segmentedControl = [[SVSegmentedControl alloc] initWithSectionTitles:[NSArray arrayWithObjects:@"SandBox", @"Production", nil]];
    //[self.segmentedControl addTarget:self action:@selector(segmentedControlChangedValue:) forControlEvents:UIControlEventValueChanged];
    self.segmentedControl.font = [UIFont boldSystemFontOfSize:17.4];
    self.segmentedControl.titleEdgeInsets = UIEdgeInsetsMake(0, 14, 0, 14);
    self.segmentedControl.height = 40;
    self.segmentedControl.thumb.tintColor = [UIColor orangeColor];
    self.segmentedControl.backgroundTintColor = [UIColor blackColor];
    self.segmentedControl.textColor = [UIColor whiteColor];
    self.segmentedControl.mustSlideToChange = YES;
    [self.view addSubview:self.segmentedControl];
    
    CGRect screenRect = [[UIScreen mainScreen] bounds];
    CGFloat screenHeight = screenRect.size.height;
    
    if (screenHeight == 480) {
        self.segmentedControl.center = CGPointMake(self.view.center.x, screenHeight/1.47);
    }
    else {
        self.segmentedControl.center = CGPointMake(self.view.center.x, screenHeight/1.2);
    }
    
    NSUserDefaults *defautls = [NSUserDefaults standardUserDefaults];
    NSString *server = [defautls valueForKey:@"EnvironmentTo"];
    [self segmentedControlChangedValue:[server integerValue]];
    [self.segmentedControl setSelectedSegmentIndex:[server integerValue] animated:YES];
    
   self.segmentedControl.changeHandler = ^(NSUInteger newIndex) {
        [self segmentedControlChangedValue:newIndex];
   };
}


#pragma mark - UIControlEventValueChanged
- (void)segmentedControlChangedValue:(NSUInteger)newIndex {
    if ([self.view superview]) {
        if ([[CTSAuthLayer fetchSharedAuthLayer] isLoggedIn] ||
            [[CTSAuthLayer fetchSharedAuthLayer] isUserBound]) {
            [self environmentChangeAction:newIndex];
        }
        else {
            [_baseViewController viewDidLoad];
            [_baseViewController changeEnvironment:newIndex];
        }
    }
    else {
        [_baseViewController viewDidLoad];
        [_baseViewController changeEnvironment:newIndex];
    }
}

- (void)environmentChangeAction:(NSUInteger)newIndex {
    UIAlertController *alertController = [UIAlertController
                                          alertControllerWithTitle:@"Warning!!"
                                          message:@"All data will be cleared and app will reset after environment switch."
                                          preferredStyle:UIAlertControllerStyleAlert];
    
    UIAlertAction *cancelAction = [UIAlertAction
                                   actionWithTitle:NSLocalizedString(@"Cancel", @"Cancel action")
                                   style:UIAlertActionStyleDefault
                                   handler:^(UIAlertAction *action)
                                   {
                                       NSLog(@"Cancel action");
                                   }];
    
    UIAlertAction *proceedAction = [UIAlertAction
                                    actionWithTitle:NSLocalizedString(@"Proceed", @"Proceed action")
                                    style:UIAlertActionStyleCancel
                                    handler:^(UIAlertAction *action)
                                    {
                                        
                                        if (newIndex == 0) {
                                            if ([self.view superview]) {
                                                if ([[CTSAuthLayer fetchSharedAuthLayer] isLoggedIn]) {
                                                    [[CTSAuthLayer fetchSharedAuthLayer] signOut];
                                                    [self logoutAction:@"Sandbox"];
                                                }
                                            }
                                        }
                                        else {
                                            if ([self.view superview]) {
                                                if ([[CTSAuthLayer fetchSharedAuthLayer] isLoggedIn]) {
                                                    [[CTSAuthLayer fetchSharedAuthLayer] signOut];
                                                    [self logoutAction:@"Production"];
                                                }
                                            }
                                        }
                                        [_baseViewController viewDidLoad];
                                        [_baseViewController changeEnvironment:newIndex];
                                        
                                    }];
    
    [alertController addAction:cancelAction];
    [alertController addAction:proceedAction];
    
    [self presentViewController:alertController animated:YES completion:nil];
}

- (void)logoutAction:(NSString *)environment {
    UIAlertController *alertController = [UIAlertController
                                          alertControllerWithTitle:@"Info"
                                          message:[NSString stringWithFormat:@"Now, your switched with %@ environment.", environment]
                                          preferredStyle:UIAlertControllerStyleAlert];
    
    UIAlertAction *okAction = [UIAlertAction
                               actionWithTitle:NSLocalizedString(@"Ok", @"Yes action")
                               style:UIAlertActionStyleCancel
                               handler:^(UIAlertAction *action)
                               {
                                   NSLog(@"Yes action");
                               }];
    
    [alertController addAction:okAction];
    [self presentViewController:alertController animated:YES completion:nil];
}


- (IBAction)selectLoginTypeAction:(UIButton *)sender{
    
    if (sender.tag == 1000) {
        isDirectPaymentEnable = TRUE;
        dispatch_async(dispatch_get_main_queue(), ^{
            
            alert = [[UIAlertView alloc] initWithTitle:@"" message:@"Please enter amount." delegate:self cancelButtonTitle:@"Cancel" otherButtonTitles:@"Ok" , nil];
            alert.alertViewStyle = UIAlertViewStylePlainTextInput;
            UITextField * alertTextField = [alert textFieldAtIndex:0];
            alertTextField.keyboardType = UIKeyboardTypeDecimalPad;
            alertTextField.placeholder = @"Amount";
            [alert show];
        });
    }
    else {
        
        if ([CTSAuthLayer fetchSharedAuthLayer].requestSignInOauthToken.length != 0) {
            dispatch_async(dispatch_get_main_queue(), ^{
                [self performSegueWithIdentifier:@"HomeScreenIdentifier" sender:nil];
            });
        }
        else{
            dispatch_async(dispatch_get_main_queue(), ^{
                [self performSegueWithIdentifier:@"SignupViewIdentifier" sender:nil];
            });
        }
        
    }
}

#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    
    if ([segue.identifier isEqualToString:@"CardViewIdentifier"]) {
        
        CardsViewController *viewController = (CardsViewController *)[segue destinationViewController];
        viewController.isDirectPaymentEnable = isDirectPaymentEnable;
        viewController.amount = [alert textFieldAtIndex:0].text;
        viewController.landingScreen = 1;
    }
    
}

#pragma mark - AlertView Delegate Methods
- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex{
    
    [self.view endEditing:YES];
    
    if (buttonIndex==1) {
        dispatch_async(dispatch_get_main_queue(), ^{
            [self performSegueWithIdentifier:@"CardViewIdentifier" sender:self];
        });
    }
}

@end
