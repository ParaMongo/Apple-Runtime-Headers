//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGQuickResponsesCategoryScore : NSObject
{
    unsigned long long _modelCount;
    double _average;
    double _maximum;
}

@property(readonly, nonatomic) double maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) double average; // @synthesize average=_average;
- (void)addScore:(double)arg1;
- (id)init;

@end

