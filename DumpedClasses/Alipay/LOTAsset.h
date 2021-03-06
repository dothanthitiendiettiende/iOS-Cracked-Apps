//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LOTLayerGroup, NSNumber, NSString;

@interface LOTAsset : NSObject
{
    NSString *_referenceID;
    NSNumber *_assetWidth;
    NSNumber *_assetHeight;
    NSString *_imageName;
    NSString *_imageDirectory;
    NSString *_imagePath;
    LOTLayerGroup *_layerGroup;
}

@property(readonly, nonatomic) LOTLayerGroup *layerGroup; // @synthesize layerGroup=_layerGroup;
@property(readonly, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(readonly, nonatomic) NSString *imageDirectory; // @synthesize imageDirectory=_imageDirectory;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) NSNumber *assetHeight; // @synthesize assetHeight=_assetHeight;
@property(readonly, nonatomic) NSNumber *assetWidth; // @synthesize assetWidth=_assetWidth;
@property(readonly, nonatomic) NSString *referenceID; // @synthesize referenceID=_referenceID;
- (void).cxx_destruct;
- (void)_mapFromJSON:(id)arg1 withBounds:(struct CGRect)arg2 withFramerate:(id)arg3 withAssetGroup:(id)arg4 withRootDir:(id)arg5;
- (id)initWithJSON:(id)arg1 withBounds:(struct CGRect)arg2 withFramerate:(id)arg3 withAssetGroup:(id)arg4 withAssetRootDir:(id)arg5;

@end

