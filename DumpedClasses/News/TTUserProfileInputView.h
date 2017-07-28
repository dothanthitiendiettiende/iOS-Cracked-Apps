//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITextViewDelegate.h"

@class NSString, SSThemedButton, SSThemedLabel, SSThemedTextView, UIView;

@interface TTUserProfileInputView : SSViewBase <UITextViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _hasRemovedFromWindow;
    long long _type;
    SSThemedTextView *_textView;
    UIView *_backgroundView;
    UIView *_editView;
    SSThemedLabel *_tipLabel;
    long long _count;
    id <TTUserProfileInputViewDelegate> _delegate;
    UIView *_inputBackgroundView;
    SSThemedLabel *_countLabel;
    SSThemedButton *_publishButton;
}

+ (struct CGRect)frameForBackgroundView;
@property(nonatomic) _Bool hasRemovedFromWindow; // @synthesize hasRemovedFromWindow=_hasRemovedFromWindow;
@property(retain, nonatomic) SSThemedButton *publishButton; // @synthesize publishButton=_publishButton;
@property(retain, nonatomic) SSThemedLabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIView *inputBackgroundView; // @synthesize inputBackgroundView=_inputBackgroundView;
@property(nonatomic) __weak id <TTUserProfileInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) SSThemedLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *editView; // @synthesize editView=_editView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) SSThemedTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)backgroundTapActionFired:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)handleUITextViewTextDidChangeNotification:(id)arg1;
- (void)publishActionFired:(id)arg1;
- (void)cancelActionFired:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)themeChanged:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)willDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)refreshCountLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
