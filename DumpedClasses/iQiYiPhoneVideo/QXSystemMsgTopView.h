//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface QXSystemMsgTopView : UIView
{
    CDUnknownBlockType _currentSelectedKey;
    UILabel *_currentSelectedLabel;
    UIView *_line;
}

+ (id)keys;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *currentSelectedLabel; // @synthesize currentSelectedLabel=_currentSelectedLabel;
@property(copy, nonatomic) CDUnknownBlockType currentSelectedKey; // @synthesize currentSelectedKey=_currentSelectedKey;
- (void).cxx_destruct;
- (void)labelClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

