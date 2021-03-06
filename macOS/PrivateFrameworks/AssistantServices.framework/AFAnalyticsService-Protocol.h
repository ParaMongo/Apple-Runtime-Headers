//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFAnalyticsEvent, NSArray, NSString, NSUUID;

@protocol AFAnalyticsService <NSObject>
- (oneway void)logInstrumentationOfType:(NSString *)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(NSUUID *)arg3;
- (oneway void)endEventsGrouping;
- (oneway void)beginEventsGrouping;
- (oneway void)stageEvents:(NSArray *)arg1 completion:(void (^)(void))arg2;

@optional
- (oneway void)stageEvents:(NSArray *)arg1;
- (oneway void)stageEvent:(AFAnalyticsEvent *)arg1;
@end

