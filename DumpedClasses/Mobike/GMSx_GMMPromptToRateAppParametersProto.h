//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class NSString;

@interface GMSx_GMMPromptToRateAppParametersProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;
@property(retain, nonatomic) NSString *rateAppURL;
@property(nonatomic) _Bool hasRateAppURL;

// Remaining properties
@property(nonatomic) _Bool hasMinimumTimeSinceFirstLaunchSeconds; // @dynamic hasMinimumTimeSinceFirstLaunchSeconds;
@property(nonatomic) _Bool hasRateAppUrl; // @dynamic hasRateAppUrl;
@property(nonatomic) int minimumTimeSinceFirstLaunchSeconds; // @dynamic minimumTimeSinceFirstLaunchSeconds;
@property(retain, nonatomic) NSString *rateAppUrl; // @dynamic rateAppUrl;

@end
