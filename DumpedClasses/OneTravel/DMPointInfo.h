//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface DMPointInfo : NSObject
{
    _Bool _hasStreetView;
    NSString *_uid;
    NSString *_name;
    NSString *_addr;
    NSMutableDictionary *_userInfo;
    struct _DDMapPoint _mapPoint;
    long long _coorStart;
}

+ (id)currentLocation;
@property(nonatomic) long long coorStart; // @synthesize coorStart=_coorStart;
@property(nonatomic) struct _DDMapPoint mapPoint; // @synthesize mapPoint=_mapPoint;
@property(nonatomic) _Bool hasStreetView; // @synthesize hasStreetView=_hasStreetView;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *addr; // @synthesize addr=_addr;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)userObjectForKey:(id)arg1;
- (void)setUserObject:(id)arg1 forKey:(id)arg2;
- (id)initWithName:(id)arg1 mapPoint:(struct _DDMapPoint)arg2;

@end

