//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QMSHTTPRequestOperation;

@interface QMSSearchOperation : NSObject
{
    QMSHTTPRequestOperation *_httpRequestOperation;
}

@property(retain, nonatomic) QMSHTTPRequestOperation *httpRequestOperation; // @synthesize httpRequestOperation=_httpRequestOperation;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (id)initWithHttpRequestOperation:(id)arg1;

@end
