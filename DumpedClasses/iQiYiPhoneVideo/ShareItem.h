//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, QYBisonAlbumClick, QY_Album, QY_Tvset;

@interface ShareItem : NSObject
{
    QY_Album *_album;
    QY_Tvset *_tvset;
    NSArray *_resArray;
    _Bool _isLive;
    _Bool _isFeedInPlayer;
    _Bool _isInPlayerPaopaoTab;
    int _screenMode;
    int _feedType;
    id _sharePicture;
    NSString *_playerShareType;
    NSString *_subjectId;
    unsigned long long _liveStatus;
    NSDictionary *_feedInfo;
    QYBisonAlbumClick *_bisonAlbumClick;
    NSString *_anchorId;
    NSString *_anchorName;
    NSString *_gifPath;
    NSString *_gifUrl;
    NSString *_videoPath;
    NSString *_videoUrl;
}

@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(copy, nonatomic) NSString *gifUrl; // @synthesize gifUrl=_gifUrl;
@property(copy, nonatomic) NSString *gifPath; // @synthesize gifPath=_gifPath;
@property(nonatomic) _Bool isInPlayerPaopaoTab; // @synthesize isInPlayerPaopaoTab=_isInPlayerPaopaoTab;
@property(copy, nonatomic) NSString *anchorName; // @synthesize anchorName=_anchorName;
@property(copy, nonatomic) NSString *anchorId; // @synthesize anchorId=_anchorId;
@property(retain, nonatomic) QYBisonAlbumClick *bisonAlbumClick; // @synthesize bisonAlbumClick=_bisonAlbumClick;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(retain, nonatomic) NSDictionary *feedInfo; // @synthesize feedInfo=_feedInfo;
@property(nonatomic) _Bool isFeedInPlayer; // @synthesize isFeedInPlayer=_isFeedInPlayer;
@property(nonatomic) int screenMode; // @synthesize screenMode=_screenMode;
@property(nonatomic) unsigned long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(copy, nonatomic) NSString *subjectId; // @synthesize subjectId=_subjectId;
@property(retain, nonatomic) NSArray *resArray; // @synthesize resArray=_resArray;
@property(retain, nonatomic) NSString *playerShareType; // @synthesize playerShareType=_playerShareType;
@property(retain, nonatomic) id sharePicture; // @synthesize sharePicture=_sharePicture;
@property(retain, nonatomic) QY_Tvset *tvset; // @synthesize tvset=_tvset;
@property(retain, nonatomic) QY_Album *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (id)init;

@end

