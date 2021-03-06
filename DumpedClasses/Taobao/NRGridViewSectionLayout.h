//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface NRGridViewSectionLayout : NSObject
{
    int layoutStyle;
    long long section;
    long long numberOfItems;
    UIView *_headerView;
    UIView *_footerView;
    struct CGRect headerFrame;
    struct CGRect contentFrame;
    struct CGRect footerFrame;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle;
@property(nonatomic) struct CGRect footerFrame; // @synthesize footerFrame;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame;
@property(nonatomic) struct CGRect headerFrame; // @synthesize headerFrame;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems;
@property(nonatomic) long long section; // @synthesize section;
- (void)dealloc;
@property(readonly, nonatomic) struct CGRect sectionFrame; // @dynamic sectionFrame;

@end

