//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary, PPMutableAggregatedItem, PPNamedEntity;

@interface _PPNamedEntityNormalization : NSObject
{
    NSMutableDictionary *countByCategory;
    NSCountedSet *countByName;
    PPMutableAggregatedItem *aggregatedRecord;
    PPNamedEntity *entity;
}

- (void).cxx_destruct;
- (id)dominantEntityName;
- (unsigned long long)dominantCategory;
- (id)initWithRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4;

@end

