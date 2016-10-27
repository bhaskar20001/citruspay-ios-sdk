//
//  CTSWalletPGProfileLayer.h
//  CitrusPay
//
//  Created by Mukesh Patil on 3/4/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import "CTSProfileLayer.h"

// CallBack Handlers
/**
 *   CTSConsumerProfileCallBack.
 *
 *  @param CTSConsumerProfile The object CTSConsumerProfile.
 *  @param NSError            The object NSError.
 */
typedef void (^CTSConsumerProfileCallBack)(CTSConsumerProfile *,
                                           NSError *);

/**
 *   CTSWalletPGProfileLayer Class.
 */
@interface CTSWalletPGProfileLayer : CTSProfileLayer
/**
*   fetchConsumerProfileForAmount.
*
*  @param amount     The amount NSString.
*  @param completion The completion CTSConsumerProfileCallBack.
*/
- (void)fetchConsumerProfileForAmount:(NSString *)amount
                    completionHandler:(CTSConsumerProfileCallBack)completion;
@end
