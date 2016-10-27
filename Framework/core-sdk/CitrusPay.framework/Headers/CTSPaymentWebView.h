//
//  CTSPaymentWebView.h
//  CitrusPay
//
//  Created by Mukesh Patil on 1/28/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *   WebViewFinishLoadBlock.
 *
 *  @param UIWebView    The UIWebView Object.
 *  @param NSDictionary The NSDictionary Object.
 */
typedef void(^WebViewFinishLoadBlock)(UIWebView *, NSDictionary *);

/// CTSPaymentWebView
@class CTSPaymentWebView;

// delegate
/**
 *   The CTSPaymentWebViewDelegate class' txnMsg object.
 */
@protocol CTSPaymentWebViewDelegate <NSObject>
/**
 *   paymentWebViewDidFinishLoad
 *
 *  @param paymentWebView The paymentWebView CTSPaymentWebView.
 */
- (void)paymentWebViewDidFinishLoad:(CTSPaymentWebView *)paymentWebView;
@end


/**
 *   CTSPaymentWebView Class.
 */
@interface CTSPaymentWebView : UIWebView
/**
 *   The CTSPaymentWebView class' webViewFinishLoadBlock object.
 */
@property (nonatomic, copy) WebViewFinishLoadBlock webViewFinishLoadBlock;
/**
 *   The CTSPaymentWebView class' response object.
 */
@property (nonatomic, strong) NSMutableDictionary *response;
/**
 *   The CTSPaymentWebView class' returnUrl object.
 */
@property (nonatomic, strong) NSString *returnUrl;
/**
 *   The CTSPaymentWebView class' paymentType object.
 */
@property (nonatomic, strong) NSString *paymentType;
/**
 *   The CTSPaymentWebView class' paymentWebViewDelegate object.
 */
@property (weak, nonatomic) id <CTSPaymentWebViewDelegate> paymentWebViewDelegate;

/**
 *   loadRequest.
 *
 *  @param isLoadMoney       The isLoadMoney BOOL.
 *  @param request           The request NSURLRequest.
 *  @param htmlString        The htmlString NSString.
 *  @param returnUrl         The returnUrl NSString.
 *  @param paymentType       The paymentType NSString.
 *  @param completionHandler The completionHandler WebViewFinishLoadBlock.
 */
- (void)loadRequest:(BOOL)isLoadMoney
            request:(NSURLRequest *)request
         htmlString:(NSString *)htmlString
          returnUrl:(NSString *)returnUrl
     forPaymentType:(NSString *)paymentType
withCompletionHandler:(WebViewFinishLoadBlock)completionHandler;
@end