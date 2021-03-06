//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSOperationQueue, ONENetDetctorHTTPClient;

@interface ONENetDetctorManager : NSObject
{
    NSOperationQueue *_detctorQueue;
    NSArray *_taskList;
    ONENetDetctorHTTPClient *_client;
    NSObject<OS_dispatch_queue> *_gcd_queue;
}

+ (void)delayStart;
+ (id)sharedInstance;
@property(nonatomic) NSObject<OS_dispatch_queue> *gcd_queue; // @synthesize gcd_queue=_gcd_queue;
@property(retain, nonatomic) ONENetDetctorHTTPClient *client; // @synthesize client=_client;
@property(copy, nonatomic) NSArray *taskList; // @synthesize taskList=_taskList;
@property(retain, nonatomic) NSOperationQueue *detctorQueue; // @synthesize detctorQueue=_detctorQueue;
- (void).cxx_destruct;
- (_Bool)needTraceRoute;
- (void)retryCaches;
- (void)executeDelay:(long long)arg1;
- (void)execute;
- (void)configureTask;

@end

