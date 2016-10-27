//
//  CTSTransactionMessage.h
//  CitrusPay
//
//  Created by Mukesh Patil on 1/29/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import <JSONModel/JSONModel.h>

@class CTSUserDetails;

/**
 *   CTSTransactionMessage Class.
 */
@interface CTSTransactionMessage : JSONModel
/**
 *   The CTSTransactionMessage class' respCode object.
 */
@property (strong) NSString <Optional> * respCode;
/**
 *   The CTSTransactionMessage class' status object.
 */
@property (strong) NSString <Optional> * status;
/**
 *   The CTSTransactionMessage class' description object.
 */
@property (strong) NSString <Optional> * description;
/**
 *   The CTSTransactionMessage class' merchantTransactionId object.
 */
@property (strong) NSString <Optional> * merchantTransactionId;
/**
 *   The CTSTransactionMessage class' amount object.
 */
@property (strong) NSString <Optional> * amount;
/**
 *   The CTSTransactionMessage class' currency object.
 */
@property (strong) NSString <Optional> * currency;
/**
 *   The CTSTransactionMessage class' signature object.
 */
@property (strong) NSString <Optional> * signature;
/**
 *   The CTSTransactionMessage class' txnDateTime object.
 */
@property (strong) NSString <Optional> * txnDateTime;
/**
 *   The CTSTransactionMessage class' paymentMode object.
 */
@property (strong) NSString <Optional> * paymentMode;
/**
 *   The CTSTransactionMessage class' walletType object.
 */
@property (strong) NSString <Optional> * walletType;
/**
 *   The CTSTransactionMessage class' authIdCode object.
 */
@property (strong) NSString <Optional> * authIdCode;
/**
 *   The CTSTransactionMessage class' issuerRefNo object.
 */
@property (strong) NSString <Optional> * issuerRefNo;
/**
 *   The CTSTransactionMessage class' pgTxnId object.
 */
@property (strong) NSString <Optional> * pgTxnId;
/**
 *   The CTSTransactionMessage class' citrusTransactionId object.
 */
@property (strong) NSString <Optional> * citrusTransactionId;
/**
 *   The CTSTransactionMessage class' userDetails object.
 */
@property (strong) CTSUserDetails * userDetails;
@end