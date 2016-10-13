//
//  FlashConstants.h
//  CTS iOS Sdk
//
//  Created by Vikas on 02/06/16.
//  Copyright © 2016 Citrus. All rights reserved.
//


typedef enum{
    
    FULL_SCREEN_SIZE,
    THREE_FOURTH_SCREEN_SIZE,
    HALF_SCREEN_SIZE,
    ONE_FOURTH_SCREEN_SIZE
    
} ScreenOption;

#pragma - mark CARD_BIN_SERVICE

#define MLC_CARD_BIN_SERVICE_PATH @"https://citrusapi.citruspay.com/binservice/v2/bin/"
#define MLC_SAVED_CARD_BIN_SERVICE_PATH @"/cards/metadata/"

#pragma - mark BASE_URL_PRODUCTION

#define BASE_URL_FLASH @"https://admin.citruspay.com"


#pragma - mark FLASH_CONFIG_URL

#define FLASH_CONFIG_URL @"https://s3.amazonaws.com/citruspay-sdk/flash/flashconfig.json"

#pragma - mark JET_PAYMENT_URL

#define JET_PAYMENT_URL @"https://power.citruspay.com/Jet/jsp/TestSSL.jsp"

#pragma - mark BANK_JS_CONFIG

#define BANK_JS_CONFIG_KEY @"js"
#define BANK_VIEW_JS_CONFIG_KEY @"Config"

#define MLC_PROFILE_PAYMENT_NETBANKING_TYPE @"netbanking"

#define LoadMoneyFlashResponeKey @"loadMoneyResponseKey"
