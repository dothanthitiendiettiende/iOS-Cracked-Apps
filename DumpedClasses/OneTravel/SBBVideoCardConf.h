//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBCardConf.h"

@class NSString, NSURL;

@interface SBBVideoCardConf : SBBCardConf
{
    NSURL *_videoURL;
    NSString *_orderStatus;
}

@property(retain, nonatomic) NSString *orderStatus; // @synthesize orderStatus=_orderStatus;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void).cxx_destruct;
- (id)cardID;

@end
