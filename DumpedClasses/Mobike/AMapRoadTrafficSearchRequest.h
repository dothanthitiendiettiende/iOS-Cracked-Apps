//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSString;

@interface AMapRoadTrafficSearchRequest : AMapSearchObject
{
    _Bool _requireExtension;
    NSString *_roadName;
    NSString *_adcode;
}

@property(nonatomic) _Bool requireExtension; // @synthesize requireExtension=_requireExtension;
@property(copy, nonatomic) NSString *adcode; // @synthesize adcode=_adcode;
@property(copy, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
- (void).cxx_destruct;

@end
