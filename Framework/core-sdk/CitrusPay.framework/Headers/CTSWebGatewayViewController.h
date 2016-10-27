//
//  CTSWebGatewayViewController.h
//  CitrusPay
//
//  Created by Mukesh Patil on 1/28/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CTSPaymentWebView.h"
#import "CTSBill.h"
#import "CTSPaymentLayer.h"
#import "CTSPaymentOptionsList.h"

/// CTSPaymentTransactionInternal.
@class CTSPaymentTransactionInternal;

/**
 *   CTSWebGatewayCallBack.
 *
 *  @param NSDictionary The dict NSDictionary.
 */
typedef void (^CTSWebGatewayCallBack)(NSDictionary *);


/**
 *   CTSWebGatewayViewController Class.
 */
@interface CTSWebGatewayViewController : UIViewController <UIWebViewDelegate>
/**
 *   loadWithRequest.
 *
 *  @param isLoadMoney         The isLoadMoney BOOL.
 *  @param request             The request NSURLRequest.
 *  @param htmlString          The htmlString NSString.
 *  @param paymentType         The paymentType NSString.
 *  @param returnUrl           The returnUrl NSString.
 *  @param citrusTransactionId The citrusTransactionId NSString.
 *  @param paymentInfo         The paymentInfo CTSPaymentOptionsList.
 *  @param contactInfo         The contactInfo CTSContactUpdate.
 *  @param userAddress         The userAddress CTSUserAddress.
 *  @param bill                The bill CTSBill.
 *  @param systemParams        The systemParams NSDictionary.
 *  @param callBack            The callBack CTSWebGatewayCallBack.
 */
- (void)loadWithRequest:(BOOL)isLoadMoney
                request:(NSURLRequest *)request
             htmlString:(NSString *)htmlString
         forPaymentType:(NSString *)paymentType
              returnUrl:(NSString *)returnUrl
    citrusTransactionId:(NSString *)citrusTransactionId
            paymentInfo:(CTSPaymentOptionsList *)paymentInfo
            withContact:(CTSContactUpdate *)contactInfo
            withAddress:(CTSUserAddress *)userAddress
               withBill:(CTSBill *)bill
           systemParams:(NSDictionary *)systemParams
  withCompletionHandler:(CTSWebGatewayCallBack)callBack;

/**
 *   makeReturlURLPOSTRequest.
 *
 *  @param paymentTransactionInternal The paymentTransactionInternal CTSPaymentTransactionInternal.
 *  @param bill                       The bill CTSBill.
 *
 *  @return The NSMutableURLRequest Object.
 */
- (NSMutableURLRequest *)makeReturlURLPOSTRequest:(CTSPaymentTransactionInternal *)paymentTransactionInternal
                                             bill:(CTSBill *)bill;
@end
