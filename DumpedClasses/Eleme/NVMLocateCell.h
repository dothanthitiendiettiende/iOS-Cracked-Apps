//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class NSArray, NVMCoreLocationService, NVMLocation, NVMReverseGeocoder, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface NVMLocateCell : NVMTableViewCell
{
    _Bool _isLoading;
    _Bool _hasReportedFirstUserGeohash;
    CDUnknownBlockType _showChangeLocationServiceAuthorityAction;
    CDUnknownBlockType _didFirstlyUpdateUserGeohashAction;
    NVMLocation *_location;
    UIImageView *_placeholderImageView;
    UILabel *_locationLabel;
    UIButton *_locateButton;
    UIActivityIndicatorView *_loadingView;
    NVMReverseGeocoder *_reverseGeocoder;
    NVMCoreLocationService *_service;
    NSArray *_accessibilities;
}

@property(copy, nonatomic) NSArray *accessibilities; // @synthesize accessibilities=_accessibilities;
@property(retain, nonatomic) NVMCoreLocationService *service; // @synthesize service=_service;
@property(nonatomic) _Bool hasReportedFirstUserGeohash; // @synthesize hasReportedFirstUserGeohash=_hasReportedFirstUserGeohash;
@property(retain, nonatomic) NVMReverseGeocoder *reverseGeocoder; // @synthesize reverseGeocoder=_reverseGeocoder;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *locateButton; // @synthesize locateButton=_locateButton;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NVMLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) CDUnknownBlockType didFirstlyUpdateUserGeohashAction; // @synthesize didFirstlyUpdateUserGeohashAction=_didFirstlyUpdateUserGeohashAction;
@property(copy, nonatomic) CDUnknownBlockType showChangeLocationServiceAuthorityAction; // @synthesize showChangeLocationServiceAuthorityAction=_showChangeLocationServiceAuthorityAction;
- (void).cxx_destruct;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (void)updateAccessibilities;
- (_Bool)isAccessibilityElement;
- (void)updateWithFailInfo:(id)arg1;
- (void)stopShowLoading;
- (void)startShowLoading;
- (void)updateLocationNameWithGeohash:(id)arg1;
- (void)startLocating;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

