//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WPShowWantBookObject : NSObject
{
    NSString *_dramaTitle;
    NSString *_dramaId;
    NSString *_drmaplayItemName;
    NSString *_drmaplayItemId;
    NSString *_itemPriceId;
    double _price;
    NSString *_remark;
    long long _maxBuyCount;
}

@property(nonatomic) long long maxBuyCount; // @synthesize maxBuyCount=_maxBuyCount;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) double price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *itemPriceId; // @synthesize itemPriceId=_itemPriceId;
@property(copy, nonatomic) NSString *drmaplayItemId; // @synthesize drmaplayItemId=_drmaplayItemId;
@property(copy, nonatomic) NSString *drmaplayItemName; // @synthesize drmaplayItemName=_drmaplayItemName;
@property(copy, nonatomic) NSString *dramaId; // @synthesize dramaId=_dramaId;
@property(copy, nonatomic) NSString *dramaTitle; // @synthesize dramaTitle=_dramaTitle;
- (void).cxx_destruct;

@end

