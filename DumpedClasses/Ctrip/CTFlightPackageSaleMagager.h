//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTFlightPackageSaleMagager : NSObject
{
}

+ (void)initCommonPackageRecommendSwitchWithHistory:(id)arg1 packageList:(id)arg2 packageTypePartKey:(id)arg3;
+ (void)doWithPackageForceSelectWith:(_Bool)arg1 viewModel:(id)arg2 isInland:(_Bool)arg3 interBabyCount:(long long)arg4;
+ (void)doWithPackageSelectedWith:(_Bool)arg1 viewModel:(id)arg2 packageList:(id)arg3 packageOrginList:(id)arg4 needAlter:(_Bool)arg5 sureBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7 endBlock:(CDUnknownBlockType)arg8;
+ (void)addPackageModelAllRelatedModelToList:(id)arg1 OriginViewModel:(id)arg2 viewModel:(id)arg3 operationRelateType:(unsigned long long)arg4 packageViewModelList:(id)arg5;
+ (void)setPackageModelAgreeWithReleatModelList:(id)arg1 index:(unsigned long long)arg2 packageList:(id)arg3 packageOrginList:(id)arg4 needAlter:(_Bool)arg5 sureBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7 endBlock:(CDUnknownBlockType)arg8;
+ (void)setPackageModelWithReleatModelList:(id)arg1 index:(unsigned long long)arg2 packageList:(id)arg3 packageOrginList:(id)arg4 needAlter:(_Bool)arg5 sureBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7 endBlock:(CDUnknownBlockType)arg8;
+ (void)doWithPackageRelateWith:(id)arg1 opeartionType:(int)arg2 packageList:(id)arg3 packageOrginList:(id)arg4 needAlter:(_Bool)arg5 sureBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7 endBlock:(CDUnknownBlockType)arg8;

@end

