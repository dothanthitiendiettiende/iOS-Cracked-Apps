//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@interface FLEXWindow : UIWindow
{
    id <FLEXWindowEventDelegate> _eventDelegate;
}

+ (void)initialize;
@property(nonatomic) __weak id <FLEXWindowEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
- (void).cxx_destruct;
- (_Bool)canBecomeKeyWindow;
- (_Bool)shouldAffectStatusBarAppearance;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

