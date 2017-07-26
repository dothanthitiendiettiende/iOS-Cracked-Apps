//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSOperationQueue, NSString, TBErrorView, TBFavDetailedListInfoQueryOperation, TBFavoriteCategoryModel;

@interface TBFavDetailedListInfoTableView : UITableView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isScrolling;
    NSOperationQueue *_operationQueue;
    TBFavoriteCategoryModel *_category;
    CDUnknownBlockType _itemClickedHandler;
    CDUnknownBlockType _infoUpdatedHandler;
    TBFavDetailedListInfoQueryOperation *_queryOperation;
    TBErrorView *_errorView;
}

@property(retain, nonatomic) TBErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) TBFavDetailedListInfoQueryOperation *queryOperation; // @synthesize queryOperation=_queryOperation;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(copy, nonatomic) CDUnknownBlockType infoUpdatedHandler; // @synthesize infoUpdatedHandler=_infoUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType itemClickedHandler; // @synthesize itemClickedHandler=_itemClickedHandler;
@property(retain, nonatomic) TBFavoriteCategoryModel *category; // @synthesize category=_category;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)triggerLoadGoods:(_Bool)arg1;
- (void)hideErrorView;
- (void)showErrorView;
- (void)setContentSize:(struct CGSize)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dealloc;
- (void)setClipsToBounds:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
