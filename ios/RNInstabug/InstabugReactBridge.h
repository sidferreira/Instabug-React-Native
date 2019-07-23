//
//  InstabugReactBridge.h
//  instabugDemo
//
//  Created by Yousef Hamza on 9/29/16.
//  Copyright © 2016 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#import <Instabug/IBGTypes.h>

@interface InstabugReactBridge : RCTEventEmitter <RCTBridgeModule>

/*
 +------------------------------------------------------------------------+
 |                            Instabug Module                             |
 +------------------------------------------------------------------------+
 */

- (void)startWithToken:(NSString *)token invocationEvents:(NSArray*)invocationEventsArray;

- (void)setUserData:(NSString *)userData;

- (void)setTrackUserSteps:(BOOL)isEnabled;

- (void)setSessionProfilerEnabled:(BOOL)sessionProfilerEnabled;

- (void)setPushNotificationsEnabled:(BOOL)isPushNotificationEnabled;

- (void)setLocale:(IBGLocale)locale;

- (void)setColorTheme:(IBGColorTheme)colorTheme;

- (void)setPrimaryColor:(UIColor *)color;

- (void)appendTags:(NSArray *)tags;

- (void)resetTags;

- (void)getTags:(RCTResponseSenderBlock)callBack;

- (void)setString:(NSString*)value toKey:(NSString*)key;

- (void)identifyUserWithEmail:(NSString *)email name:(NSString *)name;

- (void)logOut;

- (void)logUserEventWithName:(NSString *)name;

- (void)logVerbose:(NSString *)log;

- (void)setReproStepsMode:(IBGUserStepsMode)reproStepsMode;

- (void)setUserAttribute:(NSString *)key withValue:(NSString *)value;

- (void)getUserAttribute:(NSString *)key callback:(RCTResponseSenderBlock)callback;

- (void)removeUserAttribute:(NSString *)key;

- (void)getAllUserAttributes:(RCTResponseSenderBlock)callback;

- (void)clearAllUserAttributes;

- (void)showWelcomeMessageWithMode:(IBGWelcomeMessageMode)welcomeMessageMode;

- (void)setWelcomeMessageMode:(IBGWelcomeMessageMode)welcomeMessageMode;

- (void)setFileAttachment:(NSString *)fileLocation;

- (void)show;
/*
 +------------------------------------------------------------------------+
 |                            Surveys Module                             |
 +------------------------------------------------------------------------+
 */

- (void)showSurveyWithToken:(NSString *)surveyToken;

@end
