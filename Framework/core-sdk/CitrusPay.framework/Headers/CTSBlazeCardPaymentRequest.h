//
//  CTSBlazeCardPaymentRequest.h
//  CitrusPay
//
//  Created by Mukesh Patil on 2/23/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import <JSONModel/JSONModel.h>

/**
 *   CTSBlazeCardPaymentRequest Class.
 */
@interface CTSBlazeCardPaymentRequest : JSONModel
/**
 *   The CTSBlazeCardPaymentRequest class' merchantTransactionId object.
 */
@property (strong) NSString <Optional> * merchantTransactionId;
/**
 *   The CTSBlazeCardPaymentRequest class' merchantAccessKey object.
 */
@property (strong) NSString <Optional> * merchantAccessKey;
/**
 *   The CTSBlazeCardPaymentRequest class' amount object.
 */
@property (strong) NSString <Optional> * amount;
/**
 *   The CTSBlazeCardPaymentRequest class' currency object.
 */
@property (strong) NSString <Optional> * currency;
/**
 *   The CTSBlazeCardPaymentRequest class' firstName object.
 */
@property (strong) NSString <Optional> * firstName;
/**
 *   The CTSBlazeCardPaymentRequest class' lastName object.
 */
@property (strong) NSString <Optional> * lastName;
/**
 *   The CTSBlazeCardPaymentRequest class' email object.
 */
@property (strong) NSString <Optional> * email;
/**
 *   The CTSBlazeCardPaymentRequest class' addressStreet1 object.
 */
@property (strong) NSString <Optional> * addressStreet1;
/**
 *   The CTSBlazeCardPaymentRequest class' addressCity object.
 */
@property (strong) NSString <Optional> * addressCity;
/**
 *   The CTSBlazeCardPaymentRequest class' addressZip object.
 */
@property (strong) NSString <Optional> * addressZip;
/**
 *   The CTSBlazeCardPaymentRequest class' addressState object.
 */
@property (strong) NSString <Optional> * addressState;
/**
 *   The CTSBlazeCardPaymentRequest class' phone object.
 */
@property (strong) NSString <Optional> * phone;
/**
 *   The CTSBlazeCardPaymentRequest class' cardType object.
 */
@property (strong) NSString <Optional> * cardType;
/**
 *   The CTSBlazeCardPaymentRequest class' cardScheme object.
 */
@property (strong) NSString <Optional> * cardScheme;
/**
 *   The CTSBlazeCardPaymentRequest class' cardNo object.
 */
@property (strong) NSString <Optional> * cardNo;
/**
 *   The CTSBlazeCardPaymentRequest class' cvv object.
 */
@property (strong) NSString <Optional> * cvv;
/**
 *   The CTSBlazeCardPaymentRequest class' expiry object.
 */
@property (strong) NSString <Optional> * expiry;
/**
 *   The CTSBlazeCardPaymentRequest class' sessionId object.
 */
@property (strong) NSString <Optional> * sessionId;
/**
 *   The CTSBlazeCardPaymentRequest class' returnUrl object.
 */
@property (strong) NSString <Optional> * returnUrl;
/**
 *   The CTSBlazeCardPaymentRequest class' notifyUrl object.
 */
@property (strong) NSString <Optional> * notifyUrl;
/**
 *   The CTSBlazeCardPaymentRequest class' signature object.
 */
@property (strong) NSString <Optional> * signature;
/**
 *   The CTSBlazeCardPaymentRequest class' customParameters object.
 */
@property(strong) NSDictionary <Optional>* customParameters;
/**
 *   The CTSBlazeCardPaymentRequest class' extraInfoMap object.
 */
@property(strong) NSDictionary <Optional> * extraInfoMap;
@end
