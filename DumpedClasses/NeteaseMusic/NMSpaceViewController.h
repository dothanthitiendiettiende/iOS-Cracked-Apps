//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSettingTableViewController.h"

#import "NMFileManagerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSMutableDictionary, NSString, UILongPressGestureRecognizer;

@interface NMSpaceViewController : NMSettingTableViewController <NMFileManagerDelegate, UIGestureRecognizerDelegate>
{
    NSMutableDictionary *_spaceInfo;
    UILongPressGestureRecognizer *_longPressGesture;
    long long _detailSpaceRowCount;
}

- (void).cxx_destruct;
- (void)handleLongPress:(id)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)spaceSizeUpdated:(id)arg1;
- (void)calcSpaceSizeFinished:(id)arg1;
- (void)updateSpaceInfo:(id)arg1;
- (void)didSelectRowAtIndexPath:(id)arg1;
- (id)cellForRowAtIndexPath:(id)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)createSettingCell;
- (void)backAction:(id)arg1;
- (void)loadView;
- (void)refreshSpaceSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
