//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BMPlaceParameterInfo : NSObject
{
    NSString *_type;
    NSString *_sortKey;
    long long _sortRule;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long sortRule; // @synthesize sortRule=_sortRule;
@property(retain, nonatomic) NSString *sortKey; // @synthesize sortKey=_sortKey;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
