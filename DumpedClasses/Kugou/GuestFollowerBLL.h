//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GuestFollowerBLL : NSObject
{
    long long _sourceType;
    long long _indexPage;
    long long _total;
    long long _pageSize;
}

- (void)guestFollowerTableDicToMember:(id)arg1;
- (void)getGuestFollowerTableWithRep:(CDUnknownBlockType)arg1 exception:(CDUnknownBlockType)arg2 sourceType:(long long)arg3 hisID:(long long)arg4 IDType:(long long)arg5;
- (id)init;

@end
