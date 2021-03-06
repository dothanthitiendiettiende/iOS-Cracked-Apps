//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMapLocationNetworkManager, AMapLocationUploadFileManager, AMapLocationUploadInfo, NSDate, NSTimer;

@interface AMapLocationUploadManager : NSObject
{
    AMapLocationNetworkManager *_networkManager;
    long long _uploadTimeout;
    AMapLocationUploadInfo *_lastLocaitonInfo;
    AMapLocationUploadInfo *_newLocationInfo;
    _Bool _isUploading;
    _Bool _isAllowLocationUpload;
    _Bool _isAllowRealTimeUpload;
    AMapLocationUploadFileManager *_fileManager;
    NSDate *_lastSwitcherRequestDate;
    long long _uploadSwitcherInterval;
    long long _realTimeInterval;
    NSTimer *_currentTimer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *currentTimer; // @synthesize currentTimer=_currentTimer;
@property(nonatomic) long long realTimeInterval; // @synthesize realTimeInterval=_realTimeInterval;
@property(nonatomic) long long uploadSwitcherInterval; // @synthesize uploadSwitcherInterval=_uploadSwitcherInterval;
@property(retain, nonatomic) NSDate *lastSwitcherRequestDate; // @synthesize lastSwitcherRequestDate=_lastSwitcherRequestDate;
@property(nonatomic) _Bool isAllowRealTimeUpload; // @synthesize isAllowRealTimeUpload=_isAllowRealTimeUpload;
@property(nonatomic) _Bool isAllowLocationUpload; // @synthesize isAllowLocationUpload=_isAllowLocationUpload;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(retain, nonatomic) AMapLocationUploadFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (void)startUploadInfoRequest:(id)arg1;
- (void)getFileToUpload;
- (void)requestUploadSwitcherStatus;
- (void)timerCallback:(id)arg1;
- (void)saveLocationUploadInfo:(id)arg1;
- (id)init;

@end

