//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray<TBHLTopBarCellModel>, NSMutableSet, NSMutableString, TBHLBaseDataResultModel;

@interface TBHLBaseData : NSObject
{
    _Bool _isBlindFlag;
    NSMutableArray<TBHLTopBarCellModel> *_columnData;
    NSMutableSet *_showFeedSet;
    TBHLBaseDataResultModel *_baseResultModel;
    NSMutableString *_originTabIds;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isBlindFlag; // @synthesize isBlindFlag=_isBlindFlag;
@property(retain, nonatomic) NSMutableString *originTabIds; // @synthesize originTabIds=_originTabIds;
@property(retain, nonatomic) TBHLBaseDataResultModel *baseResultModel; // @synthesize baseResultModel=_baseResultModel;
@property(retain, nonatomic) NSMutableSet *showFeedSet; // @synthesize showFeedSet=_showFeedSet;
@property(readonly, nonatomic) __weak NSMutableArray<TBHLTopBarCellModel> *columnData; // @synthesize columnData=_columnData;
- (void).cxx_destruct;
- (id)generateTabIdsString;
- (int)currentSelectedIndex;
- (void)selectTabBar:(id)arg1;
- (void)selectTabBarIndex:(int)arg1;
- (void)clearShowFeeds;
- (void)addShowFeed:(id)arg1;
- (id)init;

@end

