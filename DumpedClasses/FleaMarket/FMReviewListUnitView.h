//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMAvatarImageView, FMReviewItemDO, FMReviewPicView, UIImageView, UILabel;

@interface FMReviewListUnitView : UIView
{
    _Bool _hideGoodRatePic;
    _Bool _disablePicScroll;
    unsigned long long _type;
    double _lefPadding;
    FMReviewItemDO *_reviewItemDO;
    FMAvatarImageView *_avatarImageView;
    UILabel *_nameLable;
    UIImageView *_goodImageView;
    UILabel *_contLabel;
    FMReviewPicView *_reviewPicView;
    UILabel *_timeLabel;
    UILabel *_moreLabel;
    UIView *_splitView;
}

+ (double)getContHeight:(id)arg1 withType:(unsigned long long)arg2;
+ (double)getHeight:(id)arg1 withType:(unsigned long long)arg2;
@property(retain, nonatomic) UIView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) FMReviewPicView *reviewPicView; // @synthesize reviewPicView=_reviewPicView;
@property(retain, nonatomic) UILabel *contLabel; // @synthesize contLabel=_contLabel;
@property(retain, nonatomic) UIImageView *goodImageView; // @synthesize goodImageView=_goodImageView;
@property(retain, nonatomic) UILabel *nameLable; // @synthesize nameLable=_nameLable;
@property(retain, nonatomic) FMAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) FMReviewItemDO *reviewItemDO; // @synthesize reviewItemDO=_reviewItemDO;
@property(nonatomic) double lefPadding; // @synthesize lefPadding=_lefPadding;
@property(nonatomic) _Bool disablePicScroll; // @synthesize disablePicScroll=_disablePicScroll;
@property(nonatomic) _Bool hideGoodRatePic; // @synthesize hideGoodRatePic=_hideGoodRatePic;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)autoLayoutView;
- (void)setupSubviews;
- (id)initWithType:(unsigned long long)arg1;

@end
