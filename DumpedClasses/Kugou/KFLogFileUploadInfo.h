//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class NSString;

@interface KFLogFileUploadInfo : KTVObjectModel
{
    int _status;
    int _position;
    NSString *_msg;
}

@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) int position; // @synthesize position=_position;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;

@end
