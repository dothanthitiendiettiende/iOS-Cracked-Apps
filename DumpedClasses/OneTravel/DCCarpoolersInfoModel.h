//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class DCNoteInfoModel<Optional>, NSArray<Optional><DCCarpoolerDetailInfoModel>, NSString<Optional>;

@interface DCCarpoolersInfoModel : JSONModel
{
    NSString<Optional> *_status;
    NSArray<Optional><DCCarpoolerDetailInfoModel> *_carpool_orders;
    DCNoteInfoModel<Optional> *_desc_info;
}

@property(retain, nonatomic) DCNoteInfoModel<Optional> *desc_info; // @synthesize desc_info=_desc_info;
@property(retain, nonatomic) NSArray<Optional><DCCarpoolerDetailInfoModel> *carpool_orders; // @synthesize carpool_orders=_carpool_orders;
@property(copy, nonatomic) NSString<Optional> *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

