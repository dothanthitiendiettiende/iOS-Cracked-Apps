//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSArray<TTRecommendModel>;

@interface TTPersonalHomeRecommendFollowDataResponseModel : TTResponseModel
{
    NSArray<TTRecommendModel> *_recommend_users;
}

@property(retain, nonatomic) NSArray<TTRecommendModel> *recommend_users; // @synthesize recommend_users=_recommend_users;
- (void).cxx_destruct;

@end

