//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFCommedTableViewCell.h"

@class KGThemeLabel, KGThemeLine, KGThemeView, KTVCompetitionJudgeListView, KTVCompetitionPkUserView, KTVCompetitionRecordInfo, KTVCompetitionRecordResultView, UIView;

@interface KTVCompetitionRecordCell1 : KFCommedTableViewCell
{
    _Bool _ownerAccess;
    KGThemeView *_bgView;
    KTVCompetitionRecordResultView *_resultView;
    KGThemeLine *_verticalLine;
    KGThemeLabel *_createTime;
    KGThemeLabel *_songNameLabel;
    KGThemeLabel *_opponentOutLabel;
    UIView *_detailView;
    KTVCompetitionPkUserView *_user1;
    KTVCompetitionPkUserView *_user2;
    KGThemeLabel *_scoreLabel;
    KGThemeLine *_horizontalLine;
    KTVCompetitionJudgeListView *_judgeListView;
    KTVCompetitionRecordInfo *_info;
    CDUnknownBlockType _listenBlock;
    CDUnknownBlockType _userBlock;
    CDUnknownBlockType _judgeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType judgeBlock; // @synthesize judgeBlock=_judgeBlock;
@property(copy, nonatomic) CDUnknownBlockType userBlock; // @synthesize userBlock=_userBlock;
@property(copy, nonatomic) CDUnknownBlockType listenBlock; // @synthesize listenBlock=_listenBlock;
@property(nonatomic) _Bool ownerAccess; // @synthesize ownerAccess=_ownerAccess;
@property(retain, nonatomic) KTVCompetitionRecordInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) KTVCompetitionJudgeListView *judgeListView; // @synthesize judgeListView=_judgeListView;
@property(retain, nonatomic) KGThemeLine *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(retain, nonatomic) KGThemeLabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) KTVCompetitionPkUserView *user2; // @synthesize user2=_user2;
@property(retain, nonatomic) KTVCompetitionPkUserView *user1; // @synthesize user1=_user1;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) KGThemeLabel *opponentOutLabel; // @synthesize opponentOutLabel=_opponentOutLabel;
@property(retain, nonatomic) KGThemeLabel *songNameLabel; // @synthesize songNameLabel=_songNameLabel;
@property(retain, nonatomic) KGThemeLabel *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) KGThemeLine *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) KTVCompetitionRecordResultView *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) KGThemeView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)configWithOwnerAccess:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
