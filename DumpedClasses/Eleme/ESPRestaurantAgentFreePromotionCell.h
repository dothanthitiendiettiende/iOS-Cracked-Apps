//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class ESPRestaurant, NVMRoundRectView, UILabel;

@interface ESPRestaurantAgentFreePromotionCell : NVMTableViewCell
{
    ESPRestaurant *_restaurant;
    NVMRoundRectView *_roundBackground;
    UILabel *_agentFeeLabel;
    UILabel *_promotionLabel;
}

+ (double)cellHeightWithRestaurant:(id)arg1;
+ (id)templateLabel;
@property(retain, nonatomic) UILabel *promotionLabel; // @synthesize promotionLabel=_promotionLabel;
@property(retain, nonatomic) UILabel *agentFeeLabel; // @synthesize agentFeeLabel=_agentFeeLabel;
@property(retain, nonatomic) NVMRoundRectView *roundBackground; // @synthesize roundBackground=_roundBackground;
@property(retain, nonatomic) ESPRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;
- (void)loadRoundBackground;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

