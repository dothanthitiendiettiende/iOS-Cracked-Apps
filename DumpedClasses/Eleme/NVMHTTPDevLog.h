//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMDevLog.h"

@class NSError, NSNumber, NSString;

@interface NVMHTTPDevLog : NVMDevLog
{
    NSString *_URLString;
    NSString *_method;
    NSNumber *_statusCode;
    NSNumber *_time;
    NSNumber *_responseLength;
    NSString *_body;
    NSError *_error;
    NSString *_serverIP;
}

+ (id)HTTPDevLogWithURLString:(id)arg1 method:(id)arg2 statusCode:(id)arg3 timing:(id)arg4 size:(id)arg5 body:(id)arg6 error:(id)arg7 serverIP:(id)arg8 requestID:(id)arg9;
@property(copy, nonatomic) NSString *serverIP; // @synthesize serverIP=_serverIP;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSNumber *responseLength; // @synthesize responseLength=_responseLength;
@property(retain, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(retain, nonatomic) NSNumber *statusCode; // @synthesize statusCode=_statusCode;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
- (void).cxx_destruct;
- (id)childDetailLog;
- (id)init;

@end
