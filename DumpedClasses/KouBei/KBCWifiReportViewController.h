//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class KBCWifiReportModel, NSString, UITextField;

@interface KBCWifiReportViewController : UIViewController
{
    NSString *_shopId;
    KBCWifiReportModel *_model;
    UITextField *_textField;
    NSString *_bssid;
    NSString *_ssid;
}

+ (id)fetchSSIDInfo;
@property(retain, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(retain, nonatomic) NSString *bssid; // @synthesize bssid=_bssid;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) KBCWifiReportModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (void)submitBtnClicked;
- (void)viewDidLoad;

@end

