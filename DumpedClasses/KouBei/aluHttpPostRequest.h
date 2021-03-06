//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IHttpPostRequest-Protocol.h"

@class NSData, NSDictionary, NSError, NSHTTPURLResponse, NSMutableData, NSString, NSURL, NSURLConnection;
@protocol IDataEnDecrypt;

@interface aluHttpPostRequest : NSObject <IHttpPostRequest>
{
    double _timeout;
    _Bool _isCancelled;
    _Bool _shouldKeepRunLoopGoing;
    CDUnknownBlockType _resultCallback;
    NSMutableData *_responseData;
    NSHTTPURLResponse *_httpResponse;
    NSError *_resultError;
    NSURL *_requestUrl;
    NSURLConnection *_urlConnection;
    NSDictionary *_originalData;
    NSData *_encodedPostData;
    id <IDataEnDecrypt> _enDecryptor;
    NSDictionary *_headerFields;
}

@property(retain, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(retain, nonatomic) id <IDataEnDecrypt> enDecryptor; // @synthesize enDecryptor=_enDecryptor;
@property(retain, nonatomic) NSData *encodedPostData; // @synthesize encodedPostData=_encodedPostData;
@property(retain, nonatomic) NSDictionary *originalData; // @synthesize originalData=_originalData;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property(retain, nonatomic) NSURL *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(retain, nonatomic) NSError *resultError; // @synthesize resultError=_resultError;
@property(retain, nonatomic) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(copy, nonatomic) CDUnknownBlockType resultCallback; // @synthesize resultCallback=_resultCallback;
- (void).cxx_destruct;
- (void)setNetworkActivityVisible:(_Bool)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)encodePostData:(id)arg1;
- (id)reqUrl;
- (_Bool)isCancelled;
- (void)cancel;
- (void)doSendRequestAsync:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)invokeCallbackOnly;
- (void)sendRequestAsync:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)setHttpHederFields:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setTimeOut:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

