//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NVMModuleManager.h"

@class NSString;

@interface NVMDebugModuleManager : NSObject <NVMModuleManager>
{
}

+ (void)setLuckyUser:(_Bool)arg1;
+ (_Bool)isLuckyUser;
+ (void)load;
- (void)requestLUser;
- (id)getVisibleViewControllerFrom:(id)arg1;
- (_Bool)isDebugViewPresented;
- (void)showDebugView;
- (void)addAppWiseDebugViewCalloutGesture;
- (void)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)registerServices;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

