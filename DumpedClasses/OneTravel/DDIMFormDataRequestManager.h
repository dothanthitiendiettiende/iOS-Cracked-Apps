//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DDIMFormDataRequestManager : NSObject
{
    CDUnknownBlockType _connectionProgress;
    CDUnknownBlockType _connectionSuccess;
    CDUnknownBlockType _connectionFail;
}

@property(copy, nonatomic) CDUnknownBlockType connectionFail; // @synthesize connectionFail=_connectionFail;
@property(copy, nonatomic) CDUnknownBlockType connectionSuccess; // @synthesize connectionSuccess=_connectionSuccess;
@property(copy, nonatomic) CDUnknownBlockType connectionProgress; // @synthesize connectionProgress=_connectionProgress;
- (void).cxx_destruct;
- (void)startDownloadAudio:(id)arg1;
- (void)startGetResourcePath:(id)arg1 parameters:(id)arg2;
- (void)startDownloadAudio:(id)arg1 parameters:(id)arg2 progress:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)startUploadAudio:(id)arg1 progress:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end
