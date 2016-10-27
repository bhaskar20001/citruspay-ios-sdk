//
//  CTSWalletPGPaymentLayer.h
//  CitrusPay
//
//  Created by Mukesh Patil on 3/4/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import "CTSPaymentLayer.h"

#import "CTSPaymentReceipt.h"

/// Class Models
@class CTSPaymentDetailUpdate,
CTSContactUpdate,
CTSBill,
UIViewController,
CTSPaymentTransactionInternal,
CTSPaymentOptionsList;

// CallBack Handlers
/**
 *   CTSWalletPGPaymentCallBack.
 *
 *  @param CTSPaymentReceipt The object CTSPaymentReceipt.
 *  @param NSError           The error NSError.
 */
typedef void (^CTSWalletPGPaymentCallBack)(CTSPaymentReceipt *,
                                           NSError *);

/**
 *   CTSWalletPGPaymentInternalCallBack.
 *
 *  @param CTSPaymentTransactionInternal The object CTSPaymentTransactionInternal.
 *  @param NSError                       The error NSError.
 */
typedef void (^CTSWalletPGPaymentInternalCallBack)(CTSPaymentTransactionInternal *,
                                                   NSError *);

/**
 *   CTSWalletPGPaymentLayer Class.
 */
@interface CTSWalletPGPaymentLayer : CTSPaymentLayer

/**
*   requestWalletPGPayment.
*
*  @param paymentInfo The paymentInfo CTSPaymentOptionsList.
*  @param contactInfo The contactInfo CTSContactUpdate.
*  @param bill        The bill CTSBill.
*  @param controller  The controller UIViewController.
*  @param completion  The completion CTSWalletPGPaymentCallBack.
*/
- (void)requestWalletPGPayment:(CTSPaymentOptionsList *)paymentInfo
                   withContact:(CTSContactUpdate *)contactInfo
                      withBill:(CTSBill *)bill
       andParentViewController:(UIViewController *)controller
             completionHandler:(CTSWalletPGPaymentCallBack)completion;

/**
 *   requestWalletPGCancelPayment.
 *
 *  @param paymentInfo The paymentInfo CTSPaymentOptionsList.
 *  @param contactInfo The contactInfo CTSContactUpdate.
 *  @param bill        The bill CTSBill.
 *  @param completion  The completion CTSWalletPGPaymentInternalCallBack.
 */
- (void)requestWalletPGCancelPayment:(CTSPaymentOptionsList *)paymentInfo
                         withContact:(CTSContactUpdate *)contactInfo
                            withBill:(CTSBill *)bill
                   completionHandler:(CTSWalletPGPaymentInternalCallBack)completion;
@end