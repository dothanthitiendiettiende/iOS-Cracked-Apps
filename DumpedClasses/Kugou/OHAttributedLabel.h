//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "UIAppearance.h"
#import "UIGestureRecognizerDelegate.h"

@class NSAttributedString, NSDataDetector, NSMutableArray, NSMutableAttributedString, NSString, NSTextCheckingResult, UIColor, UIGestureRecognizer;

@interface OHAttributedLabel : UILabel <UIGestureRecognizerDelegate, UIAppearance>
{
    NSAttributedString *_attributedText;
    NSMutableAttributedString *_attributedTextWithLinks;
    _Bool _needsRecomputeLinksInText;
    NSDataDetector *_linksDetector;
    struct __CTFrame *textFrame;
    struct CGRect drawingRect;
    NSMutableArray *_customLinks;
    struct CGPoint _touchStartPoint;
    UIGestureRecognizer *_gestureRecogniser;
    struct __CTFramesetter *_highlightFramesetter;
    _Bool _centerVertically;
    _Bool _onlyCatchTouchesOnLinks;
    _Bool _catchTouchesOnLinksOnTouchBegan;
    _Bool _extendBottomToFit;
    _Bool _enableTruncation;
    _Bool _enableTwoLineTail;
    int _linkUnderlineStyle;
    NSTextCheckingResult *_activeLink;
    UIColor *_linkColor;
    UIColor *_highlightedLinkColor;
    unsigned long long _automaticallyAddLinksForType;
    id <OHAttributedLabelDelegate> _delegate;
    long long _colorKeyType;
    UIColor *_strokeColor;
    double _strokeWidth;
}

@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) _Bool enableTwoLineTail; // @synthesize enableTwoLineTail=_enableTwoLineTail;
@property(nonatomic) long long colorKeyType; // @synthesize colorKeyType=_colorKeyType;
@property(nonatomic) id <OHAttributedLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enableTruncation; // @synthesize enableTruncation=_enableTruncation;
@property(nonatomic) _Bool extendBottomToFit; // @synthesize extendBottomToFit=_extendBottomToFit;
@property(nonatomic) _Bool catchTouchesOnLinksOnTouchBegan; // @synthesize catchTouchesOnLinksOnTouchBegan=_catchTouchesOnLinksOnTouchBegan;
@property(nonatomic) _Bool onlyCatchTouchesOnLinks; // @synthesize onlyCatchTouchesOnLinks=_onlyCatchTouchesOnLinks;
@property(nonatomic) unsigned long long automaticallyAddLinksForType; // @synthesize automaticallyAddLinksForType=_automaticallyAddLinksForType;
@property(nonatomic) _Bool centerVertically; // @synthesize centerVertically=_centerVertically;
@property(nonatomic) int linkUnderlineStyle; // @synthesize linkUnderlineStyle=_linkUnderlineStyle;
@property(retain, nonatomic) UIColor *highlightedLinkColor; // @synthesize highlightedLinkColor=_highlightedLinkColor;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(retain, nonatomic) NSTextCheckingResult *activeLink; // @synthesize activeLink=_activeLink;
- (void).cxx_destruct;
- (void)setNumberOfLines:(long long)arg1;
- (void)setAdjustsFontSizeToFitWidth:(_Bool)arg1;
- (void)warnAboutKnownIssues_CheckAdjustsFontSizeToFitWidth_FromXIB:(_Bool)arg1;
- (void)warnAboutKnownIssues_CheckLineBreakMode_FromXIB:(_Bool)arg1;
- (void)setNeedsDisplay;
- (void)setUnderlineLinks:(_Bool)arg1;
@property(readonly, nonatomic) NSDataDetector *linksDataDetector;
- (void)setLineBreakMode:(long long)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)resetAttributedText;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawActiveLinkHighlightForRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)resetTextFrame;
- (void)processActiveLink;
- (void)_gestureRecognised:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)linkAtPoint:(struct CGPoint)arg1;
- (id)linkAtCharacterIndex:(long long)arg1;
- (void)recomputeLinksInTextIfNeeded;
- (void)setNeedsRecomputeLinksInText;
- (void)removeAllCustomLinks;
- (void)addCustomLink:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)dealloc;
- (void)skinChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
