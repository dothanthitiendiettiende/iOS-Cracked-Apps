//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "QLSelectButtonDelegate.h"

@class NSString, QLSelectButton;

@interface QLLogTypeChooseViewController : UIViewController <QLSelectButtonDelegate>
{
    QLSelectButton *_verboseBtn;
    QLSelectButton *_debugBtn;
    QLSelectButton *_infoBtn;
    QLSelectButton *_systemBtn;
    QLSelectButton *_warningBtn;
    QLSelectButton *_errorBtn;
    long long _chooseInfo;
}

@property(nonatomic) long long chooseInfo; // @synthesize chooseInfo=_chooseInfo;
@property(retain, nonatomic) QLSelectButton *errorBtn; // @synthesize errorBtn=_errorBtn;
@property(retain, nonatomic) QLSelectButton *warningBtn; // @synthesize warningBtn=_warningBtn;
@property(retain, nonatomic) QLSelectButton *systemBtn; // @synthesize systemBtn=_systemBtn;
@property(retain, nonatomic) QLSelectButton *infoBtn; // @synthesize infoBtn=_infoBtn;
@property(retain, nonatomic) QLSelectButton *debugBtn; // @synthesize debugBtn=_debugBtn;
@property(retain, nonatomic) QLSelectButton *verboseBtn; // @synthesize verboseBtn=_verboseBtn;
- (void).cxx_destruct;
- (void)qlSelectButton:(id)arg1 selectionDidChange:(_Bool)arg2;
- (id)getSelectButtonWithFrame:(struct CGRect)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
