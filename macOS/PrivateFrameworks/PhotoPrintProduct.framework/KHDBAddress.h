//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoPrintProduct/NSCoding-Protocol.h>
#import <PhotoPrintProduct/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface KHDBAddress : NSObject <NSCopying, NSCoding>
{
    NSNumber *_modelId;
    NSString *_databaseUuid;
}

+ (id)modelIdListForAddresses:(id)arg1;
+ (id)modelIdsForAddresses:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)modelIdAsNumber;
- (unsigned long long)modelId;
- (id)databaseUuid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithDatabaseUuid:(id)arg1 modelId:(id)arg2;

@end

