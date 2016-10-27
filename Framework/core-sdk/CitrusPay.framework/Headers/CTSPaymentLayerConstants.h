//
//  CTSPaymentLayerConstants.h
//  RestFulltester
//
//  Created by Raji Nair on 19/06/14.
//  Copyright (c) 2014 Citrus. All rights reserved.
//

#ifndef RestFulltester_CTSPaymentLayerConstants_h
#define RestFulltester_CTSPaymentLayerConstants_h

/**
 *   Constants.
*/
#define CURRENCY_INR @"INR"
#define TYPE_TOKENIZED @"paymentOptionIdToken"
#define TYPE_MEMBER @"paymentOptionToken"

/**
 *   MLC_PROFILE_GET Constants.
 */
#pragma - mark MLC_PROFILE_GET
#define MLC_PROFILE_UPDATE_Payment_PATH @"profile/me/payment"
#define MLC_PAYMENT_GETSIGNATURE_PATH @"/service/v2/mycard/load/extended"
#define MLC_PAYMENT_ACCESSKEY MerchantAccessKey
#define MLC_GET_Payment_METHOD GET
#define MLC_GET_PAYMENT_QUERY_TYPE @"payment"
#define CITRUS_PAYMENT_BASE_URL CITRUS_BASE_URL

/**
 *   MLC_PAYMENT_BASE_URL Constants.
 *
 */
#define MLC_PAYMENT_BASE_URL CITRUS_BASE_URL
#define MLC_GUEST_PAYMENT_BASE_URL CITRUS_BASE_URL
#define MLC_PAYMENT_UPDATE__REQUEST_TYPE [CTSPaymentUpdate class]
#define MLC_PAYMENT_RESPONSE_TYPE [CTSPaymentRes class]

#define MLC_CITRUS_SERVER_URL [@"/service/moto/authorize/struct/" stringByAppendingString:@"payment" ]
//Vikas new payment api
#define MLC_PAYMENT_CANCEL_TRANSACTION @"/cancel"
#define MLC_CITRUS_NEW_SERVER_URL @"/moto/makePayment"
#define MLC_CITRUS_GUESTCHECKOUT_URL @"/service/moto/authorize/struct/prepaid"

#define MLC_PAYMENT_GET_SIGNATURE_METHOD POST
#define MLC_PAYMENT_GET_SIGNATURE_INFO @"getSignature"
#define MLC_PAYMENT_SIGNATURE_REQUEST_MAPPING \
  @{                                          \
    @"amount" : @"amount",                    \
    @"currency" : @"currency",                \
    @"redirect" : @"redirec" @"t"             \
  }
#define MLC_PAYMENT_QUERY_AMOUNT @"amount"
#define MLC_PAYMENT_QUERY_CURRENCY @"currency"
#define MLC_PAYMENT_QUERY_REDIRECT @"redirect"

#define MLC_PAYMENT_GET_SIGNATURE_RES_MAPPING            \
  @{                                                     \
    @"merchantTransactionId" : @"merchantTransactionId", \
    @"merchant" : @"merchant",                           \
    @"customer" : @"customer",                           \
    @"amount" : @"amount",                               \
    @"description" : @"description",                     \
    @"signature" : @"signature"                          \
  }

// paymentcardmapping
#define MLC_PAYMENT_CARDOPTIONMAPPING \
  @{                                  \
    @"cvv" : @"cvv",                  \
    @"expiry" : @"expiry",            \
    @"holder" : @"holder",            \
    @"number" : @"number",            \
    @"scheme" : @"scheme",            \
    @"type" : @"type",                \
    @"code" : @"code"                 \
  }

#define MLC_PAYMENT_NETBANKINGOPTIONMAPPING \
  @{@"type" : @"type", @"code" : @"code"}

#define MLC_PAYMENT_ADDRESS  \
  @{                         \
    @"city" : @"city",       \
    @"country" : @"country", \
    @"state" : @"state",     \
    @"street1" : @"street1", \
    @"street2" : @"street2", \
    @"zip" : @"zip"          \
  }
#define MLC_PAYMENT                            \
  @{                                           \
    @"merchantKey" : @"merchantAccessKey",     \
    @"merchantTxnId" : @"merchantTxnId",       \
    @"notifyUrl" : @"notifyUrl",               \
    @"requestSignature" : @"requestSignature", \
    @"returnUrl" : @"returnUrl"                \
  }

#define MLC_PAYMENT_AMOUNT @{@"currency" : @"currency", @"value" : @"value"}
#define MLC_PAYMENT_TRANSACTION @"Transaction"
#define MLC_PAYMENT_TRANSACTION_RES_MAP \
  @{                                    \
    @"redirectUrl" : @"redirectUrl",    \
    @"pgRespCode" : @"pgRespCode",      \
    @"txMsg" : @"txMsg"                 \
  }

