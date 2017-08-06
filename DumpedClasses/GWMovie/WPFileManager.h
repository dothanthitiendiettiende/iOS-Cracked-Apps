//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WPFileManager : NSObject
{
    NSString *_baseFilePath;
    NSMutableDictionary *_expireDateDictionary;
    unsigned long long _type;
}

+ (id)shareWXMovieFileInstance;
+ (id)shareTmpFileInstance;
+ (id)shareOfflineFileInstance;
+ (id)shareLibraryFileInstance;
+ (id)shareCacheFileInstance;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableDictionary *expireDateDictionary; // @synthesize expireDateDictionary=_expireDateDictionary;
@property(readonly, copy, nonatomic) NSString *baseFilePath; // @synthesize baseFilePath=_baseFilePath;
- (void).cxx_destruct;
- (void)syncExpiredTimeToUserDefaults;
- (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;
- (id)absolutePathWithPath:(id)arg1;
- (_Bool)fileVaildAtFilePath:(id)arg1;
- (_Bool)fileExistsAtFilePath:(id)arg1;
- (_Bool)fileExpiredAtFilePath:(id)arg1;
- (_Bool)cleanExpireFile;
- (void)setExpireTimeInterval:(double)arg1 forFilePath:(id)arg2;
- (id)readContentAtPath:(id)arg1;
- (id)readArrayAtPath:(id)arg1;
- (id)readDataAtPath:(id)arg1;
- (id)readDictionaryAtPath:(id)arg1;
- (id)readStringAtPath:(id)arg1;
- (id)fileNamesInParentDirectory:(id)arg1;
- (_Bool)deleteFileAtPath:(id)arg1;
- (_Bool)writeContent:(id)arg1 atPath:(id)arg2 expire:(double)arg3;
- (_Bool)writeArray:(id)arg1 atPath:(id)arg2 expire:(double)arg3;
- (_Bool)writeString:(id)arg1 atPath:(id)arg2 expire:(double)arg3;
- (_Bool)writeDictionary:(id)arg1 atPath:(id)arg2 expire:(double)arg3;
- (_Bool)writeData:(id)arg1 atPath:(id)arg2 expire:(double)arg3;
- (_Bool)writeContent:(id)arg1 atPath:(id)arg2;
- (_Bool)writeArray:(id)arg1 atPath:(id)arg2;
- (_Bool)writeDictionary:(id)arg1 atPath:(id)arg2;
- (_Bool)writeString:(id)arg1 atPath:(id)arg2;
- (_Bool)writeData:(id)arg1 atPath:(id)arg2;
- (_Bool)parentDirectoriesExistAtPath:(id)arg1;
- (_Bool)createParentDirectoriesAtPath:(id)arg1;
- (id)parseParentDirectoryAtPath:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (void)asyncCleanExpireFile:(CDUnknownBlockType)arg1;
- (void)asyncDeleteFileAtPath:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)asyncReadContentAtPath:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)asyncReadArrayAtPath:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)asyncReadDictionaryAtPath:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)asyncReadStringAtPath:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)asyncReadDataAtPath:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)asyncWriteContent:(id)arg1 atPath:(id)arg2 expire:(double)arg3 complete:(CDUnknownBlockType)arg4;
- (void)asyncWriteArray:(id)arg1 atPath:(id)arg2 expire:(double)arg3 complete:(CDUnknownBlockType)arg4;
- (void)asyncWriteString:(id)arg1 atPath:(id)arg2 expire:(double)arg3 complete:(CDUnknownBlockType)arg4;
- (void)asyncWriteDictionary:(id)arg1 atPath:(id)arg2 expire:(double)arg3 complete:(CDUnknownBlockType)arg4;
- (void)asyncWriteData:(id)arg1 atPath:(id)arg2 expire:(double)arg3 complete:(CDUnknownBlockType)arg4;
- (void)asyncWriteContent:(id)arg1 atPath:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)asyncWriteArray:(id)arg1 atPath:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)asyncWriteString:(id)arg1 atPath:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)asyncWriteDictionary:(id)arg1 atPath:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)asyncWriteData:(id)arg1 atPath:(id)arg2 complete:(CDUnknownBlockType)arg3;

@end
