//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, responseRecommendData;

@protocol QYProductListViewDelegate <NSObject>

@optional
- (void)productRequest_Buseiness_Finish:(responseRecommendData *)arg1;
- (void)pullUpWebview:(NSString *)arg1;
- (void)openVipUserLicenseView;
- (void)buyProductButNoLogined;
- (void)loadProductFinish:(NSArray *)arg1 orgineData:(NSArray *)arg2;
@end

