//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface ONEFPPLiveDetectViewModel : NSObject
{
    _Bool _isRecogonizeFrame;
    NSArray *_detectTypes;
}

@property(retain, nonatomic) NSArray *detectTypes; // @synthesize detectTypes=_detectTypes;
@property(nonatomic) _Bool isRecogonizeFrame; // @synthesize isRecogonizeFrame=_isRecogonizeFrame;
- (void).cxx_destruct;
- (int)detectTypeWithIndex:(long long)arg1;
- (long long)detectTypeCount;
- (_Bool)shouldMovie;
- (id)bgImageName;

@end
