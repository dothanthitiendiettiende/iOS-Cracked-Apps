//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WKI18NAdjustUIModel : NSObject
{
    NSDictionary *_mUIDic_En;
    NSDictionary *_mUIDic_Jp;
    NSDictionary *_mUIDic_German;
    NSDictionary *_mUIDic_Korean;
    NSDictionary *_mUIDic_French;
    NSDictionary *_mUIDic_Spanish;
}

@property(retain, nonatomic) NSDictionary *mUIDic_Spanish; // @synthesize mUIDic_Spanish=_mUIDic_Spanish;
@property(retain, nonatomic) NSDictionary *mUIDic_French; // @synthesize mUIDic_French=_mUIDic_French;
@property(retain, nonatomic) NSDictionary *mUIDic_Korean; // @synthesize mUIDic_Korean=_mUIDic_Korean;
@property(retain, nonatomic) NSDictionary *mUIDic_German; // @synthesize mUIDic_German=_mUIDic_German;
@property(retain, nonatomic) NSDictionary *mUIDic_Jp; // @synthesize mUIDic_Jp=_mUIDic_Jp;
@property(retain, nonatomic) NSDictionary *mUIDic_En; // @synthesize mUIDic_En=_mUIDic_En;
- (void).cxx_destruct;
- (struct CGRect)searchRectInDic:(id)arg1 viewnamearg:(id)arg2 objectnamearg:(id)arg3 defrectarg:(struct CGRect)arg4;
- (struct CGRect)getRect:(id)arg1 objectname:(id)arg2 defrect:(struct CGRect)arg3;

@end

