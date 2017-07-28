//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXSelStyleTableCell.h"

@class FXLiveHomeCellVM, KGLiveProgramModel, NSIndexPath, UIButton, UIImageView, UILabel, UIView, UIVisualEffectView;

@interface CellLiveProgram : FXSelStyleTableCell
{
    FXLiveHomeCellVM *_model;
    KGLiveProgramModel *_programeModel;
    NSIndexPath *_indexPath;
    id <CellLiveProgramDelegate> _delegate;
    UILabel *_lbLiving;
    UILabel *_lbType;
    UILabel *_lbRoundDate;
    UILabel *_labelTime;
    UIView *_vLine;
    UIImageView *_titleImg;
    UIImageView *_imgType;
    UIImageView *_imgState;
    UIView *_vMask;
    UILabel *_title;
    UILabel *_audienceLabel;
    UILabel *_lbSinger;
    UIButton *_btnBottonRight;
    UIVisualEffectView *_effectview;
    UIView *_vGaizhuLine;
    double _scale;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIView *vGaizhuLine; // @synthesize vGaizhuLine=_vGaizhuLine;
@property(retain, nonatomic) UIVisualEffectView *effectview; // @synthesize effectview=_effectview;
@property(retain, nonatomic) UIButton *btnBottonRight; // @synthesize btnBottonRight=_btnBottonRight;
@property(retain, nonatomic) UILabel *lbSinger; // @synthesize lbSinger=_lbSinger;
@property(retain, nonatomic) UILabel *audienceLabel; // @synthesize audienceLabel=_audienceLabel;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *vMask; // @synthesize vMask=_vMask;
@property(retain, nonatomic) UIImageView *imgState; // @synthesize imgState=_imgState;
@property(retain, nonatomic) UIImageView *imgType; // @synthesize imgType=_imgType;
@property(retain, nonatomic) UIImageView *titleImg; // @synthesize titleImg=_titleImg;
@property(retain, nonatomic) UIView *vLine; // @synthesize vLine=_vLine;
@property(retain, nonatomic) UILabel *labelTime; // @synthesize labelTime=_labelTime;
@property(retain, nonatomic) UILabel *lbRoundDate; // @synthesize lbRoundDate=_lbRoundDate;
@property(retain, nonatomic) UILabel *lbType; // @synthesize lbType=_lbType;
@property(retain, nonatomic) UILabel *lbLiving; // @synthesize lbLiving=_lbLiving;
@property(nonatomic) __weak id <CellLiveProgramDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) KGLiveProgramModel *programeModel; // @synthesize programeModel=_programeModel;
@property(retain, nonatomic) FXLiveHomeCellVM *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)toSubcrib:(id)arg1;
- (_Bool)validateUrl:(id)arg1;
- (id)today;
- (_Bool)isToday:(id)arg1;
- (void)configStyle;
- (double)configFrame;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
