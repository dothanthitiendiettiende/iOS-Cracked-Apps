//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, ONESBaseRouteResult;

@protocol ONESBaseSearchDelegate <NSObject>

@optional
- (void)notifyCancelNavRouteSearchRequestResult:(_Bool)arg1;
- (void)notifyNavRouteSearchDidFail;
- (void)notifyNavRouteSearchDidFailWithError:(NSError *)arg1;
- (void)notifyNavRouteSearchResult:(ONESBaseRouteResult *)arg1;
@end

