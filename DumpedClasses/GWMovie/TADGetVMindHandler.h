//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ASIHTTPRequestDelegate-Protocol.h"

@class ASIHTTPRequest, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol TADGetVMindHandlerDelegate;

@interface TADGetVMindHandler : NSObject <ASIHTTPRequestDelegate>
{
    id <TADGetVMindHandlerDelegate> _delegate;
    NSArray *_ordersArray;
    NSMutableDictionary *_vid2OidMap;
    NSDictionary *_params;
    ASIHTTPRequest *_request;
}

@property(retain, nonatomic) ASIHTTPRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSMutableDictionary *vid2OidMap; // @synthesize vid2OidMap=_vid2OidMap;
@property(retain, nonatomic) NSArray *ordersArray; // @synthesize ordersArray=_ordersArray;
@property(nonatomic) id <TADGetVMindHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadVideoSourceFailed:(id)arg1;
- (void)loadVideoSourceFinished:(id)arg1;
- (void)parse;
- (void)dealloc;
- (id)initWithMap:(id)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

