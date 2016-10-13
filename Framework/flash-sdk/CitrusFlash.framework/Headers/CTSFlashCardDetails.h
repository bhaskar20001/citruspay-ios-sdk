//
//  CTSFlashCardDetails.h
//  CitrusFlash
//
//  Created by Vikas on 30/08/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CTSFlashCardDetails : NSObject

@property (strong , nonatomic) NSString *cardNumber;
@property(strong , nonatomic) NSString* cardToken;
@property (strong , nonatomic) NSString *cardType;
@property(strong , nonatomic) NSString* bankIssuerCode;

/**
 *  to init  card always use this method
 *
 *  @return initiated object
 */
- (instancetype)initCardDetals;

@end
