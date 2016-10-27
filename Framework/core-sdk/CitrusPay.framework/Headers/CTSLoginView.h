//
//  CTSLoginView.h
//  CitrusPay
//
//  Created by Yadnesh Wankhede on 05/06/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PureLayout.h"
#define OTP_RESEND_TIME 30
#define PASSWORD_TAG 1

typedef enum{
    ViewTypeOTP,
    ViewTypePassword
} ViewType;

@interface CTSLoginView : UIView{
    NSLayoutConstraint *constraintCenterViewY;
    NSLayoutConstraint *constraintSubmitBottom;
     NSLayoutConstraint *constraintHeaderTop;
}
@property(nonatomic,strong)UILabel *LBLWelComeBack, *LBLEmailId, *LBLPhoneNumber, *LBLOtpHeader, *LBLCanResendOtp,*lblTermsAndConditions;
@property(nonatomic,strong)UIButton *btnResendOtp,*btnSubmit,*btnForgotPassword,*btnSwitchToPassword,*btnNotYou;
@property(nonatomic,strong)NSMutableArray *otpFields;
@property(nonatomic,strong)UIView *centerV,*headerV;
@property(nonatomic,strong)UITextField *TFLoginPassword;
@property(nonatomic,assign)BOOL isLoginByOTP;
@property(nonatomic,assign)ViewType viewType;
@property(nonatomic,assign)BOOL otpCounteExpired;


-(void)viewUp;
-(void)viewDown;
-(instancetype)initForOTP;
-(instancetype)initForOTPAndPassword;
-(void)updateOTPResendCounter:(int)otpResendCounter;
-(NSString*)extractOtp;

@end
