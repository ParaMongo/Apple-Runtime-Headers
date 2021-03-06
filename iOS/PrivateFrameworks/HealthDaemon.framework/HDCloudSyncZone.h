//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKShare, HDCloudSyncDataUploadRequestRecord, HDCloudSyncMasterRecord, HDCloudSyncRepository, HDCloudSyncStore, HDCloudSyncStoreRecord, HDCloudSyncZoneIdentifier, NSArray, NSMutableArray, NSUUID;

@interface HDCloudSyncZone : NSObject
{
    NSMutableArray *_sequenceRecords;
    NSMutableArray *_records;
    _Bool _hasFutureSchemaRecord;
    _Bool _validatedForSharing;
    HDCloudSyncRepository *_repository;
    HDCloudSyncZoneIdentifier *_zoneIdentifier;
    long long _zoneType;
    HDCloudSyncStoreRecord *_storeRecord;
    HDCloudSyncMasterRecord *_masterRecord;
    HDCloudSyncStore *_store;
    long long _purpose;
    CKShare *_zoneShare;
    HDCloudSyncDataUploadRequestRecord *_dataUploadRequestRecord;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HDCloudSyncDataUploadRequestRecord *dataUploadRequestRecord; // @synthesize dataUploadRequestRecord=_dataUploadRequestRecord;
@property(nonatomic) _Bool validatedForSharing; // @synthesize validatedForSharing=_validatedForSharing;
@property(retain, nonatomic) CKShare *zoneShare; // @synthesize zoneShare=_zoneShare;
@property(nonatomic) long long purpose; // @synthesize purpose=_purpose;
@property(retain, nonatomic) HDCloudSyncStore *store; // @synthesize store=_store;
@property(nonatomic) _Bool hasFutureSchemaRecord; // @synthesize hasFutureSchemaRecord=_hasFutureSchemaRecord;
@property(readonly, nonatomic) HDCloudSyncMasterRecord *masterRecord; // @synthesize masterRecord=_masterRecord;
@property(readonly, nonatomic) HDCloudSyncStoreRecord *storeRecord; // @synthesize storeRecord=_storeRecord;
@property(readonly, nonatomic) long long zoneType; // @synthesize zoneType=_zoneType;
@property(readonly, copy, nonatomic) HDCloudSyncZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(readonly, nonatomic) __weak HDCloudSyncRepository *repository; // @synthesize repository=_repository;
- (id)description;
- (_Bool)_addSubscriptionRecord:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) long long recordCount;
@property(readonly, copy, nonatomic) NSArray *recordNames;
- (_Bool)addRecord:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasOrphanedSequenceRecords;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, copy, nonatomic) NSUUID *storeIdentifier;
- (id)initForZoneIdentifier:(id)arg1 repository:(id)arg2 type:(long long)arg3;

@end

