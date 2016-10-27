//
//  CTSCancelBCPaymentRequest.h
//  CitrusPay
//
//  Created by Mukesh Patil on 3/29/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import <JSONModel/JSONModel.h>

/**
 *   CTSCancelBCPaymentRequest Class.
 */
@interface CTSCancelBCPaymentRequest : JSONModel
/**
 *   The CTSCancelBCPaymentRequest class' merchantTransactionId object.
 */
@property (strong) NSString <Optional> * merchantTransactionId;
/**
 *   The CTSCancelBCPaymentRequest class' merchantAccessKey object.
 */
@property (strong) NSString <Optional> * merchantAccessKey;
/**
 *   The CTSCancelBCPaymentRequest class' amount object.
 */
@property (strong) NSString <Optional> * amount;
/**
 *   The CTSCancelBCPaymentRequest class' currency object.
 */
@property (strong) NSString <Optional> * currency;
/**
 *   The CTSCancelBCPaymentRequest class' firstName object.
 */
@property (strong) NSString <Optional> * firstName;
/**
 *   The CTSCancelBCPaymentRequest class' lastName object.
 */
@property (strong) NSString <Optional> * lastName;
/**
 *   The CTSCancelBCPaymentRequest class' email object.
 */
@property (strong) NSString <Optional> * email;
/**
 *   The CTSCancelBCPaymentRequest class' addressZip object.
 */
@property (strong) NSString <Optional> * addressZip;
/**
 *   The CTSCancelBCPaymentRequest class' phone object.
 */
@property (strong) NSString <Optional> * phone;
/**
 *   The CTSCancelBCPaymentRequest class' cardType object.
 */
@property (strong) NSString <Optional> * cardType;
/**
 *   The CTSCancelBCPaymentRequest class' cardScheme object.
 */
@property (strong) NSString <Optional> * cardScheme;
/**
 *   The CTSCancelBCPaymentRequest class' cardNo object.
 */
@property (strong) NSString <Optional> * cardNo;
/**
 *   The CTSCancelBCPaymentRequest class' cvv object.
 */
@property (strong) NSString <Optional> * cvv;
/**
 *   The CTSCancelBCPaymentRequest class' expiry object.
 */
@property (strong) NSString <Optional> * expiry;
/**
 *   The CTSCancelBCPaymentRequest class' returnUrl object.
 */
@property (strong) NSString <Optional> * returnUrl;
/**
 *   The CTSCancelBCPaymentRequest class' notifyUrl object.
 */
@property (strong) NSString <Optional> * notifyUrl;
/**
 *   The CTSCancelBCPaymentRequest class' signature object.
 */
@property (strong) NSString <Optional> * signature;
/**
 *   The CTSCancelBCPaymentRequest class' citrusTransactionId object.
 */
@property (strong) NSString <Optional> * citrusTransactionId;
/**
 *   The CTSCancelBCPaymentRequest class' customParameters object.
 */
@property(strong) NSDictionary <Optional>* customParameters;
/**
 *   The CTSCancelBCPaymentRequest class' extraInfoMap object.
 */
@property(strong) NSDictionary <Optional> * extraInfoMap;
@end
