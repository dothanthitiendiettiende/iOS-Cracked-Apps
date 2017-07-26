//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NowLiveConfigMgr : NSObject
{
    _Bool _noneWifiWarned;
}

+ (_Bool)isNowLiveUrl:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool noneWifiWarned; // @synthesize noneWifiWarned=_noneWifiWarned;
- (id)getNowLiveConfig;
- (void)updateConfig;
- (void)setIdleTimerDisabled:(_Bool)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 origStatus:(_Bool)arg2;
- (int)resetScrollCount;
- (void)increaseScrollCount;
- (_Bool)canInvokeApi:(id)arg1 api:(id)arg2;

@end
