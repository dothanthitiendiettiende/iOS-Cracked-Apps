//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UICollectionView;

@interface QLHollywoodBanabaKeyBoardView : UIView
{
    UICollectionView *_bubbleCollectionView;
}

@property(retain, nonatomic) UICollectionView *bubbleCollectionView; // @synthesize bubbleCollectionView=_bubbleCollectionView;
- (void).cxx_destruct;
- (void)banabaCollectionViewDlegate:(id)arg1 dataSource:(id)arg2;
- (id)banabaCollectionView;
- (double)heightOfCellWidth:(double)arg1;
- (double)heightOfCell;
- (double)borderSpace;
- (id)initWithFrame:(struct CGRect)arg1 withCell:(Class)arg2 forCellWithReuseIdentifier:(id)arg3;

@end
