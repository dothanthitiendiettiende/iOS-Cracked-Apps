//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface O2ORankTopic : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasCoverImage;
    _Bool _hasUrl;
    _Bool _hasTitle;
    NSString *_coverImage;
    NSString *_url;
    NSString *_title;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *coverImage; // @synthesize coverImage=_coverImage;
@property(readonly) _Bool hasTitle; // @synthesize hasTitle=_hasTitle;
@property(readonly) _Bool hasUrl; // @synthesize hasUrl=_hasUrl;
@property(readonly) _Bool hasCoverImage; // @synthesize hasCoverImage=_hasCoverImage;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

