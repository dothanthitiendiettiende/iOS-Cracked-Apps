//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class AliDetailPriceLabel, AliDetailPriceViewModel, NSString, UIImageView;

@interface AliDetailTimeLimitActivityItemView : UIControl
{
    UIImageView *_imageView;
    AliDetailPriceLabel *_priceLabel;
    AliDetailPriceViewModel *_priceModel;
    NSString *_itemId;
    NSString *_eventToken;
}

@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) AliDetailPriceViewModel *priceModel; // @synthesize priceModel=_priceModel;
@property(retain, nonatomic) AliDetailPriceLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)gotoDetail:(id)arg1;

@end

