//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FxSample : NSObject
{
    struct FxSamplePriv *_priv;
}

+ (id)_requiredSamplesForSamples:(id)arg1;
- (id)evaluateWithOptions:(id)arg1;
- (id)requiredSamples;
- (BOOL)isPredetermined;
- (void)setRegionOfInterest:(id)arg1;
- (id)regionOfInterest;
- (unsigned long long)fieldOrder;
- (id)domainOfDefinition;
- (BOOL)supportsContextType:(int)arg1;
- (void)setContext:(id)arg1;
- (id)context;
- (void)setTime:(double)arg1;
- (double)time;
- (void)setStream:(id)arg1;
- (id)stream;
- (void)dealloc;
- (id)init;

@end

