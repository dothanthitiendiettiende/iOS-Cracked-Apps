//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor, UIImage, UIImageView, UILabel, UIView;

@interface NMPlayToolBarButton : UIButton
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    long long _count;
    UIImage *_icon;
    UIImage *_highlightIcon;
    UIImage *_selectedIcon;
    UIImage *_selectedHighlightIcon;
    UIImage *_disableIcon;
    UIColor *_normalTextColor;
    UIColor *_highlightTextColor;
    UIColor *_selectedTextColor;
    UIColor *_disableTextColor;
    double _iconTopMargin;
}

@property(readonly, nonatomic) UIView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) double iconTopMargin; // @synthesize iconTopMargin=_iconTopMargin;
- (void).cxx_destruct;
- (void)setCount:(long long)arg1;
@property(retain, nonatomic) UIImage *disableIcon; // @synthesize disableIcon=_disableIcon;
@property(retain, nonatomic) UIImage *selectedHighlightIcon; // @synthesize selectedHighlightIcon=_selectedHighlightIcon;
@property(retain, nonatomic) UIImage *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(retain, nonatomic) UIImage *highlightIcon; // @synthesize highlightIcon=_highlightIcon;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void)updateIcon;
- (void)updateTextColor;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
