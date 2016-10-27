//
//  CTSBlazeNetError.h
//  CitrusPay
//
//  Created by Mukesh Patil on 2/16/16.
//  Copyright © 2016 CitrusPay. All rights reserved.
//

#import <JSONModel/JSONModel.h>

/**
 *   CTSBlazeNetError Class.
 */
@interface CTSBlazeNetError : JSONModel
/**
 *   The CTSBlazeNetError class' error_id object.
 */
@property (strong) NSString <Optional> * error_id;
/**
 *   The CTSBlazeNetError class' error_category object.
 */
@property (strong) NSString <Optional> * error_category;
/**
 *   The CTSBlazeNetError class' error_description object.
 */
@property (strong) NSString <Optional> * error_description;
@end
// {"error_id":"102","error_category":"application","error_description":"Token missing!!!"}
