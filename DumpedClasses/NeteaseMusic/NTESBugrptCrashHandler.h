//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NTESBugrptCrashUploadMeta;

@interface NTESBugrptCrashHandler : NSObject
{
    NTESBugrptCrashUploadMeta *_currentcrashUploadMeta;
    NSString *_attachLog;
    _Bool _crashHappen;
    _Bool _serverMerge;
    _Bool _mergeExp;
    _Bool _userSetMerge;
    _Bool _lastCrashed;
    _Bool _isNSException;
    _Bool _isNSExceptionFinished;
    _Bool _isSignalException;
    _Bool _isSignalFinished;
    _Bool _anrHappen;
    int _anrCount;
}

+ (id)sharedInstance;
@property(nonatomic) int anrCount; // @synthesize anrCount=_anrCount;
@property(nonatomic) _Bool anrHappen; // @synthesize anrHappen=_anrHappen;
@property(nonatomic) _Bool isSignalFinished; // @synthesize isSignalFinished=_isSignalFinished;
@property(nonatomic) _Bool isSignalException; // @synthesize isSignalException=_isSignalException;
@property(nonatomic) _Bool isNSExceptionFinished; // @synthesize isNSExceptionFinished=_isNSExceptionFinished;
@property(nonatomic) _Bool isNSException; // @synthesize isNSException=_isNSException;
@property(nonatomic) _Bool crashHappen; // @synthesize crashHappen=_crashHappen;
- (void).cxx_destruct;
- (void)persistLastCrashTime:(double)arg1;
- (double)getLastCrashTime;
- (_Bool)persistCrashToFile:(id)arg1;
- (id)generateCrashUploadMeta:(id)arg1;
- (id)saveCrashData:(id)arg1;
- (_Bool)crashHappened:(id)arg1;
- (_Bool)isCrashHappen;
- (void)uninstallNSExceptionHandler;
- (void)uninstallSignalHandler;
- (void)installHandler;
- (id)init;

@end

