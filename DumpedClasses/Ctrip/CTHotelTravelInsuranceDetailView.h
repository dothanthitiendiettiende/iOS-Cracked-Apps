//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

@class CTHotelOrderDetailOperBtn, CTHotelPassengerInsView, CTTravelInsuranceViewModel, UILabel;

@interface CTHotelTravelInsuranceDetailView : CTRootView
{
    id <CTHotelTravelInsuranceDetailDelegate> _delegate;
    UILabel *_labLine;
    CTHotelPassengerInsView *_personInfo;
    CTHotelOrderDetailOperBtn *_btnClaim;
    CTTravelInsuranceViewModel *_insuranceVM;
}

+ (double)getHeight:(id)arg1;
@property(nonatomic) __weak CTTravelInsuranceViewModel *insuranceVM; // @synthesize insuranceVM=_insuranceVM;
@property(retain, nonatomic) CTHotelOrderDetailOperBtn *btnClaim; // @synthesize btnClaim=_btnClaim;
@property(retain, nonatomic) CTHotelPassengerInsView *personInfo; // @synthesize personInfo=_personInfo;
@property(retain, nonatomic) UILabel *labLine; // @synthesize labLine=_labLine;
@property(nonatomic) __weak id <CTHotelTravelInsuranceDetailDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setData:(id)arg1 fullInfo:(_Bool)arg2;
- (void)clickClaim;
- (void)initView:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isLastOne:(_Bool)arg2;

@end

