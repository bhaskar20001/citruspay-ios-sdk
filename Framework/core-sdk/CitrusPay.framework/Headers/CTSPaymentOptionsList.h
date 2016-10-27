//
//  CTSPaymentOptionsList.h
//  CitrusPay
//
//  Created by Mukesh Patil on 1/28/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import <JSONModel/JSONModel.h>
#import "CTSError.h"

#import "CTSPaymentOptions.h"
#import "CTSPaymentDetailUpdate.h"
#import "CTSBlazeCardPayment.h"

/**
 *   CTSPaymentOptionsList Class.
 */
@interface CTSPaymentOptionsList : JSONModel
/**
 *   The CTSPaymentOptionsList class' paymentOptions object.
 */
@property (strong) NSMutableArray <CTSPaymentOptions *> * paymentOptions;

/**
 *   setTransactionAmount.
 *
 *  @param amount  The amount NSString.
 *  @param payment The payment CTSPaymentOptions.
 */
- (void)setTransactionAmount:(NSString *)amount
                  forPayment:(CTSPaymentOptions *)payment;
/**
 *   validatePaymentInfo.
 *
 *  @return The CTSErrorCode Object.
 */
- (CTSErrorCode)validatePaymentInfo;

/**
 *   doCardCorrectionsIfNeeded.
 */
- (void)doCardCorrectionsIfNeeded;

/**
 *   isTokenized.
 *
 *  @return The BOOL Object.
 */
- (BOOL)isTokenized;

/**
 *   validateTokenized.
 *
 *  @return The CTSErrorCode Object.
 */
- (CTSErrorCode)validateTokenized;

/**
 *   validateBillAmountWithPaymentInfo.
 *
 *  @param billAmount The billAmount NSString.
 *
 *  @return The BOOL Object.
 */
- (BOOL)validateBillAmountWithPaymentInfo:(NSString *)billAmount;

/**
 *   toCTSPaymentDetailUpdate.
 *
 *  @return The CTSPaymentDetailUpdate Object.
 */
- (CTSPaymentDetailUpdate *)toCTSPaymentDetailUpdate;

/**
 *   toCTSBlazeCardPayment.
 *
 *  @return The CTSBlazeCardPayment Object.
 */
- (CTSBlazeCardPayment *)toCTSBlazeCardPayment;
@end