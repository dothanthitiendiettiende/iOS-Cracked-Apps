//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMEvent.h"

@class NMPlaylist;

@interface NMPlayListEvent : NMEvent
{
    NMPlaylist *_playList;
}

@property(retain, nonatomic) NMPlaylist *playList; // @synthesize playList=_playList;
- (void).cxx_destruct;
- (id)getMainObject;
- (id)getTypeDesc;
- (_Bool)showDetail;
- (_Bool)showAuthor;
- (id)initWithDictionary:(id)arg1;

@end

