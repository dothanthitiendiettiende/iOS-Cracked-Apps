//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPFeedShareSourceBaseView.h"

@class QYPPFeedFundView;

@interface QYPPFeedShareSourceFundView : QYPPFeedShareSourceBaseView
{
    QYPPFeedFundView *_fundView;
    CDUnknownBlockType _viewClick;
}

@property(copy, nonatomic) CDUnknownBlockType viewClick; // @synthesize viewClick=_viewClick;
@property(retain, nonatomic) QYPPFeedFundView *fundView; // @synthesize fundView=_fundView;
- (void).cxx_destruct;
- (void)virtualLayoutElements:(id)arg1;
- (void)virtualAssignElements:(id)arg1;
- (void)virtualResetElements;
- (void)virtualCreateElements;
- (void)setClickEvent:(CDUnknownBlockType)arg1;

@end

