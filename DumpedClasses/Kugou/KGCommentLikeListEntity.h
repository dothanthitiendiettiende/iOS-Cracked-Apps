//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface KGCommentLikeListEntity : NSObject
{
    long long _current_page;
    NSString *_childrenid;
    NSString *_tid;
    long long _likecount;
    NSMutableArray *_listArray;
}

@property(retain, nonatomic) NSMutableArray *listArray; // @synthesize listArray=_listArray;
@property(nonatomic) long long likecount; // @synthesize likecount=_likecount;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *childrenid; // @synthesize childrenid=_childrenid;
@property(nonatomic) long long current_page; // @synthesize current_page=_current_page;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end
