//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, RTStateDepictionOnePredEl;

@interface RTStateDepcitionOneStatePred : NSObject
{
    RTStateDepictionOnePredEl *_weekly;
    RTStateDepictionOnePredEl *_daily;
    NSUUID *_stateUUID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *stateUUID; // @synthesize stateUUID=_stateUUID;
@property(retain, nonatomic) RTStateDepictionOnePredEl *daily; // @synthesize daily=_daily;
@property(retain, nonatomic) RTStateDepictionOnePredEl *weekly; // @synthesize weekly=_weekly;
- (id)init;

@end

