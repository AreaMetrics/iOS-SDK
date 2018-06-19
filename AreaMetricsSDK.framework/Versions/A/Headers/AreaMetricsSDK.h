//
//  AreaMetricsSDK.h
//  AreaMetricsSDK
//
//  Created by Ryo Tulman on 7/20/16.
//  Copyright © 2016 AreaMetrics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <AdSupport/AdSupport.h>

// If setting up your own beacons, use AreaMetrics Proximity UUID "B9407F30-F5F8-466E-AFF9-25556B577272"

@protocol AreaMetricsSDKDelegate <NSObject>
//Implement this delegate to receive user persona
@optional
-(void)didGeneratePersona:(NSDictionary *)persona;
@end

@interface AreaMetricsSDK : NSObject

@property (nonatomic, weak) id<AreaMetricsSDKDelegate> delegate;

+(instancetype)sharedInstance;

-(void)startServiceForAppID:(NSString *)appId withAPIKey:(NSString *)apiKey; //Required and must be called first

-(void)setUserAge:(NSInteger)age; // Optional - set the user's age
-(void)setUserGender:(BOOL)gender; // Optional - set user's gender (0 for female or 1 for male)
-(void)setUserZipCode:(NSString *)zip; // Optional - set user's zip code
-(void)setUserID:(NSString *)userId; // Optional - set user's id within your app
-(void)setCustomDataForKey:(NSString *)key withValue:(NSString *)value; //Optional - set custom data

-(void)setUserGDPRConsent:(BOOL)consent; // Optional - defaulted to NO, which strips out all device identifiers before any data is sent to AreaMetrics servers (if the device is registered to an EU country or one of its location points is in the EU). When set to YES you are communicating that you have obtained sufficient GDPR consent from the user for AreaMetrics to enable data sharing and thus monetize the user for your app. If a user revokes consent, set this BOOL back to NO.

-(void)feedbackEnabled:(BOOL)enabled; // Optional - set to NO to disable SDK NSLogs
-(NSDictionary *)getCachedPersona; // Optional - returns locally stored persona on-demand. Returns nil if persona generation has not successfully occurred yet.

@end
