//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYMessageRequest.h"

@class NSString;

@interface QYMCinemaRecommendRequest : QYMessageRequest
{
    NSString *_cityId;
    NSString *_location;
    NSString *_areaId;
    NSString *_brandName;
    NSString *_orderBy;
    unsigned long long _dealStartTime;
    unsigned long long _requestEndTime;
}

@property(nonatomic) unsigned long long requestEndTime; // @synthesize requestEndTime=_requestEndTime;
@property(nonatomic) unsigned long long dealStartTime; // @synthesize dealStartTime=_dealStartTime;
@property(copy, nonatomic) NSString *orderBy; // @synthesize orderBy=_orderBy;
@property(copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(copy, nonatomic) NSString *areaId; // @synthesize areaId=_areaId;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
- (void).cxx_destruct;
- (_Bool)parse:(id)arg1;
- (id)urlStl;
- (id)init;

@end

