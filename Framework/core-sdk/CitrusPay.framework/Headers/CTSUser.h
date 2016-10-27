//
//  CTSUser.h
//  CTS iOS Sdk
//
//  Created by Yadnesh on 9/1/15.
//  Copyright (c) 2015 Citrus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CTSUserAddress.h"
#import "CTSContactUpdate.h"
@interface CTSUser : NSObject
@property (strong )NSString *firstName,*lastName, *email,*mobile;
@property (strong )CTSUserAddress * address;
-(CTSContactUpdate *)contact;

@end
