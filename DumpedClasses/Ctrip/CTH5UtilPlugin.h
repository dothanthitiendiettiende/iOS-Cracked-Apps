//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTH5Plugin.h"

#import "CTImagePickerMangerDelegate.h"

@class CTImagePickerManger, NSMutableDictionary, NSString;

@interface CTH5UtilPlugin : CTH5Plugin <CTImagePickerMangerDelegate>
{
    NSMutableDictionary *_downloadInfoDict;
    NSString *_downloadCallbackTagName;
    CTImagePickerManger *_imagePickManager;
    NSString *_imagePickerCallbackTagName;
    NSString *_saveImageCallbackTagName;
}

@property(copy, nonatomic) NSString *saveImageCallbackTagName; // @synthesize saveImageCallbackTagName=_saveImageCallbackTagName;
@property(copy, nonatomic) NSString *imagePickerCallbackTagName; // @synthesize imagePickerCallbackTagName=_imagePickerCallbackTagName;
@property(retain, nonatomic) CTImagePickerManger *imagePickManager; // @synthesize imagePickManager=_imagePickManager;
@property(copy, nonatomic) NSString *downloadCallbackTagName; // @synthesize downloadCallbackTagName=_downloadCallbackTagName;
@property(retain, nonatomic) NSMutableDictionary *downloadInfoDict; // @synthesize downloadInfoDict=_downloadInfoDict;
- (void).cxx_destruct;
- (void)showHybridVersion:(id)arg1;
- (void)isRemoteNotificationEnabled:(id)arg1;
- (void)setStatusBarStyle:(id)arg1;
- (void)sgDAV:(id)arg1;
- (void)showPhotoBroswer:(id)arg1;
- (void)getScreenBrightness:(id)arg1;
- (void)setScreenBrightness:(id)arg1;
- (void)scanQRCode:(id)arg1;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)savePhoto:(id)arg1;
- (void)h5PageFinishLoading:(id)arg1;
- (void)ct_imagePickerDidFailedWithUnAuthorized:(id)arg1;
- (void)ct_imagePickerDidCancelPick:(id)arg1;
- (void)ct_imagePicker:(id)arg1 didFinishedPickScaledImages:(id)arg2;
- (void)choosePhoto:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)downloadDataWithURLString:(id)arg1 data:(id)arg2;
- (void)downloadDataWithURLString:(id)arg1 error:(id)arg2;
- (void)checkHijack:(id)arg1;
- (void)openAdvPage:(id)arg1;
- (void)downloadData:(id)arg1;
- (void)callSystemShare:(id)arg1;
- (void)readCopiedStringFromClipboard:(id)arg1;
- (void)copyToClipboard:(id)arg1;
- (void)refreshNativePage:(id)arg1;
- (void)h5Log:(id)arg1;
- (void)showNewestIntroduction:(id)arg1;
- (_Bool)isAppInstalledWithSchema:(id)arg1;
- (void)checkAppsInstallStatus:(id)arg1;
- (void)checkAppInstallStatus:(id)arg1;
- (void)checkNetworkStatus:(id)arg1;
- (void)addWeixinFriend:(id)arg1;
- (void)recommendAppToFriends:(id)arg1;
- (void)checkUpdate:(id)arg1;
- (void)openOtherApp:(id)arg1;
- (void)crossPackageJumpUrl:(id)arg1;
- (void)openUrl:(id)arg1;
- (void)backToLast:(id)arg1;
- (void)backToHome:(id)arg1;
- (void)callPhone:(id)arg1;
- (void)logEvent:(id)arg1;
- (void)clear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

