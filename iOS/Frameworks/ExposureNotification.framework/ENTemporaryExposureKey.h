//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExposureNotification/CUXPCCodable-Protocol.h>

@class NSData;

@interface ENTemporaryExposureKey : NSObject <CUXPCCodable>
{
    unsigned char _transmissionRiskLevel;
    unsigned int _rollingStartNumber;
    NSData *_keyData;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned char transmissionRiskLevel; // @synthesize transmissionRiskLevel=_transmissionRiskLevel;
@property(nonatomic) unsigned int rollingStartNumber; // @synthesize rollingStartNumber=_rollingStartNumber;
@property(copy, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;

@end

