//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DiDiPublicService : NSObject
{
}

+ (void)setEnvironment:(unsigned long long)arg1;
+ (void)showAdWhenCloseLocalWebView;
+ (void)showHomePageResourceWithBusinessID:(long long)arg1 response:(CDUnknownBlockType)arg2 openUrlByLocalWebView:(CDUnknownBlockType)arg3;
+ (void)getLaunchingResurceWithViewController:(CDUnknownBlockType)arg1 autoStart:(_Bool)arg2 showADDetail:(CDUnknownBlockType)arg3 finish:(CDUnknownBlockType)arg4;
+ (_Bool)needShowLaunchingResource;
+ (void)fetchHomePageResourceForFirstTimeWithResourceName:(id)arg1;
+ (void)getCachedRegisterParasIfNecessary;
+ (void)hidePopupView;
+ (void)setIsTopPageCheckBlock:(CDUnknownBlockType)arg1;
+ (void)registerWithParas:(CDUnknownBlockType)arg1;
+ (void)didi_registerWithParas:(CDUnknownBlockType)arg1;
+ (void)didi_config;
+ (void)international_registerWithParas:(CDUnknownBlockType)arg1;
+ (void)international_config;
+ (void)brazil_registerWithParas:(CDUnknownBlockType)arg1;
+ (void)brazil_config;
+ (void)echo_registerWithParas:(CDUnknownBlockType)arg1;
+ (void)echo_config;

@end

