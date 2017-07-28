//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ONESBaseAnnotationView, UIView;

@interface annoInfoModel : NSObject
{
    UIView *_calloutView;
    ONESBaseAnnotationView *_annoView;
    unsigned long long _drawMode;
    struct CLLocationCoordinate2D _coordinate;
    CDStruct_34734122 _mapPoint;
    struct CGPoint _cgPoint;
    struct CGSize _imageSize;
    struct CGPoint _anchorPoint;
    struct CGSize _bubbleSize;
    struct CGRect _bubbleFrame;
    struct annoMargin _marginStrct;
}

+ (struct annoMargin)getAnnoMarginsWithImgSize:(struct CGSize)arg1 bubbleSize:(struct CGSize)arg2 anchor:(struct CGPoint)arg3 drawMode:(int)arg4;
+ (id)converFromOBPA:(id)arg1 mapEntrance:(id)arg2;
@property(nonatomic) struct annoMargin marginStrct; // @synthesize marginStrct=_marginStrct;
@property(nonatomic) struct CGSize bubbleSize; // @synthesize bubbleSize=_bubbleSize;
@property(nonatomic) struct CGRect bubbleFrame; // @synthesize bubbleFrame=_bubbleFrame;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(nonatomic) unsigned long long drawMode; // @synthesize drawMode=_drawMode;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) __weak ONESBaseAnnotationView *annoView; // @synthesize annoView=_annoView;
@property(nonatomic) __weak UIView *calloutView; // @synthesize calloutView=_calloutView;
@property(nonatomic) struct CGPoint cgPoint; // @synthesize cgPoint=_cgPoint;
@property(nonatomic) CDStruct_c3b9c2ee mapPoint; // @synthesize mapPoint=_mapPoint;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;

@end
