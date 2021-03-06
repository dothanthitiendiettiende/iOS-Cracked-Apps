//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ATPageView.h"

@class CADisplayLink, NMSong, NSString, UIImage, UIImageView;

@interface NMPlayPageView : UIView <ATPageView>
{
    struct CGSize _coverSize;
    struct CGSize _maskSize;
    struct CGSize _diskSize;
    unsigned long long _animateState;
    CADisplayLink *_rotationDisplayLink;
    double _degree;
    double _spinSpeed;
    UIImageView *_bgImageView;
    UIImageView *_coverImageView;
    UIImageView *_diskImageView;
    UIImageView *_maskImageView;
    UIImage *_radioDefaultImage;
    UIImage *_songDefaultImage;
    UIImage *_coverDefaultImage;
    NSString *_currentCoverUrl;
    NMSong *_song;
    _Bool _isDjProgram;
    _Bool _animating;
}

+ (struct CGSize)maskSize;
+ (struct CGSize)diskSize;
+ (struct CGSize)coverSize:(_Bool)arg1;
+ (double)djCoverBgPadding;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) NMSong *song; // @synthesize song=_song;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *diskImageView;
@property(readonly, nonatomic) UIImageView *maskImageView;
@property(readonly, nonatomic) UIImageView *coverImageDetailView;
- (void)reachAbilityChanged:(id)arg1;
- (void)pauseDiskAnimating;
- (void)stopDiskAnimating;
- (void)startDiskAnimating;
- (void)stopSpin;
- (void)pauseSpin;
- (void)startSpin;
- (void)spin:(id)arg1;
- (void)startDownloadCover;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

