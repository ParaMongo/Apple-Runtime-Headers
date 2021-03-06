//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSaveHealthSampleIntentExport-Protocol.h>

@class HKUnit, INDateComponentsRange, NSArray, NSString;

@interface INSaveHealthSampleIntent : INIntent <INSaveHealthSampleIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setSampleMetadatas:(id)arg1;
@property(readonly, copy) NSArray *sampleMetadatas;
- (void)setUnit:(id)arg1;
@property(readonly, copy) HKUnit *unit;
- (void)setValues:(id)arg1;
@property(readonly, copy) NSArray *values;
- (void)setObjectType:(long long)arg1;
@property(readonly) long long objectType;
- (void)setRecordDate:(id)arg1;
@property(readonly, copy) INDateComponentsRange *recordDate;
- (id)initWithRecordDate:(id)arg1 objectType:(long long)arg2 values:(id)arg3 unit:(id)arg4 sampleMetadatas:(id)arg5;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

