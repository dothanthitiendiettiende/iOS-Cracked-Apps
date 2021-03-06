//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARTNode.h"

@class ARTBrush;

@interface ARTRenderable : ARTNode
{
    int _strokeCap;
    int _strokeJoin;
    ARTBrush *_fill;
    struct CGColor *_stroke;
    double _strokeWidth;
    CDStruct_3b9f1d24 _strokeDash;
}

@property(nonatomic) CDStruct_3b9f1d24 strokeDash; // @synthesize strokeDash=_strokeDash;
@property(nonatomic) int strokeJoin; // @synthesize strokeJoin=_strokeJoin;
@property(nonatomic) int strokeCap; // @synthesize strokeCap=_strokeCap;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(nonatomic) struct CGColor *stroke; // @synthesize stroke=_stroke;
@property(retain, nonatomic) ARTBrush *fill; // @synthesize fill=_fill;
- (void).cxx_destruct;
- (void)renderLayerTo:(struct CGContext *)arg1;
- (void)renderTo:(struct CGContext *)arg1;
- (void)dealloc;

@end

