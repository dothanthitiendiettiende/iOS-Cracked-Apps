//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFURLSessionManager, NSMutableArray, NSOutputStream, NSURLSessionDataTask, ONEResourceFileModel;

@interface ONEResourceDownloader : NSObject
{
    CDUnknownBlockType _completeBlock;
    ONEResourceFileModel *_resourceModel;
    unsigned long long _netWorkPolicy;
    CDUnknownBlockType _validBlock;
    NSURLSessionDataTask *_downloadTask;
    AFURLSessionManager *_sessionManager;
    long long _currentFileSize;
    long long _fileTotalSize;
    NSOutputStream *_outputStream;
    NSMutableArray *_singleDownloadCompleteBlocks;
}

@property(retain, nonatomic) NSMutableArray *singleDownloadCompleteBlocks; // @synthesize singleDownloadCompleteBlocks=_singleDownloadCompleteBlocks;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(nonatomic) long long fileTotalSize; // @synthesize fileTotalSize=_fileTotalSize;
@property(nonatomic) long long currentFileSize; // @synthesize currentFileSize=_currentFileSize;
@property(retain, nonatomic) AFURLSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) NSURLSessionDataTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(copy, nonatomic) CDUnknownBlockType validBlock; // @synthesize validBlock=_validBlock;
@property(nonatomic) unsigned long long netWorkPolicy; // @synthesize netWorkPolicy=_netWorkPolicy;
@property(retain, nonatomic) ONEResourceFileModel *resourceModel; // @synthesize resourceModel=_resourceModel;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
- (void).cxx_destruct;
- (void)zipArchiveDidUnzipArchiveAtPath:(id)arg1 zipInfo:(struct unz_global_info_s)arg2 unzippedPath:(id)arg3;
- (void)unzipFileWithPath:(id)arg1;
- (void)isValidWithModelByDelegate:(id)arg1 filePath:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)handleUnValid;
- (void)didCompleteWithError:(id)arg1;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveResponse:(id)arg1;
- (void)finishDownload:(id)arg1;
- (void)eventError:(id)arg1;
- (void)handleComplete:(id)arg1;
- (void)eventDownload:(id)arg1;
- (void)startDownload;
- (void)getFileSizeWithURLString:(id)arg1;
- (void)clear;
- (_Bool)isNeedResume;
- (_Bool)isNeedCancel;
- (void)suspend;
- (void)resumeDownload;
- (id)taskIdentifier;
- (void)addSingleDownloadCompleteBlock:(CDUnknownBlockType)arg1;
- (id)initWithModel:(id)arg1 sessionManager:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)resumeDataPath;
- (id)unzipPath;
- (id)cachePath;
- (id)destinationPath;
- (id)stringAddFilePrefix:(id)arg1;
- (id)bundlePath;
- (void)moveUnZipFilesToBundlePath;
- (void)removeResumeData;
- (void)removeZipCache;
- (void)removeFailureCache;
- (_Bool)isFileUrlEqual;
- (_Bool)isFileSameNameExist;

@end
