//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSArray, NSString;

@interface AliDetailProductSizeTableColumnModel : AliDetailComponentModel
{
    unsigned long long *_maxLength;
    NSString *_tip;
    NSString *_title;
    NSArray *_rowData;
}

@property(retain, nonatomic) NSArray *rowData; // @synthesize rowData=_rowData;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(nonatomic) unsigned long long *maxLength; // @synthesize maxLength=_maxLength;
- (void).cxx_destruct;

@end
