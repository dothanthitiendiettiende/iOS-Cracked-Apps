//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WXHttpManager, WXManagedObjectContextManager, WXMessenger;

@protocol WXOServiceContext <NSObject>
@property(readonly, nonatomic) WXManagedObjectContextManager *mocManager;
@property(readonly, nonatomic) WXHttpManager *httpManager;
@property(readonly, nonatomic) WXMessenger *wxMessenger;
@property(readonly, nonatomic) id <WXMessengerNotifyDelegate> notifyDelegate;
@end
