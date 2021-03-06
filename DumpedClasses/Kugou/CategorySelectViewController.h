//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "UITextFieldDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIScrollView, UIView;

@interface CategorySelectViewController : KGViewController <UITextFieldDelegate>
{
    NSMutableArray *_keys;
    NSMutableDictionary *_classItems;
    NSString *_selectedCategory;
    UIScrollView *_labelScrollView;
    id <CategorySelectViewDelegate> _delegate;
    NSMutableDictionary *_labelDictionary;
    UIView *_labelsView;
}

@property(retain, nonatomic) UIView *labelsView; // @synthesize labelsView=_labelsView;
@property(retain, nonatomic) NSMutableDictionary *labelDictionary; // @synthesize labelDictionary=_labelDictionary;
@property(nonatomic) __weak id <CategorySelectViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIScrollView *labelScrollView; // @synthesize labelScrollView=_labelScrollView;
- (void).cxx_destruct;
- (void)onChangeTheme:(id)arg1;
- (long long)showPlayBarWay;
- (void)requestAgain;
- (void)reConnectEvent;
- (void)loadData;
- (id)createKeyView:(id)arg1 isFirstKeyView:(_Bool)arg2;
- (void)tagBtnAction:(id)arg1;
- (id)createKeyTagButtonWithTagName:(id)arg1 isAllCategoryBtn:(_Bool)arg2;
- (void)initTagViewOfKeyWithY:(double *)arg1 AndTags:(id)arg2 AndParentView:(id)arg3;
- (void)refreshTagsView;
- (void)allBtnAction;
- (void)didReceiveMemoryWarning;
- (void)registerNotifications;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithCategoryName:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

