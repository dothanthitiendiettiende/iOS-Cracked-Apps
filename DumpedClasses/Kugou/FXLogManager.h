//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FXLoger, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface FXLogManager : NSObject
{
    NSObject<OS_dispatch_queue> *fxSaveQueue;
    NSObject<OS_dispatch_queue> *fxLogQueue;
    int uploadTimes;
    FXLoger *fxlogger;
    NSMutableArray *usersIdArray;
    NSMutableDictionary *logZipDic;
    _Bool _isOpenFXLogMode;
    _Bool _hadCheckOpenFXLogMode;
    _Bool _isCheckOpenFXLogMode;
    _Bool _hadRegisterLog;
    _Bool _isUploading;
    NSString *_fxLogFilePath;
}

+ (void)FXLogSave:(id)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSString *fxLogFilePath; // @synthesize fxLogFilePath=_fxLogFilePath;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(nonatomic) _Bool hadRegisterLog; // @synthesize hadRegisterLog=_hadRegisterLog;
@property(nonatomic) _Bool isCheckOpenFXLogMode; // @synthesize isCheckOpenFXLogMode=_isCheckOpenFXLogMode;
@property(nonatomic) _Bool hadCheckOpenFXLogMode; // @synthesize hadCheckOpenFXLogMode=_hadCheckOpenFXLogMode;
@property(nonatomic) _Bool isOpenFXLogMode; // @synthesize isOpenFXLogMode=_isOpenFXLogMode;
- (void).cxx_destruct;
- (void)dealloc;
- (void)kgLogout;
- (void)kgLogin;
- (void)uploadFileWithFilePath:(id)arg1 withMD5FileName:(id)arg2 withPosition:(long long)arg3 withKugouId:(unsigned long long)arg4 withSuccessBlock:(CDUnknownBlockType)arg5 withFailBlock:(CDUnknownBlockType)arg6;
- (void)startUploadFileWithFilePath:(id)arg1 withMd5FileName:(id)arg2 withPosition:(long long)arg3 withKugouId:(unsigned long long)arg4;
- (void)checkFileUploadPositionWithFilePath:(id)arg1 withMD5FileName:(id)arg2 withKugouId:(long long)arg3 withSuccessBlock:(CDUnknownBlockType)arg4 withFailBlock:(CDUnknownBlockType)arg5;
- (void)checkUploadSwitchStateWithKugouId:(long long)arg1 withSuccessBlock:(CDUnknownBlockType)arg2 withFailBlock:(CDUnknownBlockType)arg3;
- (void)uploadFileWithKugouId:(long long)arg1;
- (void)deleteFileWithPathArray:(id)arg1;
- (void)uploadFile;
- (void)startUploadFile;
- (_Bool)checkUploadFileNetWorkWithOnlyWifi:(int)arg1;
- (id)getUploadZipFileDic;
- (void)zipFileWitFinishBlock:(CDUnknownBlockType)arg1;
- (_Bool)createTmpFolder;
- (_Bool)createRootFolder;
- (void)getFXLogModeSwitchState;
- (void)closeFXLogMode;
- (void)openFXLogMode;
- (void)writeLogToFileWithlevel:(int)arg1 flag:(int)arg2 context:(int)arg3 file:(const char *)arg4 function:(const char *)arg5 line:(int)arg6 format:(id)arg7;
- (void)FXLogWriteToFile:(id)arg1;
- (void)registerLog;
- (id)init;

@end

