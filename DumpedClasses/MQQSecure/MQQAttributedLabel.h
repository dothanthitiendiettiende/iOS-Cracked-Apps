//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString;

@interface MQQAttributedLabel : UIView
{
    NSAttributedString *_attributedString;
}

@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void)drawRect:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

