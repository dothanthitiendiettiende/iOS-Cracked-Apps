//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBOTTTAttributedLabelDelegate.h"

@class NSMutableArray, NSString, TBOFeed, UILabel;

@interface TBOFeedMoreComment : UIView <TBOTTTAttributedLabelDelegate>
{
    id <TBOFeedMoreCommentDelegate> _delegate;
    NSMutableArray *_commentWrapperViews;
    NSMutableArray *_commentViews;
    unsigned long long _maxShowCommentsNum;
    UILabel *_moreLabel;
    TBOFeed *_localFeedData;
    struct _NSRange _rangeCommenter;
    struct _NSRange _rangePaCommenter;
    struct _NSRange _range4OtherInLabel;
    struct _NSRange _range4replyText;
}

@property(nonatomic) struct _NSRange range4replyText; // @synthesize range4replyText=_range4replyText;
@property(nonatomic) struct _NSRange range4OtherInLabel; // @synthesize range4OtherInLabel=_range4OtherInLabel;
@property(nonatomic) struct _NSRange rangePaCommenter; // @synthesize rangePaCommenter=_rangePaCommenter;
@property(nonatomic) struct _NSRange rangeCommenter; // @synthesize rangeCommenter=_rangeCommenter;
@property(retain, nonatomic) TBOFeed *localFeedData; // @synthesize localFeedData=_localFeedData;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(nonatomic) unsigned long long maxShowCommentsNum; // @synthesize maxShowCommentsNum=_maxShowCommentsNum;
@property(retain, nonatomic) NSMutableArray *commentViews; // @synthesize commentViews=_commentViews;
@property(retain, nonatomic) NSMutableArray *commentWrapperViews; // @synthesize commentWrapperViews=_commentWrapperViews;
@property(nonatomic) __weak id <TBOFeedMoreCommentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)gotoFeedDetail;
- (void)attributedLabel:(id)arg1 didSelectLinkWithTextCheckingResult:(id)arg2;
- (void)buildMore;
- (id)buildCommentWithComment:(id)arg1;
- (void)addUrlLinkForComment:(id)arg1 toCommentView:(id)arg2;
- (void)fillDataForCommentView:(long long)arg1 withComments:(id)arg2;
- (void)resetLocalVariable;
- (void)refereshDataForView:(id)arg1;
- (void)layoutSubviews;
- (void)tapToReplyComment:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

