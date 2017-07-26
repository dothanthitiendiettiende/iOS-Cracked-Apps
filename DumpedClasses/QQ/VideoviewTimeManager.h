//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UILabel;

@interface VideoviewTimeManager : UIView
{
    id <VideoviewTimeDelegate> _timeDelegate;
    UILabel *_timeLable;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *timeLable; // @synthesize timeLable=_timeLable;
@property(nonatomic) id <VideoviewTimeDelegate> timeDelegate; // @synthesize timeDelegate=_timeDelegate;
- (void)dealloc;
- (void)clearTimeLable;
- (void)invalidateTimer;
- (void)updateTimeLable;
- (void)startTimer;
- (void)setTimerLableWithFloat:(double)arg1;
- (void)setTimerLableWithString:(id)arg1;
- (void)initTimeLable;
- (id)initWithFrame:(struct CGRect)arg1;

@end
