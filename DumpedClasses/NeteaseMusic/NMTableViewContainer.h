//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMParallaxView, UITableView;

@interface NMTableViewContainer : UIView
{
    UIView *_container;
    UIView *_sectionHeaderOverlay;
    UITableView *_tableView;
    NMParallaxView *_parallaxView;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) NMParallaxView *parallaxView; // @synthesize parallaxView=_parallaxView;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)setContentInset;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithParallaxView:(id)arg1;
- (id)initWithTableView:(id)arg1;
- (void)dealloc;

@end
