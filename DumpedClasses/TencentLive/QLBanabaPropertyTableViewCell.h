//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBanabaTableViewCell.h"

@class QLImageMixedItem, QLImageMixedLabel;

@interface QLBanabaPropertyTableViewCell : QLBanabaTableViewCell
{
    QLImageMixedLabel *_imageMixedLabel;
    QLImageMixedItem *_imageMixedItem;
}

+ (double)cellHeightWithBanabaItem:(id)arg1;
@property(retain, nonatomic) QLImageMixedItem *imageMixedItem; // @synthesize imageMixedItem=_imageMixedItem;
@property(retain, nonatomic) QLImageMixedLabel *imageMixedLabel; // @synthesize imageMixedLabel=_imageMixedLabel;
- (void).cxx_destruct;
- (struct CGSize)getContentSize;
- (void)layoutSubviews;
- (void)createImageMixedLabel;
- (void)setBanabaItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

