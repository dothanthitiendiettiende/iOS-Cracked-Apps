//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DiDiLocationManagerDelegate.h"
#import "MKMapViewDelegate.h"

@class CLLocation, MKMapView, NSString;

@interface LGGatherMap : NSObject <MKMapViewDelegate, DiDiLocationManagerDelegate>
{
    MKMapView *_mapView;
    NSString *_userCoordinateStr;
    double _lastLat;
    double _lastLongi;
    double _lastAcc;
    CLLocation *_currLocation;
}

+ (id)shareInstance;
@property(retain, nonatomic) CLLocation *currLocation; // @synthesize currLocation=_currLocation;
@property(nonatomic) double lastAcc; // @synthesize lastAcc=_lastAcc;
@property(nonatomic) double lastLongi; // @synthesize lastLongi=_lastLongi;
@property(nonatomic) double lastLat; // @synthesize lastLat=_lastLat;
@property(copy, nonatomic) NSString *userCoordinateStr; // @synthesize userCoordinateStr=_userCoordinateStr;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)didiLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)didiLocationManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)forceCallBackUpdateLocation;
- (void)collectDataWithLocation:(id)arg1;
- (id)LoCo_GetUserCoordinate;
- (void)needToUpdateCoor;
- (void)LoCo_MapSettingWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

