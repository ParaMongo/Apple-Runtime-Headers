//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKStatisticsManager : NSObject
{
}

+ (id)sharedStatisticsManager;
- (void)didUseObjectEraser;
- (void)didAddStroke:(id)arg1;
- (id)_opacityKeyForIdentifier:(id)arg1;
- (id)_thicknessKeyForIdentifier:(id)arg1;
- (double)_valueForIdentifier:(id)arg1;
- (id)_statisticsKeyWithParameters:(id)arg1;
- (void)pushValue:(double)arg1 forDistributionKey:(id)arg2;
- (void)incrementValueForKey:(id)arg1;
- (BOOL)_statisticsEnabled;

@end

