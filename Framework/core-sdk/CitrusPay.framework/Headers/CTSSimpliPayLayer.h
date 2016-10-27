//
//  CTSSimpliPayLayer.h
//  CitrusPay
//
//  Created by Mukesh Patil on 5/13/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import "CTSPaymentLayer.h"

/**
 *   CTSSimpliPayLayer Class.
 */
@interface CTSSimpliPayLayer : CTSPaymentLayer

/**
*   SimpliPay Init Orchestration Layer For All Payment Single End Point.
*
*  @param paymentType The PaymentType (MVCPayment/citrusCashPayment/PGPayment/performDynamicPricing/splitPayment/loadMoney).
*  @param controller  The Current Controller Self Object.
*  @param completion  The Callback into PaymentReceipt & Error.
*/
- (void)simpliPayInitOrchestrationLayer:(PaymentType *)paymentType
                andParentViewController:(UIViewController *)controller
                      completionHandler:(CTSSimpliPayCompletionHandler)completion;
/**
 *   Request Calculate Payment Distribution - for Split Payment.
 *
 *  @param amount     The Transaction Amount.
 *  @param completion The callback into AmountDistribution viz mvcAmount, cashAmount, remainingAmount & totalAmount, BOOL useMVC, useCash & enoughMVCAndCash.
 */
- (void)requestCalculatePaymentDistributionInternal:(NSString *)amount
                                  completionHandler:(CTSPaymentDistributionCompletionHandler)completion;

@end