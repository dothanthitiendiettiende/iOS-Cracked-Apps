//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ZXGenericGF, ZXIntArray;

@interface ZXGenericGFPoly : NSObject
{
    ZXIntArray *_coefficients;
    ZXGenericGF *_field;
}

@property(readonly, nonatomic) ZXGenericGF *field; // @synthesize field=_field;
@property(readonly, nonatomic) ZXIntArray *coefficients; // @synthesize coefficients=_coefficients;
- (void).cxx_destruct;
- (id)description;
- (id)divide:(id)arg1;
- (id)multiplyByMonomial:(int)arg1 coefficient:(int)arg2;
- (id)multiplyScalar:(int)arg1;
- (id)multiply:(id)arg1;
- (id)addOrSubtract:(id)arg1;
- (int)evaluateAt:(int)arg1;
- (int)coefficient:(int)arg1;
- (_Bool)zero;
- (int)degree;
- (id)initWithField:(id)arg1 coefficients:(id)arg2;

@end
