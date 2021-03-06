//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface SpriteFileInfo : NSObject
{
    _Bool bundleRes;
    NSString *fullFileName;
    NSString *relativeFileName;
    NSString *relativeFileNoExtension;
    NSData *data;
}

@property(nonatomic) _Bool bundleRes; // @synthesize bundleRes;
@property(retain, nonatomic) NSData *data; // @synthesize data;
@property(retain, nonatomic) NSString *relativeFileNoExtension; // @synthesize relativeFileNoExtension;
@property(retain, nonatomic) NSString *relativeFileName; // @synthesize relativeFileName;
@property(retain, nonatomic) NSString *fullFileName; // @synthesize fullFileName;
- (id)description;
- (void)dealloc;
- (void)reloadData;
- (id)initAndNoLoadDataWithFullFileName:(id)arg1;
- (id)initWithFullFileName:(id)arg1;

@end

