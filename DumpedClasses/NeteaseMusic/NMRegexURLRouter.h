//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMURLRouterProtocol.h"

@class NSMutableDictionary, NSString;

@interface NMRegexURLRouter : NSObject <NMURLRouterProtocol>
{
    NSMutableDictionary *_allRoutes;
    NSMutableDictionary *_patternMappings;
    NSString *_source;
    _Bool _shouldRoutePattern;
    _Bool _willRoutePattern;
    _Bool _didRoutePattern;
    _Bool _didFailRoutePattern;
    id <NMURLRouterDelegate> _delegate;
}

+ (id)routerForSource:(id)arg1;
+ (id)defaultRouter;
@property(nonatomic) __weak id <NMURLRouterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)_targetForURL:(id)arg1 params:(id *)arg2;
- (id)targetForURL:(id)arg1 params:(id *)arg2;
- (id)classInstanceForURL:(id)arg1;
- (id)objectForURL:(id)arg1;
- (CDUnknownBlockType)blockForURL:(id)arg1;
- (_Bool)openURL:(id)arg1 userInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)openURL:(id)arg1 userInfo:(id)arg2;
- (_Bool)openURL:(id)arg1;
- (void)removePattern:(id)arg1;
- (_Bool)_canOpenURL:(id)arg1;
- (_Bool)canOpenURL:(id)arg1;
- (_Bool)containPattern:(id)arg1;
- (void)registerAlias:(id)arg1 forPattern:(id)arg2;
- (void)registerPatterns:(id)arg1 toRoutable:(id)arg2;
- (void)registerPattern:(id)arg1 toRoutable:(id)arg2;
- (id)initWithSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

