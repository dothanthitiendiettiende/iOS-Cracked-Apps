//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol CacheManager <NSObject>
- (void)clearAllCache;
- (id)cacheObjectForKey:(NSString *)arg1;
- (void)addCacheForKey:(NSString *)arg1 object:(id)arg2;
@end
