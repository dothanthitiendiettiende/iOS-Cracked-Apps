//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIColor;

@interface ESPRestaurantSegmentTitleView : UIView
{
    long long _selectedSegmentIndex;
    CDUnknownBlockType _selectedIndexChangedAction;
    NSArray *_titles;
    double _currentOffset;
    UIView *_processView;
    UIColor *_selectedColor;
    UIColor *_lineColor;
    UIColor *_unSelectedColor;
}

@property(retain, nonatomic) UIColor *unSelectedColor; // @synthesize unSelectedColor=_unSelectedColor;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIView *processView; // @synthesize processView=_processView;
@property(nonatomic) double currentOffset; // @synthesize currentOffset=_currentOffset;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(copy, nonatomic) CDUnknownBlockType selectedIndexChangedAction; // @synthesize selectedIndexChangedAction=_selectedIndexChangedAction;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)buttonDidPressed:(id)arg1;
- (void)updateOffset:(double)arg1 WithLeftFrame:(struct CGRect)arg2 rightFrame:(struct CGRect)arg3;
- (void)updateWithOffset:(double)arg1;
- (void)setTitle:(id)arg1 forIndex:(long long)arg2;
- (id)templateButton;
- (void)setTitle:(id)arg1 forButton:(id)arg2;
- (void)loadProcessView;
- (void)loadButtons;
- (void)configViewsWithTitle:(id)arg1 selectedColor:(id)arg2 unSelectedColor:(id)arg3 lineColor:(id)arg4 backgroundColor:(id)arg5;
- (id)initWithTitles:(id)arg1;

@end

