//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserActionRecord.h"

@class NSString;

@interface ImmediatelyStartAction : UserActionRecord
{
    _Bool isManual;
    NSString *_otherYY;
}

@property(copy, nonatomic) NSString *otherYY; // @synthesize otherYY=_otherYY;
@property(nonatomic) _Bool isManual; // @synthesize isManual;
- (_Bool)shouldSaveToDB;
- (_Bool)canSendOnlyWifi;
- (_Bool)canSendRightAway;
- (void)coding;

@end
