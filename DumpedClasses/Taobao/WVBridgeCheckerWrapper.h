//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVBridgeCheckerProtocol.h"

@class NSString;

@interface WVBridgeCheckerWrapper : NSObject <WVBridgeCheckerProtocol>
{
    id <WindVaneAPIAuthCheckProtocol> _oldHandler;
}

@property(retain, nonatomic) id <WindVaneAPIAuthCheckProtocol> oldHandler; // @synthesize oldHandler=_oldHandler;
- (void).cxx_destruct;
- (id)checkPermission:(id)arg1 withParams:(id)arg2 withContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

