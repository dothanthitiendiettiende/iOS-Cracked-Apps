//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSURLConnectionDataDelegate.h"

@class NSData, NSError, NSInputStream, NSMutableURLRequest, NSOutputStream, NSRecursiveLock, NSSet, NSString, NSThread, NSURLConnection, NSURLResponse;

@interface DTURLRequestOperation : NSOperation <NSURLConnectionDataDelegate>
{
    _Bool _networkActivityIndicatorVisible;
    _Bool _requestBodyGZip;
    int _state;
    NSMutableURLRequest *_request;
    NSURLResponse *_response;
    NSData *_responseData;
    NSString *_responseString;
    NSError *_error;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSSet *_runLoopModes;
    long long _totalBytesRead;
    NSRecursiveLock *_lock;
    NSThread *_runningThread;
    NSThread *_createdThread;
    NSURLConnection *_connection;
    id _responseObject;
}

+ (_Bool)stateTransitionIsValid:(int)arg1 toState:(int)arg2 cancelled:(_Bool)arg3;
+ (id)keyPathFromState:(int)arg1;
+ (id)URLRequestThread;
+ (void)URLRequestThreadProc:(id)arg1;
+ (id)defaultOperationQueue;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) id responseObject; // @synthesize responseObject=_responseObject;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool requestBodyGZip; // @synthesize requestBodyGZip=_requestBodyGZip;
@property(nonatomic) _Bool networkActivityIndicatorVisible; // @synthesize networkActivityIndicatorVisible=_networkActivityIndicatorVisible;
@property(retain, nonatomic) NSThread *createdThread; // @synthesize createdThread=_createdThread;
@property(retain, nonatomic) NSThread *runningThread; // @synthesize runningThread=_runningThread;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(retain, nonatomic) NSSet *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancelConnection;
- (void)finish;
- (void)startConnection;
- (void)cancel;
- (void)start;
- (_Bool)isReady;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (void)didFinish;
- (void)didStart;
- (void)dealloc;
- (void)commonInit;
- (id)initWithRequest:(id)arg1 outputStream:(id)arg2;
- (id)initWithRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
