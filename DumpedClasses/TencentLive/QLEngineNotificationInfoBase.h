//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLJCEFormatModelItem.h"

@class NSDictionary, NSString;

@interface QLEngineNotificationInfoBase : NSObject <QLJCEFormatModelItem>
{
    long long _requestID;
    int _notifiAction;
    int _status;
    long long _error;
    NSString *_msg;
    NSString *_clientKey;
    NSDictionary *_userParam;
    NSString *msgID;
    NSString *seqID;
}

@property(retain, nonatomic) NSString *clientKey; // @synthesize clientKey=_clientKey;
@property(retain, nonatomic) NSString *seqID; // @synthesize seqID;
@property(retain, nonatomic) NSString *msgID; // @synthesize msgID;
@property(retain, nonatomic) NSDictionary *userParam; // @synthesize userParam=_userParam;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long error; // @synthesize error=_error;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int notifiAction; // @synthesize notifiAction=_notifiAction;
@property(nonatomic) long long requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (id)initFailedWithRequestID:(long long)arg1 action:(int)arg2 error:(long long)arg3 msg:(id)arg4;
- (id)initLocalWithRequestID:(long long)arg1 action:(int)arg2;
- (id)initSuccessWithRequestID:(long long)arg1 action:(int)arg2;
- (id)initWithError:(long long)arg1 msg:(id)arg2;
- (id)initWithLocal;
- (id)initWithSuccess;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
