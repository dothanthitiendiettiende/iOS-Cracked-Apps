//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBHTHomeHotMarketItemModel, UIImageView, UILabel;

@interface TBHTHomeHotMarketItemView : UIView
{
    _Bool _isBigItem;
    TBHTHomeHotMarketItemModel *_model;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_image1;
    UIImageView *_image2;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIImageView *image2; // @synthesize image2=_image2;
@property(retain, nonatomic) UIImageView *image1; // @synthesize image1=_image1;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isBigItem; // @synthesize isBigItem=_isBigItem;
@property(retain, nonatomic) TBHTHomeHotMarketItemModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)tapAction:(id)arg1;
- (void)setModel:(id)arg1 isBigItem:(_Bool)arg2 favoriteImage:(id)arg3;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
