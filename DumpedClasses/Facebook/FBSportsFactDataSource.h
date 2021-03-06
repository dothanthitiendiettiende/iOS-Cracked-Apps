//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBComponentCollectionViewDataSourceEventListener-Protocol.h"
#import "FBComponentScrollEventListener-Protocol.h"
#import "FBPullToRefreshViewDelegate-Protocol.h"
#import "FBSportsPlayByPlayDataFetcherDelegate-Protocol.h"
#import "FBSportsPlayByPlaySubscriptionHandlerDelegate-Protocol.h"

@class FBComponentCollectionViewDataSource, FBComponentCollectionViewFlowLayoutDelegate, FBFeedToolbox, FBPullToRefreshView, FBSportsPlayByPlayDataFetcher, FBSportsPlayByPlaySubscriptionHandler, FBTransientViewStateManager, FBUserSession, NSMutableArray, NSString, UICollectionView;

@interface FBSportsFactDataSource : NSObject <FBSportsPlayByPlayDataFetcherDelegate, FBPullToRefreshViewDelegate, FBSportsPlayByPlaySubscriptionHandlerDelegate, FBComponentScrollEventListener, FBComponentCollectionViewDataSourceEventListener>
{
    FBUserSession *_session;
    FBFeedToolbox *_toolbox;
    FBSportsPlayByPlayDataFetcher *_dataFetcher;
    NSString *_pageID;
    unsigned long long _filter;
    unsigned long long _viewState;
    FBSportsPlayByPlaySubscriptionHandler *_playSubHandler;
    FBComponentCollectionViewDataSource *_componentDataSource;
    NSMutableArray *_playStories;
    _Bool _loadingData;
    FBComponentCollectionViewFlowLayoutDelegate *_flowLayoutDelegate;
    NSMutableArray *_subscriptions;
    UICollectionView *_collectionView;
    FBPullToRefreshView *_ptrView;
    FBTransientViewStateManager *_viewStateManager;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
@property(nonatomic) __weak FBTransientViewStateManager *viewStateManager; // @synthesize viewStateManager=_viewStateManager;
@property(nonatomic) __weak FBPullToRefreshView *ptrView; // @synthesize ptrView=_ptrView;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)_receivedUpdatedStory:(id)arg1;
- (void)_receivedUpdatedStory:(id)arg1 updateCLCHandle:(_Bool)arg2;
- (id)_getCLCHandle:(id)arg1;
- (void)_addPlayStories:(id)arg1 shouldPrepend:(_Bool)arg2;
- (void)_initializePlayByPlayDataFetcher;
- (void)pullToRefreshViewDidNotAnimateLoadingState:(id)arg1;
- (void)pullToRefreshView:(id)arg1 didChangeVisibility:(_Bool)arg2 userInitiated:(_Bool)arg3;
- (void)pullToRefreshViewDidStartAnimatingLoadingState:(id)arg1;
- (void)pullToRefreshViewDidAttemptToTriggerRefresh:(id)arg1;
- (void)pullToRefreshViewDidTriggerRefresh:(id)arg1;
- (void)playByPlaySubscriptionHandler:(id)arg1 didGetOutOfOrderPlay:(id)arg2;
- (void)playByPlaySubscriptionHandler:(id)arg1 didGetNewPlay:(id)arg2;
- (void)dataSourceWillEndUpdates:(id)arg1 changeset:(struct Changeset)arg2;
- (void)sportsPlayByPlayDataFetcher:(id)arg1 loadType:(unsigned long long)arg2 experiencedError:(id)arg3;
- (void)sportsPlayByPlayDataFetcher:(id)arg1 didLoadFacts:(id)arg2 loadType:(unsigned long long)arg3;
- (void)scrollViewDidEndDragging:(struct FBScrollViewState)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScrollToTop:(struct FBScrollViewState)arg1;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 toolbox:(id)arg2 pageID:(id)arg3 filter:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