#define MLC_GUESTCHECKOUT_PAYMENT          \
  @{                                       \
    @"returnUrl" : @"returnUrl",           \
    @"expiryYear" : @"expiryYear",         \
    @"amount" : @"amount",                 \
    @"addressState" : @"addressState",     \
    @"paymentMode" : @"paymentMode",       \
    @"lastName" : @"lastName",             \
    @"addressCity" : @"addressCity",       \
    @"address" : @"address",               \
    @"email" : @"email",                   \
    @"cardHolderName" : @"cardHolderName", \
    @"firstName" : @"firstName",           \
    @"cvvNumber" : @"cvvNumber",           \
    @"cardType" : @"cardType",             \
    @"issuerCode" : @"issuerCode",         \
    @"merchantTxnId" : @"merchantTxnId",   \
    @"addressZip" : @"addressZip",         \
    @"expiryMonth" : @"expiryMonth",       \
    @"mobile" : @"mobile",                 \
    @"cardNumber" : @"cardNumber"          \
  }
#define MLC_GUESTCHECKOUT_ACCESSKEY MerchantAccessKey

#define MLC_PAYMENT_GUESTCHECKOUT @"guestCheckoutPayment"
#define MLC_GUESTCHECKOUT_SECRETKEY MerchantSecretKey

#pragma - mark MLC_PAYMENT_GET_PGSETTINGS
#define MLC_PAYMENT_GET_PGSETTINGS_PATH @"/service/v1/merchant/pgsetting"
#define MLC_PAYMENT_GET_PGSETTINGS_QUERY_VANITY @"vanity"
#define MLC_PAYMENT_GET_PGSETTINGS_NETBANKING_REQ_MAPPING \
  @{@"bankName" : @"bankName", @"issuerCode" : @"issuerCode"}

#define MLC_CITRUS_PAY_CVV @"000"
#define MLC_CITRUS_PAY_HOLDER @"Tester Citrus"
#define MLC_CITRUS_PAY_NUMBER @"1234561234561234"
#define MLC_CITRUS_PAY_SCHEME @"CPAY"
#define MLC_CITRUS_PAY_TYPE @"prepaid"
#define MLC_CITRUS_PAY_EXPIRY @"04/2021"

/**
 *   MLC_PAYMENT_GET_PREPAID_BILL Constants.
 */
#pragma - mark MLC_PAYMENT_GET_PREPAID_BILL

#define MLC_PAYMENT_GET_PREPAID_BILL_PATH @"/service/v2/prepayment/load"
#define MLC_PAYMENT_GET_PREPAID_BILL_QUERY_AMOUNT @"amount"
#define MLC_PAYMENT_GET_PREPAID_BILL_QUERY_CURRENCY @"currency"
#define MLC_PAYMENT_GET_PREPAID_BILL_QUERY_REDIRECT @"redirect"
#define MLC_PAYMENT_GET_PREPAID_BILL_QUERY_CURRENCY_INR @"INR"


/**
 *   MLC_CASHOUT Constants.
 */
#pragma - mark MLC_CASHOUT

#define MLC_CASHOUT_PATH @"/service/v2/prepayment/cashout"
#define MLC_CASHOUT_QUERY_AMOUNT @"amount"
#define MLC_CASHOUT_QUERY_CURRENCY @"currency"
#define MLC_CASHOUT_QUERY_ACCOUNT @"account"
#define MLC_CASHOUT_QUERY_IFSC @"ifsc"
#define MLC_CASHOUT_QUERY_OWNER @"owner"
#define MLC_CASHOUT_QUERY_CURRENCY_INR @"INR"

/**
 *   MLC_PGHEALTH Constants.
 */
#pragma - mark MLC_PGHEALTH

#define MLC_PGHEALTH_PATH @"/utility/nativeSDK/pgHealth"
#define MLC_PGHEALTH_QUERY_BANKCODE @"bankCode"
#define MLC_PGHEALTH_QUERY_ALLBANKS @"ALLBANKS"


/**
 *   MLC_DYNAMIC_PRICING Constants.
 */
#pragma - mark MLC_DYNAMIC_PRICING
#define MLC_DYNAMIC_PRICING_PATH @"/dynamicpricing/dynamicpricing/performDynamicPricing"
#define MLC_DYNAMIC_PRICING_QUERY_VALIDATION_DICT @{@"operation":@"validateRule"}
#define MLC_DYNAMIC_PRICING_QUERY_CALCULATE_DICT @{@"operation":@"calculatePricing"}
#define MLC_DYNAMIC_PRICING_QUERY_SEARCHANDAPPLY_DICT @{@"operation":@"searchAndApply"}

