//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBExtendedHitButton, TBMultimediaEditSaveComponent, TBMultimediaEditView, UIButton, UIScrollView;

@interface TBMultimediaEditPanel : UIView
{
    double _spaceBetweenComponentButtons;
    UIScrollView *_componentButtonsView;
    TBMultimediaEditView *_editView;
    UIButton *_remakeButton;
    TBExtendedHitButton *_sendButton;
    TBMultimediaEditSaveComponent *_saveComponent;
    double _componentButtonsViewLeftMargin;
    double _scrollViewRightMargin;
}

@property(nonatomic) double scrollViewRightMargin; // @synthesize scrollViewRightMargin=_scrollViewRightMargin;
@property(nonatomic) double componentButtonsViewLeftMargin; // @synthesize componentButtonsViewLeftMargin=_componentButtonsViewLeftMargin;
@property(retain, nonatomic) TBMultimediaEditSaveComponent *saveComponent; // @synthesize saveComponent=_saveComponent;
@property(retain, nonatomic) TBExtendedHitButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIButton *remakeButton; // @synthesize remakeButton=_remakeButton;
@property(nonatomic) __weak TBMultimediaEditView *editView; // @synthesize editView=_editView;
@property(retain, nonatomic) UIScrollView *componentButtonsView; // @synthesize componentButtonsView=_componentButtonsView;
@property(nonatomic) double spaceBetweenComponentButtons; // @synthesize spaceBetweenComponentButtons=_spaceBetweenComponentButtons;
- (void).cxx_destruct;
- (void)showSendButtonAnimation;
- (void)onSendBtnNormale:(id)arg1;
- (void)onSendBtnPressed:(id)arg1;
- (void)onSendBtnClick:(id)arg1;
- (void)onRemakeButtonClick:(id)arg1;
- (void)reset;
- (struct CGRect)componentButtonFrame:(id)arg1;
- (struct CGRect)componentButtonFrameWithIndex:(long long)arg1;
- (void)registerComponents:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withInitParam:(id)arg2;

@end
