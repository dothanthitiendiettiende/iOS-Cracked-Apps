//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQSharkBaseRequest.h"

@class NSArray, NSString;

@interface MQQShortcutSearchRequest : MQQSharkBaseRequest
{
    NSArray *_searchResults;
    NSString *_keyword;
}

@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
- (void)didSharkDataFinish:(const vector_aa1d262e *)arg1;
- (_Bool)getCmdId:(int *)arg1 requestData:(vector_aa1d262e *)arg2;
- (void)searchShortcutWithName:(id)arg1;
- (void)dealloc;

@end

