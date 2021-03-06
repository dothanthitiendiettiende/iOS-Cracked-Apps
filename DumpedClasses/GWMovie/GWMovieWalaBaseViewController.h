//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseTableViewController.h"

#import "GWMovieWalaButtonDelegate-Protocol.h"
#import "GWMovieWalaViewDelegate-Protocol.h"

@class NSString, UITableView;
@protocol GWAppTypeDelegate;

@interface GWMovieWalaBaseViewController : GWBaseTableViewController <GWMovieWalaButtonDelegate, GWMovieWalaViewDelegate>
{
    _Bool _shouldPlatformDisplay;
    id <GWAppTypeDelegate> _relatedInfo;
    UITableView *_walaTableView;
    NSString *_shareTitle;
    NSString *_shareImageUrlString;
    NSString *_shareContent;
}

@property _Bool shouldPlatformDisplay; // @synthesize shouldPlatformDisplay=_shouldPlatformDisplay;
@property(copy, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(retain, nonatomic) NSString *shareImageUrlString; // @synthesize shareImageUrlString=_shareImageUrlString;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) UITableView *walaTableView; // @synthesize walaTableView=_walaTableView;
@property(retain, nonatomic) id <GWAppTypeDelegate> relatedInfo; // @synthesize relatedInfo=_relatedInfo;
- (void).cxx_destruct;
- (void)walaViewButtonClicked:(id)arg1 walaView:(id)arg2;
- (_Bool)walaDetailShowRelatedInfo:(id)arg1;
- (void)gotoCommentDetailVc:(id)arg1 reloadTableViewBlock:(CDUnknownBlockType)arg2 isScrollToReplayPosition:(_Bool)arg3;
- (void)gotoCommentDetailVc:(id)arg1 reloadTableViewBlock:(CDUnknownBlockType)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

