//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoWeatherKit/NWKLocationConnection.h>

@interface NWKForegroundLocationConnection : NWKLocationConnection
{
    _Bool _trackedLocationSensitive;
}

@property(nonatomic) _Bool trackedLocationSensitive; // @synthesize trackedLocationSensitive=_trackedLocationSensitive;
- (void)refreshLocalLocation;
- (void)resumeWithCompletionWithTrackedLocationSensitivity:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDelegate:(id)arg1;

@end

