//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCModel.h"

@class NSArray, NSString;

@interface FCUserFeed : NSObject <FCModel>
{
    NSString *_from;
    _Bool _isRequesting;
    _Bool _isEnd;
    _Bool _isSelf;
    NSString *_userId;
    id <FCModelDelegate> _delegate;
    NSArray *_feedList;
    NSString *_nextPage;
    NSString *_lastFeedId;
    NSString *_lastCreateTime;
}

@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
@property(readonly, nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(readonly, copy, nonatomic) NSString *lastCreateTime; // @synthesize lastCreateTime=_lastCreateTime;
@property(readonly, copy, nonatomic) NSString *lastFeedId; // @synthesize lastFeedId=_lastFeedId;
@property(readonly, copy, nonatomic) NSString *nextPage; // @synthesize nextPage=_nextPage;
@property(readonly, nonatomic) NSArray *feedList; // @synthesize feedList=_feedList;
@property(nonatomic) __weak id <FCModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (long long)addFeedListObjects:(id)arg1 isReplace:(_Bool)arg2;
- (void)updateWithNextItemData:(id)arg1;
- (void)fetchNext;
- (void)updateWithData:(id)arg1;
- (void)joinFetchWithModel:(id)arg1;
- (void)fetch;
- (void)deleteFeedItemAtIndex:(unsigned long long)arg1;
- (id)initWithUserId:(id)arg1 fromSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

