//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALBBRpcService.h"

@class NSString;

@interface ALBBRpcServiceImpl : NSObject <ALBBRpcService>
{
    NSString *_httpMethod;
}

@property(copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
- (void).cxx_destruct;
- (void)increaseRpcFailureTimes;
- (id)doSyncRequest:(id)arg1 version:(id)arg2 params:(id)arg3 domain:(id)arg4 timeout:(double)arg5 error:(id *)arg6;
- (id)doSyncRequest:(id)arg1 version:(id)arg2 params:(id)arg3 error:(id *)arg4;
- (id)doSyncRequest:(id)arg1 error:(id *)arg2;
- (void)doAsyncRequest:(id)arg1 version:(id)arg2 params:(id)arg3 domain:(id)arg4 timeout:(double)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)doAsyncRequest:(id)arg1 version:(id)arg2 params:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)doAsyncRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)doSyncRequest:(id)arg1 version:(id)arg2 params:(id)arg3 domain:(id)arg4 timeout:(double)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)doSyncRequest:(id)arg1 version:(id)arg2 params:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)doSyncRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)init;
- (id)sessionService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
