//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/NSSecureCoding-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSDateComponentsFormatter, NSString;

@interface WFTimeInterval : NSObject <NSCopying, WFSerializableContent, NSSecureCoding>
{
    NSDateComponentsFormatter *_timeIntervalFormatter;
    unsigned int _hash;
    unsigned int _allowedUnits;
    int _unitsStyle;
    unsigned int _zeroFormattingBehavior;
    double _timeInterval;
}

+ (_Bool)supportsSecureCoding;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int zeroFormattingBehavior; // @synthesize zeroFormattingBehavior=_zeroFormattingBehavior;
@property(readonly, nonatomic) int unitsStyle; // @synthesize unitsStyle=_unitsStyle;
@property(readonly, nonatomic) unsigned int allowedUnits; // @synthesize allowedUnits=_allowedUnits;
@property(readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly) unsigned int hash; // @synthesize hash=_hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)wfSerializedRepresentation;
- (id)wfName;
@property(readonly, nonatomic) NSString *absoluteTimeString;
@property(readonly, nonatomic) NSDateComponentsFormatter *timeIntervalFormatter; // @synthesize timeIntervalFormatter=_timeIntervalFormatter;
- (int)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimeInterval:(double)arg1 allowedUnits:(unsigned int)arg2 unitsStyle:(int)arg3 zeroFormattingBehavior:(unsigned int)arg4;
- (id)initWithTimeInterval:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

