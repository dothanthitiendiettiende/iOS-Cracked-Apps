//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTLayOutCellBaseModel.h"

@interface TTLayOutUFCellBaseModel : TTLayOutCellBaseModel
{
}

- (id)generateFollowButton;
- (double)heightForActionButtonRegionWithTop:(double)arg1;
- (double)heightForActionLabelRegionWithTop:(double)arg1;
- (double)heightForFunctionRegionWithTop:(double)arg1;
- (double)heightForCellContentWithTop:(double)arg1;
- (double)heightForBottomSeparateViewWithTop:(double)arg1;
- (double)heightForTopSeparateViewWithTop:(double)arg1;
- (void)calculateBottomLineFrame;
- (void)calculateNeedUpdateFrame;
- (void)calculateAllFrame;

@end
