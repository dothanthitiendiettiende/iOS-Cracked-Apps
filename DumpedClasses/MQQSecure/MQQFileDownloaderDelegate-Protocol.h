//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MQQFileDownloader, NSDictionary, NSError;

@protocol MQQFileDownloaderDelegate <NSObject>

@optional
- (void)downloader:(MQQFileDownloader *)arg1 didFailDownloadWithItem:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)downloader:(MQQFileDownloader *)arg1 didFinishDownloadWithItem:(NSDictionary *)arg2 existed:(_Bool)arg3;
@end

