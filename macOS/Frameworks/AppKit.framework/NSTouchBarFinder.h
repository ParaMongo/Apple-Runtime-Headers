//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol NSTouchBarFinderObserver, NSTouchBarProviderContainer;

@interface NSTouchBarFinder : NSObject
{
    id <NSTouchBarProviderContainer> _rootProviderContainer;
    id <NSTouchBarFinderObserver> _observer;
    NSMapTable *_observationsByProvider;
    BOOL _needsUpdate;
}

- (void)_userDefinedTouchBarDidReset:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithRootProviderContainer:(id)arg1 observer:(id)arg2;

@end

