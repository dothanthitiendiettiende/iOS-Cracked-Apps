//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol IQQServiceCenter <NSObject>
- (id <ITmpMsgSrcDBService>)tmpMsgSrcDB;
- (id <IRecentMsgDBService>)recentMsgDB;
- (id <IC2CDBService_MultiTable>)C2CMultiTableDB;
- (id <IC2CDBService>)C2CDBService;
- (id <IAppVsersionService>)AppVersionService;
- (id <GroupDBServiceInterface>)GroupDBServie;
- (id <IPluginStatisticsService>)PluginStatService;
- (id <IIMService>)IMService;
@end

