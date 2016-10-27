//
//  CTSPaymentTransactionInternal.h
//  CitrusPay
//
//  Created by Mukesh Patil on 1/29/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import <JSONModel/JSONModel.h>

#import "CTSTransactionMessage.h"

/**
 *   CTSPaymentTransactionInternal Class.
 */
@interface CTSPaymentTransactionInternal : JSONModel
/**
 *   The CTSPaymentTransactionInternal class' redirectUrl object.
 */
@property (strong) NSString <Optional> * redirectUrl;
/**
 *   The CTSPaymentTransactionInternal class' responseCode object.
 */
@property (strong) NSString <Optional> * responseCode;
/**
 *   The CTSPaymentTransactionInternal class' txnStatus object.
 */
@property (strong) NSString <Optional> * txnStatus;
/**
 *   The CTSPaymentTransactionInternal class' txnMsg object.
 */
@property (strong) CTSTransactionMessage * txnMsg;
@end