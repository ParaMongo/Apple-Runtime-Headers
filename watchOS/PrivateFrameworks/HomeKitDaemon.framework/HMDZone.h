//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDHome, HMFMessageDispatcher, NSMutableArray, NSMutableDictionary, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDZone : HMFObject <HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol>
{
    NSString *_name;
    NSUUID *_uuid;
    NSMutableDictionary *_currentRooms;
    NSMutableArray *_roomUUIDs;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHome *_home;
    HMFMessageDispatcher *_msgDispatcher;
}

+ (_Bool)hasMessageReceiverChildren;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableArray *roomUUIDs; // @synthesize roomUUIDs=_roomUUIDs;
@property(retain, nonatomic) NSMutableDictionary *currentRooms; // @synthesize currentRooms=_currentRooms;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)backingStoreObjects:(int)arg1;
- (id)modelObjectWithChangeType:(unsigned int)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)updateZoneWithModel:(id)arg1 message:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)removeRoom:(id)arg1;
- (id)_handleSetRoomsZoneTransaction:(id)arg1 error:(id *)arg2;
- (id)_handleRenameZoneTransaction:(id)arg1 error:(id *)arg2;
- (void)_handleRename:(id)arg1;
- (void)_handleRemoveRoom:(id)arg1;
- (id)_checkForAddValidity:(id)arg1 room:(id *)arg2;
- (void)_handleAddRoom:(id)arg1;
- (void)_registerForMessages;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dumpState;
- (id)roomWithUUID:(id)arg1;
- (id)roomWithName:(id)arg1;
- (id)rooms;
- (void)configure:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 queue:(id)arg4;
- (id)assistantObject;
- (id)urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

