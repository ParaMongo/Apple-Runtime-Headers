//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class NSNumber, _SBFKeyWindowStack;

@interface SBFWindow : UIWindow
{
    _SBFKeyWindowStack *_keyWindowStack;
    NSNumber *_isHiddenOverride;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setKeyWindowStack:) _SBFKeyWindowStack *_keyWindowStack; // @synthesize _keyWindowStack;
- (void)_resignKeyFromKeyWindowStack;
- (void)_makeKeyFromKeyWindowStack;
- (_Bool)_isEffectivelyHiddenForKeyWindowStack;
- (void)setHidden:(_Bool)arg1;
- (void)makeKeyWindow;
- (_Bool)_canBecomeKeyWindow;
- (void)resignAsKeyWindow;
- (void)dealloc;

@end

