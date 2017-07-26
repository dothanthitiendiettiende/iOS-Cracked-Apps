//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLVideoWaterMarkDownloadEngine.h"

#import "QLImageLoadDelegate.h"

@class NSArray, NSString;

@interface QLVideoWaterMarkImageEngine : QLVideoWaterMarkDownloadEngine <QLImageLoadDelegate>
{
    NSArray *_waterMarkInfos;
}

@property(retain, nonatomic) NSArray *waterMarkInfos; // @synthesize waterMarkInfos=_waterMarkInfos;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didFailLoadWithError:(id)arg1 forURL:(id)arg2;
- (void)didLoadImage:(id)arg1 forURL:(id)arg2;
- (void)downloadWaterMarkResource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
