//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSCache;

@interface DTCoreTextFontCollection : NSObject
{
    NSArray *_fontDescriptors;
    NSCache *_fontMatchCache;
}

+ (id)availableFontsCollection;
@property(retain, nonatomic) NSCache *fontMatchCache; // @synthesize fontMatchCache=_fontMatchCache;
@property(retain, nonatomic) NSArray *fontDescriptors; // @synthesize fontDescriptors=_fontDescriptors;
- (void).cxx_destruct;
- (id)fontFamilyNames;
- (id)matchingFontDescriptorForFontDescriptor:(id)arg1;
- (id)initWithAvailableFonts;

@end
