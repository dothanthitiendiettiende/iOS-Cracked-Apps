//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DGPStopModel, UIImageView, UILabel;

@interface DGPTransitCalloutInfoView : UIView
{
    UILabel *_leftBottomLabel;
    UILabel *_etaLabel;
    UIImageView *_etaImageView;
    UIView *_lineView;
    DGPStopModel *_stopModel;
}

@property(retain, nonatomic) DGPStopModel *stopModel; // @synthesize stopModel=_stopModel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *etaImageView; // @synthesize etaImageView=_etaImageView;
@property(retain, nonatomic) UILabel *etaLabel; // @synthesize etaLabel=_etaLabel;
@property(retain, nonatomic) UILabel *leftBottomLabel; // @synthesize leftBottomLabel=_leftBottomLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStopModel:(id)arg1 withETA:(id)arg2;

@end

