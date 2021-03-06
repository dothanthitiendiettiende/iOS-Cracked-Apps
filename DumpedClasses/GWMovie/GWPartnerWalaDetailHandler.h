//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBasePartnerDetailHandler.h"

#import "GWPartnerHotWalaSwitchDelegate-Protocol.h"

@class GWDBForComment, GWPartnerCommentListProvider, GWPartnerHotWalaSwitchView, MarkLabel, NSArray, NSString, UIButton, UILabel, UIView;

@interface GWPartnerWalaDetailHandler : GWBasePartnerDetailHandler <GWPartnerHotWalaSwitchDelegate>
{
    _Bool _isPreViewNow;
    UILabel *_titleLabel;
    UIView *_topView;
    MarkLabel *_markLabel;
    UILabel *_commentLabel;
    UIButton *_switchButton;
    GWPartnerHotWalaSwitchView *_switchView;
    GWPartnerCommentListProvider *_hotWalaProvider;
    NSArray *_hotWalaArray;
    GWDBForComment *_dao;
}

@property(nonatomic) _Bool isPreViewNow; // @synthesize isPreViewNow=_isPreViewNow;
@property(retain, nonatomic) GWDBForComment *dao; // @synthesize dao=_dao;
@property(retain, nonatomic) NSArray *hotWalaArray; // @synthesize hotWalaArray=_hotWalaArray;
@property(retain, nonatomic) GWPartnerCommentListProvider *hotWalaProvider; // @synthesize hotWalaProvider=_hotWalaProvider;
@property(retain, nonatomic) GWPartnerHotWalaSwitchView *switchView; // @synthesize switchView=_switchView;
@property(retain, nonatomic) UIButton *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) MarkLabel *markLabel; // @synthesize markLabel=_markLabel;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)switchView:(id)arg1 didSelectedWalaByIndex:(long long)arg2;
- (void)showAllWalaList:(id)arg1;
- (void)switchButtonClick:(id)arg1;
- (void)walaPostFinished:(id)arg1;
- (void)reqHotWalaList;
- (void)cardDidMove:(_Bool)arg1;
- (void)resetHotWalaViewByWalaList:(id)arg1;
- (void)previewWala:(id)arg1;
- (_Bool)walaCanShowing;
- (_Bool)canShowSendWala;
- (_Bool)shouldShowSendWala;
- (void)updatedModelIfSendWalaSuccess;
- (void)updatedComment;
- (void)loadSubView;
- (void)loadDAO;
- (void)loadHotWalaView;
- (id)init;
- (void)clearHandler:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

