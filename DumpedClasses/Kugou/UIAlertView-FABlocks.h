//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertView.h"

@interface UIAlertView (FABlocks)
+ (id)fa_showWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 tapBlock:(CDUnknownBlockType)arg5;
+ (id)fa_showWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 tapBlock:(CDUnknownBlockType)arg6;
- (CDUnknownBlockType)shouldEnableFirstOtherButtonBlock;
- (void)setShouldEnableFirstOtherButtonBlock:(CDUnknownBlockType)arg1;
- (void)setCancelBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)cancelBlock;
- (void)setDidPresentBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)didPresentBlock;
- (void)setWillPresentBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)willPresentBlock;
- (void)setDidDismissBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)didDismissBlock;
- (void)setWillDismissBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)willDismissBlock;
- (void)setTapBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)tapBlock;
- (void)_checkAlertViewDelegate;
@end
