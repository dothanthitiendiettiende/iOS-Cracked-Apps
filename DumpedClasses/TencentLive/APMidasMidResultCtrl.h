//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APMidasBaseViewCtrl.h"

@class NSString, NSTimer, UIButton, UILabel;

@interface APMidasMidResultCtrl : APMidasBaseViewCtrl
{
    NSTimer *timer;
    _Bool canSearch;
    long long count;
    UIButton *statusImageView;
    UILabel *statusLabel;
    UILabel *tipsLabel;
    UILabel *orderNoLabel;
    UIButton *backBtn;
    UIButton *searchBtn;
    NSString *state;
}

@property(retain, nonatomic) NSString *state; // @synthesize state;
@property(nonatomic) __weak UIButton *searchBtn; // @synthesize searchBtn;
@property(nonatomic) __weak UIButton *backBtn; // @synthesize backBtn;
@property(nonatomic) __weak UILabel *orderNoLabel; // @synthesize orderNoLabel;
@property(nonatomic) __weak UILabel *tipsLabel; // @synthesize tipsLabel;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel;
@property(nonatomic) __weak UIButton *statusImageView; // @synthesize statusImageView;
- (void).cxx_destruct;
- (void)timeFireMethod;
- (void)beginCountDown;
- (void)onTel;
- (void)updateProcessUI;
- (void)updateFailUI:(id)arg1;
- (void)updateWarnUI:(id)arg1;
- (void)showHfNotSearchState:(id)arg1;
- (void)updateUIByStateForMcard;
- (void)updateUIByStateForHf;
- (void)checkStateForHf;
- (void)checkForState;
- (void)onGetMcardStatusSuccess;
- (void)getMcardStatus;
- (void)onGetHfStatusSuccess;
- (void)getHfPayStatus;
- (void)onSearch:(id)arg1;
- (void)onBackToGame:(id)arg1;
- (void)btnSetting;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

