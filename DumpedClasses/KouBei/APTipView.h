//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol APTipViewDelegate;

@interface APTipView : UIView
{
    id <APTipViewDelegate> _delegate;
}

@property(nonatomic) __weak id <APTipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)colorFromHexRGB:(id)arg1;
- (void)onMainButtonClick:(id)arg1;
- (void)UIBuilder:(id)arg1 frame:(struct CGRect)arg2 tipMessage:(id)arg3 title:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 tipMessage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 tipMessage:(id)arg2 title:(id)arg3;
- (void)dealloc;

@end

