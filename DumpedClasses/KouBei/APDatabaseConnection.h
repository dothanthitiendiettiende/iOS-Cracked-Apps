//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APDatabaseStatement-Protocol.h"

@class NSString, RVFMDatabase;

@interface APDatabaseConnection : NSObject <APDatabaseStatement>
{
    RVFMDatabase *_db;
    id _parallelInfo;
}

@property __weak id parallelInfo; // @synthesize parallelInfo=_parallelInfo;
- (void).cxx_destruct;
- (struct RVFMResultSet *)executeQuery:(id)arg1 withParameterDictionary:(id)arg2;
- (struct RVFMResultSet *)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2;
- (struct RVFMResultSet *)executeQueryWithFormat:(id)arg1;
- (struct RVFMResultSet *)executeQuery:(id)arg1;
- (_Bool)executeUpdate:(id)arg1 withParameterDictionary:(id)arg2;
- (_Bool)executeUpdate:(id)arg1 withArgumentsInArray:(id)arg2;
- (_Bool)executeUpdateWithFormat:(id)arg1;
- (_Bool)executeUpdate:(id)arg1;
- (_Bool)inTransaction;
- (_Bool)beginDeferredTransaction;
- (_Bool)beginTransaction;
- (_Bool)commit;
- (_Bool)rollback;
- (struct sqlite3 *)sqliteHandle;
- (int)changes;
- (long long)lastInsertRowId;
- (id)lastError;
- (_Bool)hadError;
- (int)lastSystemErrorCode;
- (int)lastExtendedErrorCode;
- (int)lastErrorCode;
- (id)databasePath;
- (_Bool)goodConnection;
- (_Bool)close;
- (_Bool)open;
- (id)initWithPath:(id)arg1 shouldCacheStatements:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

