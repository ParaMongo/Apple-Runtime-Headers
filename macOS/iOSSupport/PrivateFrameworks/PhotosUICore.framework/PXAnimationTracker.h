//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXAnimationTracker : NSObject
{
}

+ (void)_transitionAnimationOccurred:(long long)arg1 fromOrigin:(long long)arg2 transitionObject:(id)arg3 isBegin:(BOOL)arg4;
+ (void)transitionAnimationDidEnd:(long long)arg1 fromOrigin:(long long)arg2 transitionObject:(id)arg3;
+ (void)transitionAnimationDidBegin:(long long)arg1 fromOrigin:(long long)arg2 transitionObject:(id)arg3;
+ (void)_transitionPreparationOccurred:(long long)arg1 fromOrigin:(long long)arg2 transitionObject:(id)arg3 isBegin:(BOOL)arg4;
+ (void)transitionPreparationDidBegin:(long long)arg1 fromOrigin:(long long)arg2 transitionObject:(id)arg3;
+ (void)_scrollAnimationOccurred:(long long)arg1 isBegin:(BOOL)arg2;
+ (void)scrollAnimationDidEnd:(long long)arg1;
+ (void)scrollAnimationDidBegin:(long long)arg1;

@end

