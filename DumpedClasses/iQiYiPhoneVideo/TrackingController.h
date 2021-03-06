//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class Ad, NSMutableArray, NSMutableDictionary, NSString, TrackingSetting;

@interface TrackingController : NSObject
{
    Ad *_ad;
    NSMutableArray *_senders;
    TrackingSetting *_setting;
    NSString *_cupidUrl;
    NSString *_adxUrl;
    NSString *_notificationKey;
    NSMutableArray *_cupidWhiteList;
    NSMutableDictionary *_cupidTrackParams;
    NSMutableArray *_adxWhiteList;
    NSMutableDictionary *_adxTrackParams;
    NSMutableDictionary *_thirdTrackings;
}

@property(retain, nonatomic) NSMutableDictionary *thirdTrackings; // @synthesize thirdTrackings=_thirdTrackings;
@property(retain, nonatomic) NSMutableDictionary *adxTrackParams; // @synthesize adxTrackParams=_adxTrackParams;
@property(retain, nonatomic) NSMutableArray *adxWhiteList; // @synthesize adxWhiteList=_adxWhiteList;
@property(retain, nonatomic) NSMutableDictionary *cupidTrackParams; // @synthesize cupidTrackParams=_cupidTrackParams;
@property(retain, nonatomic) NSMutableArray *cupidWhiteList; // @synthesize cupidWhiteList=_cupidWhiteList;
@property(retain, nonatomic) NSString *notificationKey; // @synthesize notificationKey=_notificationKey;
@property(retain, nonatomic) NSString *adxUrl; // @synthesize adxUrl=_adxUrl;
@property(retain, nonatomic) NSString *cupidUrl; // @synthesize cupidUrl=_cupidUrl;
@property(retain, nonatomic) TrackingSetting *setting; // @synthesize setting=_setting;
@property(retain, nonatomic) NSMutableArray *senders; // @synthesize senders=_senders;
@property Ad *ad; // @synthesize ad=_ad;
- (void)sendPartyTrackings:(id)arg1 party:(int)arg2 event:(id)arg3 context:(id)arg4;
- (void)sendTrackingsWithEvent:(id)arg1 global:(id)arg2 context:(id)arg3;
- (id)substituteMacros:(id)arg1;
- (id)getThirdTrackings:(id)arg1 context:(id)arg2;
- (id)getAdxTrackings:(id)arg1 global:(id)arg2 context:(id)arg3;
- (id)getCupidTrackings:(id)arg1 global:(id)arg2 context:(id)arg3;
- (id)getAdxTrackingUrl:(id)arg1;
- (id)getCupidTrackingUrl:(id)arg1;
- (_Bool)isAdxTrackable:(id)arg1;
- (_Bool)isCupidTrackable:(id)arg1;
- (void)addTrackParamsWithParty:(int)arg1 params:(id)arg2;
- (void)addTrackEventsWithParty:(int)arg1 events:(id)arg2;
- (void)addThirdPartyTrackings:(id)arg1 trackings:(id)arg2;
- (id)initWithAd:(id)arg1 setting:(id)arg2 notificationKey:(id)arg3;
- (void)dealloc;

@end

