//
//  CTSFlashPaymentDetails.h
//  CitrusFlash
//
//  Created by Vikas on 30/08/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CTSFlashPaymentDetails : NSObject

@property (strong , nonatomic) NSString *amount;
@property (strong , nonatomic) NSString *currency;
@property (strong , nonatomic) NSString *txnID;
@property (strong , nonatomic) NSString *merchantTxnId;
@property (strong , nonatomic) NSString *requestSignature;
@property (strong , nonatomic) NSString *merchantAccessKey;
@property (strong , nonatomic) NSString *returnUrl;

/**
 *  to init  card always use this method
 *
 *  @return initiated object
 */
- (instancetype)initPayment;

@end
