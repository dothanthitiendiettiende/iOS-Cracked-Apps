//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MCOfficialHeaderViewProtocol.h"

@class CAGradientLayer, MCOfficialContentNavigationBar, NSString, UIButton, UIImageView;

@interface MCOfficialHeaderView : UIView <MCOfficialHeaderViewProtocol>
{
    id <MCOfficialHeaderViewDelegate> _delegate;
    UIView *_bottomView;
    long long _statusBarStyle;
    UIImageView *_headerImageView;
    UIImageView *_headerICONImageView;
    UIButton *_labelButton;
    UIButton *_titileLabel;
    MCOfficialContentNavigationBar *_navigationBar;
    NSString *_actionURL;
    UIView *_customNavigationBar;
    CAGradientLayer *_gradientLayer;
    UIView *_shadowView;
}

@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) __weak UIView *customNavigationBar; // @synthesize customNavigationBar=_customNavigationBar;
@property(retain, nonatomic) NSString *actionURL; // @synthesize actionURL=_actionURL;
@property(retain, nonatomic) MCOfficialContentNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIButton *titileLabel; // @synthesize titileLabel=_titileLabel;
@property(retain, nonatomic) UIButton *labelButton; // @synthesize labelButton=_labelButton;
@property(retain, nonatomic) UIImageView *headerICONImageView; // @synthesize headerICONImageView=_headerICONImageView;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak id <MCOfficialHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rightAction:(id)arg1;
- (void)leftAction;
- (void)updateViewWithActionURL:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateAlpha;
- (void)entyAciton;
- (void)setupViewNavi;
- (void)setupICONShadow;
- (id)initWithDelegate:(id)arg1 headerImageURL:(id)arg2 headerICONImageURL:(id)arg3 headerLabelText:(id)arg4 actionURL:(id)arg5 title:(id)arg6 navigationBar:(id)arg7;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

