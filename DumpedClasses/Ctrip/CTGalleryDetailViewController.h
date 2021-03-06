//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTGalleryFilterViewDelegate.h"
#import "CTImageCellDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIScrollViewDelegate.h"

@class CTGalleryFilterView, NSLayoutConstraint, NSMutableArray, NSString, UIActionSheet, UIButton, UICollectionView, UIImageView, UILabel, UITextView, UIView;

@interface CTGalleryDetailViewController : CTRootViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, CTGalleryFilterViewDelegate, CTImageCellDelegate, UIAlertViewDelegate, UIActionSheetDelegate>
{
    long long interfaceOrientation;
    _Bool isActionSheetShow;
    _Bool _isFirstInit;
    _Bool _isPrePageNavgationBarHidden;
    _Bool _isClickBackButton;
    UICollectionView *_collectionView;
    UIButton *_backButton;
    CTGalleryFilterView *_filterView;
    UILabel *_titleLabel;
    UILabel *_pageCount;
    UITextView *_textView;
    UIView *_captionView;
    NSLayoutConstraint *_captionViewHeight;
    UIImageView *_captionViewBg;
    NSLayoutConstraint *_textViewBottomDistance;
    NSLayoutConstraint *_titleTop;
    NSLayoutConstraint *_pageCountViewWidth;
    UIButton *_saveButon;
    NSLayoutConstraint *_saveButtonContraintRight;
    UIButton *_shareButton;
    NSLayoutConstraint *_shareButtonContraintRight;
    UIButton *_deleteButton;
    NSMutableArray *_buttonTitles;
    UIActionSheet *_actionSheet;
}

@property(nonatomic) _Bool isClickBackButton; // @synthesize isClickBackButton=_isClickBackButton;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) NSMutableArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(nonatomic) _Bool isPrePageNavgationBarHidden; // @synthesize isPrePageNavgationBarHidden=_isPrePageNavgationBarHidden;
@property(nonatomic) __weak UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) __weak NSLayoutConstraint *shareButtonContraintRight; // @synthesize shareButtonContraintRight=_shareButtonContraintRight;
@property(nonatomic) __weak UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) __weak NSLayoutConstraint *saveButtonContraintRight; // @synthesize saveButtonContraintRight=_saveButtonContraintRight;
@property(nonatomic) __weak UIButton *saveButon; // @synthesize saveButon=_saveButon;
@property(nonatomic) __weak NSLayoutConstraint *pageCountViewWidth; // @synthesize pageCountViewWidth=_pageCountViewWidth;
@property(nonatomic) __weak NSLayoutConstraint *titleTop; // @synthesize titleTop=_titleTop;
@property(nonatomic) __weak NSLayoutConstraint *textViewBottomDistance; // @synthesize textViewBottomDistance=_textViewBottomDistance;
@property(nonatomic) __weak UIImageView *captionViewBg; // @synthesize captionViewBg=_captionViewBg;
@property(nonatomic) __weak NSLayoutConstraint *captionViewHeight; // @synthesize captionViewHeight=_captionViewHeight;
@property(nonatomic) __weak UIView *captionView; // @synthesize captionView=_captionView;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak UILabel *pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isFirstInit; // @synthesize isFirstInit=_isFirstInit;
@property(retain, nonatomic) CTGalleryFilterView *filterView; // @synthesize filterView=_filterView;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)imageCellLongPressed:(id)arg1;
- (void)showAssoryViews:(_Bool)arg1;
- (void)toggle;
- (void)imageCellTapped:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)setupCaptionViewForIndex:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)galleryFilterView:(id)arg1 didSelectCategory:(id)arg2;
- (long long)numberOfItemsPerRow;
- (double)itemWidth;
- (double)itemHeight;
- (double)verticalSpace;
- (double)horizonzalSpace;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)imageSavedToPhotosAlbum:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveButtonClicked:(id)arg1;
- (void)shareButtonClicked:(id)arg1;
- (void)deleteButtonClicked:(id)arg1;
- (void)backButtonClicked:(id)arg1;
- (void)resetDataArray;
- (void)reloadFilterView;
- (void)reloadImages;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldHiddenCaptionBg:(id)arg1;
- (_Bool)shouldShowSaveButton;
- (_Bool)shouldShowDeleteButton;
- (_Bool)shouldShowShareButton;
- (void)scrollToIndex:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)businessCode;
- (void)handleRotation;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initBaseView;
- (void)viewDidLoad;
- (id)initWithImages:(id)arg1 currentCategory:(id)arg2 currentIndex:(long long)arg3 isNetImageURL:(_Bool)arg4;
- (id)initWithImages:(id)arg1 currentCategory:(id)arg2 currentIndex:(long long)arg3;
- (id)initWithImages:(id)arg1 currentIndex:(long long)arg2 isNetImageURL:(_Bool)arg3;
- (id)initWithImages:(id)arg1 currentIndex:(long long)arg2;
- (id)initWithImages:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

