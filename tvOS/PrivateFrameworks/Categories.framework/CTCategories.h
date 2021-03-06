//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CTCategories : NSObject
{
    NSString *_indexVersionId;
}

+ (id)systemHiddenBundleIdentifiers;
+ (id)systemUnblockableBundleIdentifiers;
+ (id)systemBlockableBundleIdentifiers;
+ (long long)currentIOSDevice;
+ (id)systemHiddenBundleIdentifiersForDeviceFamily:(long long)arg1;
+ (id)systemUnblockableBundleIdentifiersForDeviceFamily:(long long)arg1;
+ (id)systemBlockableBundleIdentifiersForDeviceFamily:(long long)arg1;
+ (id)sharedCategories;
+ (void)initialize;
- (void).cxx_destruct;
- (void)unCategorizedDomainsFromDomains:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)categoriesForDomainURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)categoriesForDomainNames:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)categoryForDomainURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)categoryForDomainName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)categoriesForBundleIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)categoriesForBundleIDs:(id)arg1 platform:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)categoryForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)categoryForBundleID:(id)arg1 platform:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, copy) NSArray *availableCategoryIDs;
- (void)_emptySharedCache:(id)arg1;
- (void)dealloc;
- (id)init;

@end

