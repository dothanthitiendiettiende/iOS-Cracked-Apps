//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QQGradientView, UIButton;

@interface QQRichShortVideoPlayerNavigationView : UIView
{
    UIButton *_leftButton;
    UIButton *_rightButton;
    CDUnknownBlockType _leftButtonClickAction;
    CDUnknownBlockType _rightButtonClickAction;
    QQGradientView *_maskView;
}

@property(retain, nonatomic) QQGradientView *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) CDUnknownBlockType rightButtonClickAction; // @synthesize rightButtonClickAction=_rightButtonClickAction;
@property(copy, nonatomic) CDUnknownBlockType leftButtonClickAction; // @synthesize leftButtonClickAction=_leftButtonClickAction;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
- (void).cxx_destruct;
- (void)righButtonDidClick:(id)arg1;
- (void)leftButtonDidClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

