//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLTimer;

@interface CLTimerWeakHolder : NSObject
{
    CLTimer *_timer;
}

+ (id)holderWithTimer:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak CLTimer *timer; // @synthesize timer=_timer;
- (id)initWithTimer:(id)arg1;

@end

