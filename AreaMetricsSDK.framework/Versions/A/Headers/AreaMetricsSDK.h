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

@end
