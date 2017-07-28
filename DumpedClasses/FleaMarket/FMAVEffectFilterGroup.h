//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMAVEffectOutput.h"

#import "FMAVEffectInput.h"

@class FMAVEffectOutput<FMAVEffectInput>, NSArray, NSMutableArray, NSString;

@interface FMAVEffectFilterGroup : FMAVEffectOutput <FMAVEffectInput>
{
    NSMutableArray *filters;
    _Bool isEndProcessing;
    FMAVEffectOutput<FMAVEffectInput> *_terminalFilter;
    NSArray *_initialFilters;
    FMAVEffectOutput<FMAVEffectInput> *_inputFilterToIgnoreForUpdates;
}

@property(retain, nonatomic) FMAVEffectOutput<FMAVEffectInput> *inputFilterToIgnoreForUpdates; // @synthesize inputFilterToIgnoreForUpdates=_inputFilterToIgnoreForUpdates;
@property(retain, nonatomic) NSArray *initialFilters; // @synthesize initialFilters=_initialFilters;
@property(retain, nonatomic) FMAVEffectOutput<FMAVEffectInput> *terminalFilter; // @synthesize terminalFilter=_terminalFilter;
- (void)setSeverControlBlack:(double)arg1;
- (void)setSeverControlEdge:(double)arg1;
- (void)setSeverControlLine:(double)arg1;
- (void)setAmount:(double)arg1;
- (void)dealloc;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (id)targets;
- (void)removeAllTargets;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (void)setTargetToIgnoreForUpdates:(id)arg1;
- (id)framebufferForOutput;
- (unsigned long long)filterCount;
- (id)filterAtIndex:(unsigned long long)arg1;
- (void)addFilter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
