//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCPluginBaseProtocol.h"

@class NSDictionary, NSString, TBModelStatusHandler;

@interface TBIMRecentContactPlugin : NSObject <MCPluginBaseProtocol>
{
    CDUnknownBlockType _beginInitBlock;
    CDUnknownBlockType _endInitBlock;
    TBModelStatusHandler *_handler;
    id <MCRecentContactCustomInterface> _recentContactCustomInterface;
}

@property(nonatomic) __weak id <MCRecentContactCustomInterface> recentContactCustomInterface; // @synthesize recentContactCustomInterface=_recentContactCustomInterface;
@property(retain, nonatomic) TBModelStatusHandler *handler; // @synthesize handler=_handler;
@property(copy, nonatomic) CDUnknownBlockType endInitBlock; // @synthesize endInitBlock=_endInitBlock;
@property(copy, nonatomic) CDUnknownBlockType beginInitBlock; // @synthesize beginInitBlock=_beginInitBlock;
- (void).cxx_destruct;
- (void)showPushAlertView;
- (void)checkIsPushOpen;
- (id)configHandler;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)processPage:(id)arg1;
- (id)getEmptyView;
- (id)getKey;
- (id)getPageName;
- (id)init;
- (id)initWithBeginInitBlock:(CDUnknownBlockType)arg1 endInitBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDictionary *userInfo;

@end

