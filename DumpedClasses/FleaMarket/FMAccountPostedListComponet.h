//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMGeneralPageTableComponent.h"

@class FMPostedItemHeaderCellComponent;

@interface FMAccountPostedListComponet : FMGeneralPageTableComponent
{
    FMPostedItemHeaderCellComponent *_headerComponent;
}

@property(nonatomic) __weak FMPostedItemHeaderCellComponent *headerComponent; // @synthesize headerComponent=_headerComponent;
- (void).cxx_destruct;
- (void)requestSuccessHandle:(id)arg1;
- (id)getParameters;
- (id)init;
- (_Bool)isNeedLogin;
- (double)cacheTime;
- (Class)returnClass;
- (id)mtopApiVersion;
- (id)mtopApi;

@end
