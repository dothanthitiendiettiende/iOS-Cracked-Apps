//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AUDialogDelegate.h"

@class AUToast, DTRpcAsyncCaller, NSString;

@interface STOpenVerifyUnit : NSObject <AUDialogDelegate>
{
    DTRpcAsyncCaller *_caller;
    AUToast *_toast;
    NSString *_gotoUrl;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *gotoUrl; // @synthesize gotoUrl=_gotoUrl;
@property(retain, nonatomic) AUToast *toast; // @synthesize toast=_toast;
@property(retain, nonatomic) DTRpcAsyncCaller *caller; // @synthesize caller=_caller;
- (void).cxx_destruct;
- (id)lastControllerView;
- (void)toastErrorWithSupView:(id)arg1 text:(id)arg2;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertViewWithPopView:(id)arg1;
- (void)openVerifyPop:(id)arg1 sBlock:(CDUnknownBlockType)arg2;
- (void)alertJoinErrorWithSupView:(id)arg1 text:(id)arg2;
- (void)openVerifyWithInstId:(id)arg1 scene:(id)arg2 sBlock:(CDUnknownBlockType)arg3;
- (void)agreeContractWithInstId:(id)arg1 scene:(id)arg2 sBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

