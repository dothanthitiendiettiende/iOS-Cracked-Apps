//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavRichCell.h"

#import "FavFileDelegate.h"

@class NSString;

@interface FavFileCell : FavRichCell <FavFileDelegate>
{
    _Bool _is_set_model;
}

- (void)onCallback_OnlinePreview:(int)arg1 errorType:(int)arg2;
- (void)onCallback_Download:(int)arg1 errorType:(int)arg2;
- (void)onCallback_FastUpload:(int)arg1 errorType:(int)arg2;
- (void)onCallback_Thumbnail:(int)arg1 errorType:(int)arg2;
- (void)setThumb:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

