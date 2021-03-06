//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSTimer;
@protocol OS_dispatch_semaphore;

@interface DjangoTokenManager : NSObject
{
    NSString *_djangoToken;
    unsigned long long _tokenExpireTime;
    unsigned long long _tokenVerifyTime;
    NSDate *_netSuccessTime;
    NSObject<OS_dispatch_semaphore> *_netTokenSemap;
    NSTimer *_updateTimer;
}

@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *netTokenSemap; // @synthesize netTokenSemap=_netTokenSemap;
@property(retain, nonatomic) NSDate *netSuccessTime; // @synthesize netSuccessTime=_netSuccessTime;
@property(nonatomic) unsigned long long tokenVerifyTime; // @synthesize tokenVerifyTime=_tokenVerifyTime;
@property(nonatomic) unsigned long long tokenExpireTime; // @synthesize tokenExpireTime=_tokenExpireTime;
@property(retain, nonatomic) NSString *djangoToken; // @synthesize djangoToken=_djangoToken;
- (void).cxx_destruct;
- (void)updateToken;
- (void)stopTimer;
- (void)startTimer;
- (void)getTokenFromNetWithSuccess:(CDUnknownBlockType)arg1 Fail:(CDUnknownBlockType)arg2;
- (id)getTokenFromDisk;
- (_Bool)needRefreshToken:(unsigned long long)arg1;
- (void)syncGetTokenByNetSuccess:(CDUnknownBlockType)arg1 Fail:(CDUnknownBlockType)arg2;
- (void)updateTokenForErrReqest;
- (void)getTokenSuccess:(CDUnknownBlockType)arg1 Fail:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

