//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DatabaseItem.h"

@class NSString;

@interface PCCResourceStatusItem : DatabaseItem
{
    NSString *_bid;
    NSString *_url;
    NSString *_md5;
    long long _failedTimesToday;
    long long _failedTimesTotal;
    double _failedTimesDate;
}

+ (id)dbTypes;
@property(nonatomic) double failedTimesDate; // @synthesize failedTimesDate=_failedTimesDate;
@property(nonatomic) long long failedTimesTotal; // @synthesize failedTimesTotal=_failedTimesTotal;
@property(nonatomic) long long failedTimesToday; // @synthesize failedTimesToday=_failedTimesToday;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *bid; // @synthesize bid=_bid;
- (void).cxx_destruct;
- (void)convertFromResourceItem:(id)arg1;
- (id)identity;
- (id)description;

@end
