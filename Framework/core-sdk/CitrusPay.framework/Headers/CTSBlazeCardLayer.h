//
//  CTSBlazeCardLayer.h
//  CitrusPay
//
//  Created by Mukesh Patil on 4/1/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import "CTSPaymentLayer.h"

#import "CTSPaymentReceipt.h"
#import "CTSBlazeCardTransactionInternal.h"
#import "CTSPaymentOptionsList.h"

@interface NSString (CTSBlazeCardLayer)
/**
*   isCardSchemeEnabledForBlazeCardPayment.
*
 *  @return The BOOL Value.
*/
- (BOOL)isCardSchemeEnabledForBlazeCardPayment;

/**
 *   getBlazeCardCardScheme.
 *
 *  @return The String Value.
 */
- (NSString *)getBlazeCardCardScheme;
@end



@class UIViewController, CTSBlazeCardPayment;

// CallBack handlers
/**
 *   CTSCardPaymentHandler.
 *
 *  @param CTSPaymentReceipt The object CTSPaymentReceipt.
 *  @param NSError           The error NSError.
 */
typedef void (^CTSCardPaymentHandler)(CTSPaymentReceipt *,
                                      NSError *);

// Cancel card payment
/**
 *   CTSCancelCardPaymentHandler.
 *
 *  @param CTSBlazeCardTransactionInternal The object CTSBlazeCardTransactionInternal.
 *  @param NSError                         The error NSError.
 */
typedef void (^CTSCancelCardPaymentHandler)(CTSBlazeCardTransactionInternal *,
                                            NSError *);

/**
 *   CTSBlazeCardLayer Class.
 */
@interface CTSBlazeCardLayer : CTSPaymentLayer
// BLAZE_CARD_PAYMENT


/**
*   getBCBaseURL.
*
*  @return The String Value.
*/
- (NSString *)getBCBaseURL;

/**
 *   requestCardPayment.
 *
 *  @param paymentInfo  The paymentInfo CTSPaymentOptionsList.
 *  @param contactInfo  The contactInfo CTSContactUpdate.
 *  @param userAddress  The userAddress CTSUserAddress.
 *  @param bill         The bill CTSBill.
 *  @param systemParams The systemParams NSDictionary.
 *  @param controller   The controller UIViewController.
 *  @param completion   The completion CTSCardPaymentHandler.
 */
- (void)requestCardPayment:(CTSPaymentOptionsList *)paymentInfo
               withContact:(CTSContactUpdate*)contactInfo
               withAddress:(CTSUserAddress*)userAddress
                  withBill:(CTSBill *)bill
              systemParams:(NSDictionary *)systemParams
   andParentViewController:(UIViewController *)controller
         completionHandler:(CTSCardPaymentHandler)completion;

/**
 *   requestCancelCardPayment.
 *
 *  @param citrusTransactionId The citrusTransactionId String.
 *  @param paymentInfo         The paymentInfo CTSPaymentOptionsList.
 *  @param contactInfo         The contactInfo CTSContactUpdate.
 *  @param userAddress         The userAddress CTSContactUpdate.
 *  @param bill                The bill CTSBill.
 *  @param systemParams        The systemParams NSDictionary.
 *  @param completion          The completion CTSCancelCardPaymentHandler.
 */
- (void)requestCancelCardPayment:(NSString *)citrusTransactionId
                     paymentInfo:(CTSPaymentOptionsList *)paymentInfo
                     withContact:(CTSContactUpdate *)contactInfo
                     withAddress:(CTSUserAddress *)userAddress
                        withBill:(CTSBill *)bill
                    systemParams:(NSDictionary *)systemParams
               completionHandler:(CTSCancelCardPaymentHandler)completion;


/**
 *   requestLoadMoneyViaBlazeCardPayment.
 *
 *  @param paymentInfo  The paymentInfo CTSPaymentOptionsList.
 *  @param contactInfo  The contactInfo CTSContactUpdate.
 *  @param userAddress  The userAddress CTSUserAddress.
 *  @param returnURL    The returnURL String.
 *  @param prepaidBill  The prepaidBill CTSPrepaidBill.
 *  @param custParams   The custParams NSDictionary.
 *  @param systemParams The systemParams NSDictionary.
 *  @param controller   The controller UIViewController.
 *  @param completion   The completion CTSCardPaymentHandler.
 */
- (void)requestLoadMoneyViaBlazeCardPayment:(CTSPaymentOptionsList *)paymentInfo
                               withContact:(CTSContactUpdate *)contactInfo
                               withAddress:(CTSUserAddress *)userAddress
                                 returnURL:(NSString *)returnURL
                                  withBill:(CTSPrepaidBill *)prepaidBill
                                custParams:(NSDictionary *)custParams
                               systemParams:(NSDictionary *)systemParams
                   andParentViewController:(UIViewController *)controller
                         completionHandler:(CTSCardPaymentHandler)completion;
@end
