//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBDecorateProfilePictureFlowHostingViewController;

@protocol FBDecorateProfilePictureFlowHostingViewControllerDelegate <NSObject>
- (void)profilePictureDidFailToUpdate:(FBDecorateProfilePictureFlowHostingViewController *)arg1;
- (void)profilePictureDidFinishUpdate:(FBDecorateProfilePictureFlowHostingViewController *)arg1;
- (void)profilePictureDidStartUpdate:(FBDecorateProfilePictureFlowHostingViewController *)arg1;
- (void)decorateProfilePictureFlowHostingViewControllerDidCancel:(FBDecorateProfilePictureFlowHostingViewController *)arg1;
- (void)decorateProfilePictureFlowHostingViewControllerDidFinish:(FBDecorateProfilePictureFlowHostingViewController *)arg1;
@end

