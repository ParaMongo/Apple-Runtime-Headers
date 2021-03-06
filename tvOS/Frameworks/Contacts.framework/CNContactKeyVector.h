//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNKeyDescriptor_Private-Protocol.h>
#import <Contacts/NSMutableCopying-Protocol.h>

@class NSString;

@interface CNContactKeyVector : NSObject <NSMutableCopying, CNKeyDescriptor_Private>
{
    long long _bitBuckets[1];
}

+ (id)keyVectorWithKeys:(id)arg1;
+ (id)keyVectorWithKey:(id)arg1;
+ (id)keyVectorWithAllKeys;
+ (id)keyVector;
+ (id)freezeIfClassIsImmutable:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSString *description;
- (id)_cn_ignorableKeys;
- (id)_cn_optionalKeys;
- (id)_cn_requiredKeys;
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;
- (_Bool)intersectsKeyVector:(id)arg1;
- (_Bool)isSubsetOfKeyVector:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToKeyVector:(id)arg1;
- (long long *)_bitBuckets;
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)containsAllKeys;
- (_Bool)containsKey:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAllKeys;
- (id)init;
- (void)_checkStorageSize;
- (id)initWithKeys:(id)arg1;
- (id)keyVectorByRemovingKeysFromKeyVector:(id)arg1;
- (id)keyVectorByAddingKeysFromKeyVector:(id)arg1;
- (id)keyVectorByAddingKeys:(id)arg1;
- (id)keyVectorByAddingKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

