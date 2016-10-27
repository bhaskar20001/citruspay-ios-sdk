//
//  CTSWalletPGLayerConstants.h
//  CitrusPay
//
//  Created by Mukesh Patil on 3/10/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#ifndef CTSWalletPGLayerConstants_h
#define CTSWalletPGLayerConstants_h

/**
 *   WALLETPG_BASE_URL Constants.
 */
static NSString * const WALLETPG_SANDBOX_BASE_URL = @"https://betawallet.citruspay.com/";
static NSString * const WALLETPG_PROD_BASE_URL = @"https://wallet.citruspay.com/";

/**
 *   FETCH_CONSUMER_PROFILE Constants.
 */
#pragma - mark FETCH_CONSUMER_PROFILE
static NSString * const FETCH_CONSUMER_PROFILE = @"wallet/v1/orangepocket/profile/fetchConsumerProfile";

/**
 *   PARAM Constants.
 */
static NSString * const WPG_AMOUNT = @"amount";
static NSString * const WPG_CURRENCY = @"currency";
static NSString * const WPG_CURRENCY_VALUE = @"INR";

/**
 *   CITRUS_WALLET_CHARGE Constants.
 */
#pragma - mark CITRUS_WALLET_CHARGE
static NSString * const CITRUS_WALLETPG_CHARGE = @"rest/v1/orangepocket/pay";

/**
 *   CITRUS_WALLET_CHARGE Constants.
 */
#pragma - mark CITRUS_WALLET_CHARGE
static NSString * const CITRUS_WALLETPG_CANCEL_CHARGE = @"rest/wallet/pay/cancel";

/**
 *   PAYMENT_MODE Constants.
 */
static NSString * const PAYMENT_MODE_WPGCREDIT_CARD = @"CREDIT_CARD";
static NSString * const PAYMENT_MODE_WPGDEBIT_CARD = @"DEBIT_CARD";
static NSString * const PAYMENT_MODE_WPGNET_BANKING = @"NET_BANKING";
static NSString * const PAYMENT_MODE_WPGPREPAID_CARD = @"PREPAID_CARD";
static NSString * const PAYMENT_MODE_WPGMVC = @"MVC";

#endif /* CTSWalletPGLayerConstants_h */
