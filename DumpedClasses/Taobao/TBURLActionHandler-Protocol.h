//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, TBURLActionRequest, TBURLActionResponse;

@protocol TBURLActionHandler <NSObject>
- (TBURLActionResponse *)handleURLActionRequest:(TBURLActionRequest *)arg1;

@optional
- (id)handleUrl:(NSURL *)arg1 withTarget:(id)arg2 withParams:(id)arg3;
@end

