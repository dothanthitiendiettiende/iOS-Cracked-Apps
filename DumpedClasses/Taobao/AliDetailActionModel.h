//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary, NSString;

@interface AliDetailActionModel : TBJSONModel
{
    NSString *_ID;
    long long _eventId;
    NSString *_key;
    NSDictionary *_params;
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)initWithID:(id)arg1 key:(id)arg2 params:(id)arg3;

@end
