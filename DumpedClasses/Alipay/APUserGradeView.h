//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class APContactInfo, UIImageView, UILabel;

@interface APUserGradeView : UIView
{
    APContactInfo *_contactInfo;
    UIImageView *_gradeIconView;
    UILabel *_label;
    UIView *_labelBg;
}

@property(retain, nonatomic) UIView *labelBg; // @synthesize labelBg=_labelBg;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *gradeIconView; // @synthesize gradeIconView=_gradeIconView;
@property(retain, nonatomic) APContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
- (void).cxx_destruct;
- (id)getFontColorWith:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

