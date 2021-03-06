//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class CKRecordID, HMDCloudGroupChange, HMDCloudZone, NSArray, NSUUID;

@interface HMDCloudZoneChange : HMFObject
{
    _Bool _temporaryCache;
    NSUUID *_identifier;
    HMDCloudZone *_cloudZone;
    HMDCloudGroupChange *_rootGroupChange;
}

+ (id)shortDescription;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDCloudGroupChange *rootGroupChange; // @synthesize rootGroupChange=_rootGroupChange;
@property(nonatomic) __weak HMDCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic, getter=isTemporaryCache) _Bool temporaryCache; // @synthesize temporaryCache=_temporaryCache;
@property(readonly, nonatomic) NSArray *objectChanges;
- (id)changeWithRecordName:(id)arg1;
- (id)changeWithObjectID:(id)arg1;
- (void)flushAllChangesToCache;
- (void)setDeleteAsProcessedWithRecordID:(id)arg1;
- (void)resetRecordWithRecordID:(id)arg1;
- (void)setSaveAsProcessedWithRecord:(id)arg1;
- (void)fetchBatchToUpload:(CDUnknownBlockType)arg1;
- (_Bool)moreChangesToProcess;
- (void)setAllChangedAsProcessed;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(CDUnknownBlockType)arg1;
- (void)cachedCloudRecordWithObjectID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)cachedCloudRecordWithObjectID:(id)arg1;
- (_Bool)doesRecordExistInCacheWithObjectID:(id)arg1;
- (_Bool)doesRecordExistWithObjectID:(id)arg1;
@property(readonly, nonatomic) _Bool hasValidChanges;
- (void)removeChangeWithObjectID:(id)arg1;
- (void)addChangeWithDeletedRecordID:(id)arg1;
- (void)addChangeWithRecord:(id)arg1;
- (void)addChangeWithObjectChange:(id)arg1;
@property(readonly, nonatomic) NSArray *processedTransactionStoreRowIDs;
@property(readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property(readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
@property(readonly, nonatomic) _Bool controllerIdentifierChanged;
@property(readonly, nonatomic) _Bool encryptionFailed;
@property(readonly, nonatomic) _Bool decryptionFailed;
- (id)description;
- (id)shortDescription;
- (id)initWithZone:(id)arg1 temporaryCache:(_Bool)arg2;
- (id)init;

@end

