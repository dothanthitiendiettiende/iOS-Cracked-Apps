//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DRCHomeCardContainerView, DRCHomeNormalContainerView;

@interface DRCHomeCHNContainerView : UIView
{
    DRCHomeNormalContainerView *_normalContainerView;
    DRCHomeCardContainerView *_orderListView;
}

@property(retain, nonatomic) DRCHomeCardContainerView *orderListView; // @synthesize orderListView=_orderListView;
@property(retain, nonatomic) DRCHomeNormalContainerView *normalContainerView; // @synthesize normalContainerView=_normalContainerView;
- (void).cxx_destruct;
- (void)switchHomeType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
