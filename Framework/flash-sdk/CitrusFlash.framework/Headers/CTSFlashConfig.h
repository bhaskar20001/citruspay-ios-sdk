//
//  CTSFlashConfig.h
//  CitrusFlash
//
//  Created by Vikas on 31/08/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CTSFlashCardDetails.h"
#import "CTSFlashPaymentDetails.h"
#import "CTSFlashResponse.h"
#import "FlashConstants.h"



typedef void (^ASCitruspayFlashCallback)(CTSFlashResponse* citrusResponse,
                                    NSError* error);


@interface CTSFlashConfig : NSObject


+ (CTSFlashConfig *)flashSharedManager;


//This Methos for Non Citrus User

/**
 *  Payment/Load Money callback
 *
 *  @param requestURL
 *  @param amount
 *  @param cardDetails
 *  @param controller
 *  @param screenOptionType
 *  @param callback
 
 */

- (void) requestLoadUrl:(NSString *)requestURL withAmount:(NSString *)amount
                                          withCardDetails:(CTSFlashCardDetails *)cardDetails
                                 withReturnViewController:(UIViewController *)controller
                               withNativeScreenOptionType:(ScreenOption)screenOptionType
                                 andWithCompletionHandler:(ASCitruspayFlashCallback)callback;



//This method for Citrus User

/**
 *  Payment/Load Money callback
 *
 *  @param requestURL
 *  @param paymentDetail
 *  @param cardDetails
 *  @param isLoadMoney
 *  @param controller
 *  @param screenOptionType
 *  @param callback
 
 */

- (void) requestLoadUrl:(NSString *)requestURL withPaymentDatails:(CTSFlashPaymentDetails *)paymentDetail
                                                  withCardDetails:(CTSFlashCardDetails *)cardDetails
                                                      isForLoadMoney:(BOOL)isLoadMoney
                                         withReturnViewController:(UIViewController *)controller
                                       withNativeScreenOptionType:(ScreenOption)screenOptionType
                                         andWithCompletionHandler:(ASCitruspayFlashCallback)callback;




@end
