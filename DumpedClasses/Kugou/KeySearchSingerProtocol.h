//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NetListProtocol.h"

@interface KeySearchSingerProtocol : NetListProtocol
{
}

+ (id)TokenThirdData:(id)arg1;
+ (id)requestThirdURL:(id)arg1;
+ (id)TokenUserData:(id)arg1;
+ (id)TokenRecommendData:(id)arg1 KeyWord:(id)arg2;
+ (id)requestRecommendURL:(int)arg1 pageSize:(int)arg2 keyword:(id)arg3;
+ (id)TokenAlbumData:(id)arg1;
+ (id)requestAlbumURL:(int)arg1 pageSize:(int)arg2 keyword:(id)arg3 needCorrection:(int)arg4;
+ (id)TokenMVData:(id)arg1;
+ (id)requestMVURL:(int)arg1 pageSize:(int)arg2 keyword:(id)arg3;
+ (id)TokenLyricData:(id)arg1;
+ (id)requestSearchLyricURL:(int)arg1 pageSize:(int)arg2 keyword:(id)arg3;
+ (id)TokenIPadData:(id)arg1;
+ (id)TokenDataForSearchSong:(id)arg1;
+ (id)TokenData:(id)arg1;
+ (id)requestURL:(int)arg1 pageSize:(int)arg2 keyword:(id)arg3 type:(int)arg4;
+ (id)requestURL:(int)arg1 pageSize:(int)arg2 keyword:(id)arg3 type:(int)arg4 tag:(int)arg5 correct:(int)arg6;
+ (id)requestURL:(int)arg1 pageSize:(int)arg2 keyword:(id)arg3 type:(int)arg4 tag:(int)arg5 correct:(int)arg6 subTabName:(id)arg7;

@end

