//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaxiBaseModel.h"

@class NSString<Optional>;

@interface TaxiOrderEventModel : TaxiBaseModel
{
    int _orderEvent;
    NSString<Optional> *_orderId;
}

@property(nonatomic) int orderEvent; // @synthesize orderEvent=_orderEvent;
@property(copy, nonatomic) NSString<Optional> *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (void)dealloc;

@end