//#define MLC_DYNAMIC_PRICING_PATH @"/dynamic-pricing/dynamicpricing/searchAndApplyRuleForPayment"

/**
 MLC_DP_VALIDATE_RULE Constants.
 */
#pragma - mark MLC_DP_VALIDATE_RULE
#define MLC_DP_VALIDATE_RULE_PATH @"/dynamic-pricing/dynamicpricing/calculatePricingForPayment"

/**
 MLC_DP_CALCULATE_RULE Constants.
 */
#pragma - mark MLC_DP_CALCULATE_RULE
#define MLC_DP_CALCULATE_RULE_PATH @"/dynamic-pricing/dynamicpricing/calculatePricingForPayment"

/**
 MLC_DP_MERCHANT_QUERY Constants.
 */
#pragma - mark MLC_DP_MERCHANT_QUERY
#define MLC_DP_MERCHANT_QUERY_PATH @"/dynamicpricing/queryMerchant"
#define MLC_DP_MERCHANT_QUERY_MERCHANTACCKEY @"merchantAccessKey"
#define MLC_DP_MERCHANT_QUERY_SIGNATURE @"signature"



/**
 MLC_TRANSFER_MONEY Constants.
 */
#pragma - mark MLC_TRANSFER_MONEY
#define MLC_TRANSFER_MONEY_PATH @"/service/v2/prepayment/transfer/extended"
#define MLC_TRANSFER_MONEY_QUERY_TO @"to"
#define MLC_TRANSFER_MONEY_QUERY_AMOUNT @"amount"
#define MLC_TRANSFER_MONEY_QUERY_CURRENCY @"currency"
#define MLC_TRANSFER_MONEY_QUERY_MESSAGE @"message"


/**
 source type Constants.
 */
#pragma - mark source type
#define SOURCE_TYPE_GUEST @"MSDKG"
#define SOURCE_TYPE_WALLET @"MSDKW"

/**
 CARD_BIN_SERVICE Constants.
 */
#pragma - mark CARD_BIN_SERVICE
#define MLC_CARD_BIN_SERVICE_PATH @"https://citrusapi.citruspay.com/binservice/v2/bin/"


#pragma - mark CARD_BIN_SERVICE
#define MLC_CARD_BIN_SERVICE_SB_BASEURL @"https://sboxbin.citruspay.com"
#define MLC_CARD_BIN_SERVICE_PROD_BASEURL @"https://bin.citruspay.com"

#define MLC_CARD_BIN_SERVICE_V1_PATH @"/binservice/v1/bin/"
#define MLC_CARD_BIN_SERVICE_V2_PATH @"/binservice/v2/auth/token/bin/"

/**
 ID_FLAGS Constants.
 */
#pragma - mark ID_FLAGS
#define ID_FLAGS_IS_DP_TRANSACTION @"IsDpTransaction"

/**
 PREPAID_PAY_NEW Constants.
 */
#pragma - mark PREPAID_PAY_NEW
#define MLC_PREPAID_PAY_NEW_PATH @"/service/v2/prepayment/prepaid_pay"

#define PREPAID_PG @"prepaid"

//determine the type of the request
//tokenized
//type  prepaidToken
//token

//card
//type creditCard
//holder
//expiry
//pan

//thresholdAmount
//loadamount

/**
 AUTO_SUB_CREATE Constants.
 */
#pragma - mark AUTO_SUB_CREATE
#define AUTO_SUB_CREATE  @"/service/v2/subscription/create"
#define AUTO_SUB_EXPIRY @"expiry"
#define AUTO_SUB_TOKEN @"token"
#define AUTO_SUB_TYPE @"type"
#define AUTO_SUB_HOLDER @"holder"
#define AUTO_SUB_PAN @"pan"
#define AUTO_SUB_CREDIT_CARD @"creditCard"
#define AUTO_SUB_PAN_PREPAID_TOKEN @"pgCardToken"
#define AUTO_SUB_THRESHOLD_AMOUNT @"thresholdAmount"
#define AUTO_SUB_LOAD_AMOUNT @"loadAmount"
#define AUTO_SUB_SUBSCRIPTION_ID @"subscriptionId"
#define AUTO_SUB_TRANSACTION_ID @"authRefId"
#define AUTO_SUB_STATUS @"status"
#define AUTO_SUB_STATUS_ACTIVE @"active"
#define AUTO_SUB_STATUS_INACTIVE @"Inactive"

/**
 AUTO_SUB_GET Constants.
 */
#pragma mark AUTO_SUB_GET
#define AUTO_SUB_GET_PATH @"/service/v2/subscription/get"

/**
 AUTO_SUB_UPDATE Constants.
 */
#pragma mark AUTO_SUB_UPDATE
#define AUTO_SUB_UPDATE_PATH @"/service/v2/subscription/update"
#endif
