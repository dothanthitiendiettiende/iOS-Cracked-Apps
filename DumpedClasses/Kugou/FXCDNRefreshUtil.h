//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition, NSMutableDictionary;

@interface FXCDNRefreshUtil : NSObject
{
    NSMutableDictionary *_classDic;
    NSMutableDictionary *_timeDic;
    NSMutableDictionary *_tmpTimeDic;
    NSCondition *_lock;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSCondition *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *tmpTimeDic; // @synthesize tmpTimeDic=_tmpTimeDic;
@property(retain, nonatomic) NSMutableDictionary *timeDic; // @synthesize timeDic=_timeDic;
@property(retain, nonatomic) NSMutableDictionary *classDic; // @synthesize classDic=_classDic;
- (void).cxx_destruct;
- (void)removeInstance:(id)arg1;
- (_Bool)isRefresh:(id)arg1 classInstance:(id)arg2;
- (void)storeTime:(id)arg1 key:(id)arg2;
- (id)init;

@end

