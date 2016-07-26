//
//  AreaMetricsSDK.h
//  AreaMetricsSDK
//
//  Created by Ryo Tulman on 7/20/16.
//  Copyright © 2016 AreaMetrics. All rights reserved.
//

#import <UIKit/UIKit.h>

#define AREAMETRICS_PROXIMITY_UUID [[NSUUID alloc] initWithUUIDString:@"B9407F30-F5F8-466E-AFF9-25556B577272"]


//! Project version number for AreaMetricsSDK.
FOUNDATION_EXPORT double AreaMetricsSDKVersionNumber;

//! Project version string for AreaMetricsSDK.
FOUNDATION_EXPORT const unsigned char AreaMetricsSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <AreaMetricsSDK/PublicHeader.h>

@interface AreaMetricsSDK : NSObject

@property (strong, nonatomic) NSString *appID;      // Required - APP ID from AreaMetrics
@property (strong, nonatomic) NSString *apiKey;     // Required - API Key from AreaMetrics
@property (copy, nonatomic) NSString *appVersion; // Optional - set your app version string
@property (nonatomic, assign) bool setIDFA; // Optional - set IDFA (defaults to 'true' unless changed before 'startService' is called)

+(AreaMetricsSDK *) sharedInstance;
-(void) startService;               // Required - start the AreaMetrics service SDK
-(void) setUserAge:(int) value;     // Optional - set the user's age
-(void) setUserGender:(bool) value; // Optional - set user's gender (0 for female or 1 for male)
-(void) setUserZipCode:(NSString *) value;  // Optional - set user's zip code
-(void) setUserID:(NSString *) value;       // Optional - set user's id within your app
-(void) setUserData:(NSString *) category parameter:(NSString *) parameter value:(NSString *) value;    // Optional - set advanced user data (see documentation at areametrics.readme.io for more details)

-(NSString *) getVersionString;
-(NSString *) getUUID;

@end