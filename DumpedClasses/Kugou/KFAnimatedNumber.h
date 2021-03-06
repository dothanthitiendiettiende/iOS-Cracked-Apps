//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, UIColor, UIFont;

@interface KFAnimatedNumber : UIView
{
    UIColor *_textColor;
    UIFont *_textFont;
    NSString *_numbers;
    NSString *_preNumbers;
    long long _direction;
    id <KFAnimatedNumberDelegate> _delegate;
    double _duration;
    double _needOriginY;
    NSArray *_allNumbersList;
    NSArray *_labelsList;
    UIView *_maskView;
    double _viewWidth;
    double _viewHeight;
}

@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSArray *labelsList; // @synthesize labelsList=_labelsList;
@property(retain, nonatomic) NSArray *allNumbersList; // @synthesize allNumbersList=_allNumbersList;
@property(nonatomic) double needOriginY; // @synthesize needOriginY=_needOriginY;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <KFAnimatedNumberDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) NSString *preNumbers; // @synthesize preNumbers=_preNumbers;
@property(readonly, nonatomic) NSString *numbers; // @synthesize numbers=_numbers;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (_Bool)isNumberType:(id)arg1;
- (id)createLabels:(id)arg1;
- (void)updateLabelsLayoutWithAnimated:(_Bool)arg1;
- (id)generateLabels;
- (void)setupLabels;
- (void)setNumbers:(id)arg1 animated:(_Bool)arg2;
- (void)setup;
- (id)init;

@end

