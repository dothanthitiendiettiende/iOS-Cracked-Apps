//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGThemeLabel, KGThemeLine;

@interface SelectMusicTipsCell : UITableViewCell
{
    KGThemeLabel *_songName;
    KGThemeLine *_line;
}

@property(retain, nonatomic) KGThemeLine *line; // @synthesize line=_line;
@property(retain, nonatomic) KGThemeLabel *songName; // @synthesize songName=_songName;
- (void).cxx_destruct;
- (void)setCellWithsongName:(id)arg1;
- (void)layoutSubviews;
- (void)createView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
