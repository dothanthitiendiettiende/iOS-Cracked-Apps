//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCartBaseResponse.h"

@class TBCartQueryCouponModel;

@interface TBCartQueryCouponResponse : TBCartBaseResponse
{
    TBCartQueryCouponModel *_queryBonusModel;
    id <TBCartDataComponent> _shopComponent;
}

@property(retain, nonatomic) id <TBCartDataComponent> shopComponent; // @synthesize shopComponent=_shopComponent;
@property(retain, nonatomic) TBCartQueryCouponModel *queryBonusModel; // @synthesize queryBonusModel=_queryBonusModel;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 error:(id)arg2;

@end

