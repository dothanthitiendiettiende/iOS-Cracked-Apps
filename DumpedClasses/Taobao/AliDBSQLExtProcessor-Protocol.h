//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AliDBExecResult, AliDBSQLExt, NSString;

@protocol AliDBSQLExtProcessor <NSObject>

@optional
- (id)processResult:(AliDBExecResult *)arg1;
- (AliDBSQLExt *)getSQL:(NSString *)arg1;
@end

