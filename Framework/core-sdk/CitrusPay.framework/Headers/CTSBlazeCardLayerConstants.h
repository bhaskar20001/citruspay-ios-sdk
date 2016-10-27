//
//  CTSBlazeCardLayerConstants.h
//  CitrusPay
//
//  Created by Mukesh Patil on 2/23/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#ifndef CTSBlazeCardLayerConstants_h
#define CTSBlazeCardLayerConstants_h

/**
 *   BC_BASE_URL Constants.
 */
static NSString * const BC_SANDBOX_BASE_URL = @"https://blazecardsbox.citruspay.com/";
static NSString * const BC_PROD_BASE_URL = @"https://blazecards.citruspay.com/";

static NSString * const BC_CURRENCY_VALUE = @"INR";

/**
 *   BLAZE_CARD_TRANSCTION Constants.
 */
#pragma - mark BLAZE_CARD_TRANSCTION
static NSString * const BLAZE_CARD_TRANSCTION = @"cards-gateway/rest/cardspg/mpi/bk";

/**
 *   BLAZE_SAVED_CARD_TRANSCTION Constants.
 */
#pragma - mark BLAZE_SAVED_CARD_TRANSCTION
static NSString * const BLAZE_SAVED_CARD_TRANSCTION = @"cards-gateway/rest/cardspg/mpi/bk/cardtoken";

/**
 *   PAYMENT_MODE Constants.
 */
static NSString * const PAYMENT_MODE_CREDIT_CARD = @"CREDIT";
static NSString * const PAYMENT_MODE_DEBIT_CARD = @"DEBIT";

/**
 *   CANCEL_BLAZE_CARD_TRANSCTION Constants.
 */
#pragma - mark CANCEL_BLAZE_CARD_TRANSCTION
static NSString * const CANCEL_BLAZE_CARD_TRANSCTION = @"rest/cardspg/cancelOngoingTransaction";

static NSString * const BC_CANCEL_TRANSCTION = @"BCCANCELTRANSCTION";

#endif /* CTSBlazeCardLayerConstants_h */
