//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTMicroApplicationDelegate-Protocol.h"

@class NSString, UIViewController;

@interface BarcodePayAppDelegate : NSObject <DTMicroApplicationDelegate>
{
    NSString *_callbackAppId;
    NSString *_callbackUrl;
    NSString *_source;
    NSString *_noneExit;
    long long _tabIndex;
    UIViewController *_rootController;
}

@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
@property(nonatomic) long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(copy, nonatomic) NSString *noneExit; // @synthesize noneExit=_noneExit;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *callbackUrl; // @synthesize callbackUrl=_callbackUrl;
@property(copy, nonatomic) NSString *callbackAppId; // @synthesize callbackAppId=_callbackAppId;
- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1 animated:(_Bool)arg2;
- (void)delayDisplaySuccPay:(id)arg1;
- (void)application:(id)arg1 didResumeWithOptions:(id)arg2;
- (void)application:(id)arg1 willResumeWithOptions:(id)arg2;
- (void)applicationWillPause:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (void)applicationDidCreate:(id)arg1;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

