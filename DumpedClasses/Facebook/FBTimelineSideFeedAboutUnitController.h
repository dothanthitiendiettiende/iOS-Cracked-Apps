//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBSideFeedUnitController.h>

#import "FBSideFeedUnitCollectionViewControllerDelegate-Protocol.h"

@class FBSideFeedUnitCollectionViewController, NSMutableDictionary, NSOrderedSet, NSString;

@interface FBTimelineSideFeedAboutUnitController : FBSideFeedUnitController <FBSideFeedUnitCollectionViewControllerDelegate>
{
    FBSideFeedUnitCollectionViewController *_unitCollectionViewController;
    NSMutableDictionary *_impressionHistory;
    NSMutableDictionary *_clickHistory;
    NSOrderedSet *_validBylines;
    NSString *_personID;
}

- (void).cxx_destruct;
- (id)_personModel;
- (void)visibleRectDidChangeInContentView:(struct CGRect)arg1;
- (void)didSelectCellWithIndex:(unsigned long long)arg1;
- (void)didChangeHeightAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)sizeForItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (void)configureCell:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)uniqueIDForItemAtIndex:(unsigned long long)arg1;
- (void)logAnalyticsEvent:(id)arg1 itemPosition:(unsigned long long)arg2 history:(id)arg3;
- (_Bool)validateModel;
- (id)graphQLIDForItemPosition:(unsigned long long)arg1;
- (id)trackingStringForItemPosition:(unsigned long long)arg1;
- (id)getUnitNameForAnalytics;
- (void)dealloc;
- (void)loadView;
- (id)initWithPersonID:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

