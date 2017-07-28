//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableDictionary, UIActivityIndicatorView, UILabel;

@interface OMGPullableView : UIView
{
    _Bool _wasTriggeredByUser;
    unsigned long long _position;
    CDUnknownBlockType _actionHandler;
    double _originalTopInset;
    double _originalBottomInset;
    unsigned long long _state;
    unsigned long long _previousState;
    UIActivityIndicatorView *_indicatorView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    NSMutableDictionary *_titleForStates;
}

+ (id)keyForSubTitleWithState:(unsigned long long)arg1;
+ (id)keyForTitleWithState:(unsigned long long)arg1;
+ (struct CGSize)sizeForText:(id)arg1 withFont:(id)arg2 limitedWidth:(double)arg3;
@property(retain, nonatomic) NSMutableDictionary *titleForStates; // @synthesize titleForStates=_titleForStates;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) unsigned long long previousState; // @synthesize previousState=_previousState;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) double originalBottomInset; // @synthesize originalBottomInset=_originalBottomInset;
@property(nonatomic) double originalTopInset; // @synthesize originalTopInset=_originalTopInset;
@property(nonatomic) _Bool wasTriggeredByUser; // @synthesize wasTriggeredByUser=_wasTriggeredByUser;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
- (void).cxx_destruct;
- (id)scrollView;
- (void)setSubTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setScrollViewContentInset:(struct UIEdgeInsets)arg1;
- (void)setScrollViewContentInsetForLoading;
- (void)resetScrollViewContentInset;
- (id)lastUpdatedTimeDesc;
- (id)currentCalendar;
- (void)scrollViewDidScroll:(struct CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopAnimation;
- (void)startAnimation;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end
