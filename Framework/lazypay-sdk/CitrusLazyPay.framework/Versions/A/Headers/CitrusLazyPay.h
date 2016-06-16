//
//  CitrusLazyPay.h
//  CitrusPay
//
//  Created by Mukesh Patil on 6/1/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CitrusPay.h"

#import "CTSLPProductSkuDetails.h"

@interface CitrusLazyPay : NSObject
+ (void)initializeWithAmount:(NSString *)amount
                  setBillURL:(NSString *)billURL
        setProductSkuDetails:(CTSLPProductSkuDetails *)productSkuDetails
     andParentViewController:(UIViewController *)controller;
@end
