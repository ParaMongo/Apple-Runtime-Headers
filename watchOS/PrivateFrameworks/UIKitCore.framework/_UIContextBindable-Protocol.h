//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIContextDescribing-Protocol.h>

@class CAContext, CALayer, _UIContextBinder;

@protocol _UIContextBindable <_UIContextDescribing>
@property(nonatomic, setter=_setContextBinder:) __weak _UIContextBinder *_contextBinder;
@property(nonatomic, setter=_setBoundContext:) __weak CAContext *_boundContext;
- (_Bool)_isVisible;
- (float)_bindableLevel;
- (CALayer *)_bindingLayer;
@end

