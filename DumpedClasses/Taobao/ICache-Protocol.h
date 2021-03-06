//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol ICache <NSObject>
- (void)clear;
- (void)removeForKey:(NSString *)arg1;
- (void)queryForKey:(id)arg1 attrs:(void (^)(NSDictionary *))arg2;
- (NSDictionary *)attrsForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)objectForKey:(id)arg1 block:(void (^)(id))arg2;
- (void)objectForKey:(id)arg1 inDisk:(void (^)(id, NSDictionary *))arg2;
- (id)memoryObjectForKey:(id)arg1;
- (void)saveObjectToMemory:(id)arg1 forKey:(id)arg2;
- (void)saveObjectToDisk:(id)arg1 forKey:(id)arg2;
- (void)saveObject:(id)arg1 forKey:(id)arg2;
- (NSString *)name;
- (unsigned long long)cacheSize;
- (id <ICache>)getSubCache:(NSString *)arg1 withFormater:(id <ICacheFormater>)arg2;
- (id <ICache>)getSubCache:(NSString *)arg1;
@end

