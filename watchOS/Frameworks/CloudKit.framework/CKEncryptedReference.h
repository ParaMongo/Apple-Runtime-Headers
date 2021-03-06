//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKEncryptedData.h>

#import <CloudKit/CKRecordValue-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKReference, NSString;

@interface CKEncryptedReference : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>
{
}

- (id)_recordIDFromPRecordIdentifier:(id)arg1;
- (id)_referenceFromPReference:(id)arg1;
- (id)_pReferenceFromReference:(id)arg1;
- (id)value;
@property(readonly, nonatomic) CKReference *reference;
- (id)initWithReference:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

