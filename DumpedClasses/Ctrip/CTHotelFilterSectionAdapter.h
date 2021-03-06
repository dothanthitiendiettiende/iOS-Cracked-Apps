//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelSectionAdapter.h"

#import "CTHotelDetailRoomFilterDelegate.h"
#import "CTHotelOverseaPersonViewControllerDelegate.h"
#import "CTHotelRoomTopViewDelegate.h"
#import "CTMapPopOrderViewDelegate.h"

@class CTHotelDetailCacheBean, CTHotelFilterCell, NSString;

@interface CTHotelFilterSectionAdapter : CTHotelSectionAdapter <CTHotelRoomTopViewDelegate, CTHotelDetailRoomFilterDelegate, CTMapPopOrderViewDelegate, CTHotelOverseaPersonViewControllerDelegate>
{
    id <CTHotelSectionAdapterDelegate> _delegate;
    CTHotelDetailCacheBean *_detailCacheBean;
    long long _loadingStatus;
    double _pinnedStart;
    CTHotelFilterCell *_cell;
}

@property(retain, nonatomic) CTHotelFilterCell *cell; // @synthesize cell=_cell;
@property(nonatomic) double pinnedStart; // @synthesize pinnedStart=_pinnedStart;
@property(nonatomic) long long loadingStatus; // @synthesize loadingStatus=_loadingStatus;
@property(nonatomic) __weak CTHotelDetailCacheBean *detailCacheBean; // @synthesize detailCacheBean=_detailCacheBean;
@property(nonatomic) __weak id <CTHotelSectionAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)CTHotelDetailModifyDatedidFinishSelectconfirm:(id)arg1;
- (void)hotelOverseaPersonViewControllerDelegate:(id)arg1;
- (void)ctHotelBeforeDownView:(id)arg1 didSelectedAtIndexpath:(id)arg2;
- (void)ctMapSearchPopOrderView:(id)arg1 didSelectedAtIndexpath:(id)arg2;
- (void)didFilterSelected;
- (void)resetFilterAction;
- (void)showTotalPrice:(_Bool)arg1;
- (void)detailOutFilteraction;
- (void)aultChildrenSelect;
- (void)modifydateaction;
- (void)morningSelect;
- (void)filteraction;
- (double)getCellHeight:(id)arg1;
- (id)getCellView:(id)arg1;
- (struct CGPoint)getCellPointInScreen;
- (void)doPinned:(_Bool)arg1 with:(id)arg2;
- (id)cellView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

