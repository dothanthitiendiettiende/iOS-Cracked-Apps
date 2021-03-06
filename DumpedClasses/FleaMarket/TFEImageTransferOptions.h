//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TFEImageAdvanceCut, TFEImageWatermark;

@interface TFEImageTransferOptions : NSObject
{
    _Bool _shortEdge;
    _Bool _absoluteQuality;
    _Bool _immobilize;
    _Bool _cut;
    _Bool _orient;
    _Bool _limit;
    int _width;
    int _height;
    int _quality;
    int _rotate;
    int _multiple;
    int _brightness;
    int _contrast;
    NSString *_url;
    TFEImageAdvanceCut *_advanceCut;
    long long _format;
    TFEImageWatermark *_watermark;
}

+ (int)invalidIntOption;
@property(retain, nonatomic) TFEImageWatermark *watermark; // @synthesize watermark=_watermark;
@property(nonatomic) long long format; // @synthesize format=_format;
@property(nonatomic) _Bool limit; // @synthesize limit=_limit;
@property(nonatomic) int contrast; // @synthesize contrast=_contrast;
@property(nonatomic) int brightness; // @synthesize brightness=_brightness;
@property(retain, nonatomic) TFEImageAdvanceCut *advanceCut; // @synthesize advanceCut=_advanceCut;
@property(nonatomic) _Bool orient; // @synthesize orient=_orient;
@property(nonatomic) _Bool cut; // @synthesize cut=_cut;
@property(nonatomic) _Bool immobilize; // @synthesize immobilize=_immobilize;
@property(nonatomic) int multiple; // @synthesize multiple=_multiple;
@property(nonatomic) int rotate; // @synthesize rotate=_rotate;
@property(nonatomic) int quality; // @synthesize quality=_quality;
@property(nonatomic) _Bool absoluteQuality; // @synthesize absoluteQuality=_absoluteQuality;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) _Bool shortEdge; // @synthesize shortEdge=_shortEdge;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithUrl:(id)arg1;
- (id)init;
- (id)initWithNamespace:(id)arg1 dir:(id)arg2 name:(id)arg3;

@end

