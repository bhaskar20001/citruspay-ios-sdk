//
//  CTSBlazeNetLayer.h
//  CitrusPay
//
//  Created by Mukesh Patil on 4/1/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import "CTSPaymentLayer.h"

#import "CTSPaymentReceipt.h"

// BLAZE_NET_PAYMENT
/**
 *   CTSNetBankingPaymentHandler.
 *
 *  @param CTSPaymentReceipt The object CTSPaymentReceipt.
 *  @param NSError           The error CTSPaymentReceipt.
 */
typedef void (^CTSNetBankingPaymentHandler)(CTSPaymentReceipt *,
                                            NSError *);

@interface NSString (CTSBlazeNetLayer)
/**
*   isBankEnabledForBlazeNetPayment.
*
*  @return The BOOL Value.
*/
- (BOOL)isBankEnabledForBlazeNetPayment;
@end

/**
 *   CTSBlazeNetLayer Class.
 */
@interface CTSPaymentLayer (CTSBlazeNetLayer)
// BLAZE_NET_PAYMENT

/**
 *   requestNetBankingPayment.
 *
 *  @param paymentInfo  The paymentInfo CTSPaymentDetailUpdate.
 *  @param contactInfo  The contactInfo CTSContactUpdate.
 *  @param userAddress  The userAddress CTSUserAddress.
 *  @param bill         The bill CTSBill.
 *  @param systemParams The systemParams NSDictionary.
 *  @param controller   The controller UIViewController.
 *  @param completion   The completion CTSNetBankingPaymentHandler.
 */
- (void)requestNetBankingPayment:(CTSPaymentDetailUpdate *)paymentInfo
                     withContact:(CTSContactUpdate*)contactInfo
                     withAddress:(CTSUserAddress*)userAddress
                        withBill:(CTSBill *)bill
                    systemParams:(NSDictionary *)systemParams
         andParentViewController:(UIViewController *)controller
               completionHandler:(CTSNetBankingPaymentHandler)completion;


/**
 *   requestLoadMoneyViaBlazeNetPayment.
 *
 *  @param paymentInfo  The paymentInfo CTSPaymentDetailUpdate.
 *  @param contactInfo  The contactInfo CTSContactUpdate.
 *  @param userAddress  The userAddress CTSUserAddress.
 *  @param returnURL    The returnURL NSString.
 *  @param prepaidBill  The prepaidBill CTSPrepaidBill.
 *  @param custParams   The custParams NSDictionary.
 *  @param systemParams The systemParams NSDictionary.
 *  @param controller   The controller UIViewController.
 *  @param completion   The completion CTSNetBankingPaymentHandler.
 */
- (void)requestLoadMoneyViaBlazeNetPayment:(CTSPaymentDetailUpdate *)paymentInfo
                               withContact:(CTSContactUpdate *)contactInfo
                               withAddress:(CTSUserAddress *)userAddress
                                 returnURL:(NSString *)returnURL
                                  withBill:(CTSPrepaidBill *)prepaidBill
                                custParams:(NSDictionary *)custParams
                              systemParams:(NSDictionary *)systemParams
                   andParentViewController:(UIViewController *)controller
                         completionHandler:(CTSNetBankingPaymentHandler)completion;
@end
