//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQPHCTransitionView.h"

@class MQQButton, UIButton;

@interface MQQPHCResultView : MQQPHCTransitionView
{
    MQQButton *_photoFilterButton;
}

@property(readonly, nonatomic) UIButton *photoFilterButton; // @synthesize photoFilterButton=_photoFilterButton;
- (unsigned long long)countDigitOfNumber:(unsigned long long)arg1;
- (void)loadContentWithSuccessCount:(unsigned long long)arg1 failedCount:(unsigned long long)arg2 offsetY:(double)arg3 inView:(id)arg4;
- (void)loadContentWithSuccessCount:(unsigned long long)arg1 offsetY:(double)arg2 inView:(id)arg3;
- (void)loadPhotoFilterButtonWithTitle:(id)arg1;
- (void)loadContentView:(CDUnknownBlockType)arg1;
- (void)updatePhotoFilterButtonTitle:(id)arg1 withArrow:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 successCount:(unsigned long long)arg2 failedCount:(unsigned long long)arg3 saveSpace:(unsigned long long)arg4 mediaType:(long long)arg5;
- (id)initEmptyWithFrame:(struct CGRect)arg1;

@end

