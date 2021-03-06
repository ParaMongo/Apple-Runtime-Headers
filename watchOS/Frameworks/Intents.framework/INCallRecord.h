//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INPerson, NSDate, NSNumber, NSString;

@interface INCallRecord : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSDate *_dateCreated;
    INPerson *_caller;
    int _callRecordType;
    NSNumber *_callDuration;
    NSNumber *_unseen;
    int _callCapability;
    NSNumber *_numberOfCalls;
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *numberOfCalls; // @synthesize numberOfCalls=_numberOfCalls;
@property(readonly, nonatomic) int callCapability; // @synthesize callCapability=_callCapability;
@property(readonly, copy, nonatomic) NSNumber *unseen; // @synthesize unseen=_unseen;
@property(readonly, copy, nonatomic) NSNumber *callDuration; // @synthesize callDuration=_callDuration;
@property(readonly, nonatomic) int callRecordType; // @synthesize callRecordType=_callRecordType;
@property(readonly, copy, nonatomic) INPerson *caller; // @synthesize caller=_caller;
@property(readonly, copy, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned int)arg1;
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 caller:(id)arg3 callRecordType:(int)arg4 callCapability:(int)arg5 callDuration:(id)arg6 unseen:(id)arg7;
- (id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 caller:(id)arg3 callRecordType:(int)arg4 callCapability:(int)arg5 callDuration:(id)arg6 unseen:(id)arg7 numberOfCalls:(id)arg8;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

