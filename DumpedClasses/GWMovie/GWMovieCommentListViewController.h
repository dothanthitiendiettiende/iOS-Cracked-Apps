//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

#import "GWMovieCommentDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GWDelMsgByIdProvider, GWGWFindMessageListByTypeProvider, MJRefreshBaseView, NSMutableArray, NSString, UITableView;

@interface GWMovieCommentListViewController : GWBaseViewController <UITableViewDelegate, UITableViewDataSource, GWMovieCommentDelegate>
{
    _Bool _isLoading;
    long long _unReadCount;
    UITableView *_tableView;
    NSMutableArray *_dataArr;
    GWGWFindMessageListByTypeProvider *_commentProvier;
    GWDelMsgByIdProvider *_delMsgProvider;
    MJRefreshBaseView *_refreshHeader;
    MJRefreshBaseView *_refreshFoot;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak MJRefreshBaseView *refreshFoot; // @synthesize refreshFoot=_refreshFoot;
@property(nonatomic) __weak MJRefreshBaseView *refreshHeader; // @synthesize refreshHeader=_refreshHeader;
@property(retain, nonatomic) GWDelMsgByIdProvider *delMsgProvider; // @synthesize delMsgProvider=_delMsgProvider;
@property(retain, nonatomic) GWGWFindMessageListByTypeProvider *commentProvier; // @synthesize commentProvier=_commentProvier;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long unReadCount; // @synthesize unReadCount=_unReadCount;
- (void).cxx_destruct;
- (void)requestEndPresentViewControllerWithImage:(id)arg1 relatedInfo:(id)arg2 indexPath:(id)arg3;
- (void)sendWalaOnClickWith:(id)arg1 indexPath:(id)arg2;
- (void)cineamOnClickWith:(id)arg1;
- (void)movieOnClickWith:(id)arg1 cell:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)handleData:(id)arg1 error:(id)arg2;
- (void)requestDataIsRefresh:(_Bool)arg1 isHUD:(_Bool)arg2;
- (void)hideHUD;
- (void)showHUD;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
