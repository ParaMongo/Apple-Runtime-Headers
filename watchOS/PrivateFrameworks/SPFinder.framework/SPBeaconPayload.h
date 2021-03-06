//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPFinder/NSSecureCoding-Protocol.h>

@class SPAdvertisement, SPEstimatedLocation;

@interface SPBeaconPayload : NSObject <NSSecureCoding>
{
    SPAdvertisement *_advertisement;
    SPEstimatedLocation *_location;
    int _observationValue;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) int observationValue; // @synthesize observationValue=_observationValue;
@property(copy, nonatomic) SPEstimatedLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) SPAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdvertisement:(id)arg1 location:(id)arg2;

@end

