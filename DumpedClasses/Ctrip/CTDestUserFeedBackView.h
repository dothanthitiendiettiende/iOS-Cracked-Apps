//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTDestFeedBackContentCellDelegate.h"
#import "RefreshControlDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTDestFeedBackContentCell, CTRootViewController, GetGsFeedBackInfoResponse, NSArray, NSMutableArray, NSString, RefreshControl, UITableView;

@interface CTDestUserFeedBackView : UIView <UITableViewDelegate, UITableViewDataSource, CTDestFeedBackContentCellDelegate, RefreshControlDelegate>
{
    _Bool _isLastPage;
    int _businessId;
    int _pageIndex;
    int _businessType;
    id <CTDestUserFeedBackViewDelegate> _delegate;
    UITableView *_mainTab;
    GetGsFeedBackInfoResponse *_dataModal;
    NSArray *_messageArray;
    NSMutableArray *_showArray;
    NSArray *_editorArray;
    UIView *_editView;
    RefreshControl *_refreshControl;
    CTDestFeedBackContentCell *_cell;
    CTRootViewController *_VCtrl;
    NSString *_businessName;
}

@property(copy, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
@property(nonatomic) int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) __weak CTRootViewController *VCtrl; // @synthesize VCtrl=_VCtrl;
@property(retain, nonatomic) CTDestFeedBackContentCell *cell; // @synthesize cell=_cell;
@property(nonatomic) _Bool isLastPage; // @synthesize isLastPage=_isLastPage;
@property(retain, nonatomic) RefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) UIView *editView; // @synthesize editView=_editView;
@property(retain, nonatomic) NSArray *editorArray; // @synthesize editorArray=_editorArray;
@property(retain, nonatomic) NSMutableArray *showArray; // @synthesize showArray=_showArray;
@property(retain, nonatomic) NSArray *messageArray; // @synthesize messageArray=_messageArray;
@property(retain, nonatomic) GetGsFeedBackInfoResponse *dataModal; // @synthesize dataModal=_dataModal;
@property(retain, nonatomic) UITableView *mainTab; // @synthesize mainTab=_mainTab;
@property(nonatomic) int businessId; // @synthesize businessId=_businessId;
@property(nonatomic) __weak id <CTDestUserFeedBackViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataADD;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (void)tripCommentShouldEndEditing:(id)arg1;
- (void)tripCommentShouldBeginEditing:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addFeedBackInfo:(id)arg1 email:(id)arg2;
- (void)getFeedBackMessage;
- (void)getFeedBackBasicInfo;
- (void)getDataFromService;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillShown:(id)arg1;
- (void)removeInputFocus;
- (void)reloadViewWithVC:(id)arg1 businessId:(int)arg2 businessType:(int)arg3 businessName:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

