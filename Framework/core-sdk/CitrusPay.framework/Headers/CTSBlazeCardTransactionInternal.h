//
//  CTSBlazeCardTransactionInternal.h
//  CitrusPay
//
//  Created by Mukesh Patil on 2/23/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import <JSONModel/JSONModel.h>

/**
 *   CTSBlazeCardTransactionInternal Class.
 */
@interface CTSBlazeCardTransactionInternal : JSONModel
/**
 *   The CTSBlazeCardTransactionInternal class' errorMessage object.
 */
@property (strong) NSString <Optional> * errorMessage;
/**
 *   The CTSBlazeCardTransactionInternal class' merchantTransactionId object.
 */
@property (strong) NSString <Optional> * merchantTransactionId;
/**
 *   The CTSBlazeCardTransactionInternal class' citrusTransactionId object.
 */
@property (strong) NSString <Optional> * citrusTransactionId;
/**
 *   The CTSBlazeCardTransactionInternal class' pgTransactionStatus object.
 */
@property (strong) NSString <Optional> * pgTransactionStatus;
/**
 *   The CTSBlazeCardTransactionInternal class' mappedPgTransactionStatus object.
 */
@property (strong) NSString <Optional> * mappedPgTransactionStatus;
/**
 *   The CTSBlazeCardTransactionInternal class' system object.
 */
@property (strong) NSString <Optional> * system;
/**
 *   The CTSBlazeCardTransactionInternal class' info object.
 */
@property (strong) NSDictionary <Optional> * info;
/**
 *   The CTSBlazeCardTransactionInternal class' errorCode object.
 */
@property (assign) NSInteger errorCode;
@end