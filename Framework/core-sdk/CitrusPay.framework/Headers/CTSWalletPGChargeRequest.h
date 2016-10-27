//
//  CTSWalletPGChargeRequest.h
//  CitrusPay
//
//  Created by Mukesh Patil on 1/28/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import <JSONModel/JSONModel.h>

#import "CTSPaymentOptions.h"

/**
 *   CTSWalletPGChargeRequest Class.
 */
@interface CTSWalletPGChargeRequest : JSONModel
/**
 *   The CTSWalletPGChargeRequest class' merchantAccessKey object.
 */
@property (strong) NSString <Optional> * merchantAccessKey;
/**
 *   The CTSWalletPGChargeRequest class' email object.
 */
@property (strong) NSString <Optional> * email;
/**
 *   The CTSWalletPGChargeRequest class' mobile object.
 */
@property (strong) NSString <Optional> * mobile;
/**
 *   The CTSWalletPGChargeRequest class' currency object.
 */
@property (strong) NSString <Optional> * currency;
/**
 *   The CTSWalletPGChargeRequest class' amount object.
 */
@property (strong) NSString <Optional> * amount;
/**
 *   The CTSWalletPGChargeRequest class' signature object.
 */
@property (strong) NSString <Optional> * signature;
/**
 *   The CTSWalletPGChargeRequest class' merchantTransactionId object.
 */
@property (strong) NSString <Optional> * merchantTransactionId;
/**
 *   The CTSWalletPGChargeRequest class' returnUrl object.
 */
@property (strong) NSString <Optional> * returnUrl;
/**
 *   The CTSWalletPGChargeRequest class' notifyUrl object.
 */
@property (strong) NSString <Optional> * notifyUrl;
/**
 *   The CTSWalletPGChargeRequest class' moto object.
 */
@property (strong) NSString <Optional> * moto;
/**
 *   The CTSWalletPGChargeRequest class' paymentOptions object.
 */
@property( strong) NSMutableArray <CTSPaymentOptions *>* paymentOptions;
/**
 *   The CTSWalletPGChargeRequest class' customParameters object.
 */
@property(strong) NSDictionary <Optional> * customParameters;
/**
 *   getPaymentOptions
 *
 *  @param array The array NSMutableArray.
 *
 *  @return The NSMutableArray Object.
 */
- (NSMutableArray *)getPaymentOptions:(NSMutableArray *)array;

@end
