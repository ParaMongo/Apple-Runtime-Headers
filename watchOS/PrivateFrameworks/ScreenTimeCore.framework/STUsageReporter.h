//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/NSFetchedResultsControllerDelegate-Protocol.h>

@class NSArray, NSDate, NSDateInterval, NSFetchedResultsController, NSNumber, NSSet, NSString;

@interface STUsageReporter : NSObject <NSFetchedResultsControllerDelegate>
{
    _Bool _includeTotalUsageDetailItem;
    NSDateInterval *_dateInterval;
    NSNumber *_userDSID;
    NSFetchedResultsController *_fetchedResultsController;
    NSFetchedResultsController *_installedAppsController;
    NSSet *_installedBundleIdentifiers;
}

+ (id)keyPathsForValuesAffectingNotifications;
- (void).cxx_destruct;
@property(copy) NSSet *installedBundleIdentifiers; // @synthesize installedBundleIdentifiers=_installedBundleIdentifiers;
@property(retain, nonatomic) NSFetchedResultsController *installedAppsController; // @synthesize installedAppsController=_installedAppsController;
@property(readonly) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(readonly, copy) NSNumber *userDSID; // @synthesize userDSID=_userDSID;
@property(readonly, copy) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property _Bool includeTotalUsageDetailItem; // @synthesize includeTotalUsageDetailItem=_includeTotalUsageDetailItem;
- (void)_updateInstalledBundleIdentifiers;
- (void)controllerDidChangeContent:(id)arg1;
- (void)_enumerateUsageBlocksWithUnitGranularity:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (id)notificationRatiosForApplication:(id)arg1 perCalendarUnit:(unsigned int)arg2;
- (id)notificationsPerCalendarUnit:(unsigned int)arg1;
- (id)_firstPickupFromUsageBlocks:(id)arg1;
- (id)firstPickupOfIntervalWithMostPickups:(unsigned int *)arg1 perCalendarUnit:(unsigned int)arg2;
@property(readonly, copy) NSDate *firstPickup;
- (id)pickupRatiosForApplication:(id)arg1 perCalendarUnit:(unsigned int)arg2;
- (id)pickupsPerCalendarUnit:(unsigned int)arg1;
- (id)ratiosForWebDomain:(id)arg1 perCalendarUnit:(unsigned int)arg2;
- (id)ratiosForApplication:(id)arg1 perCalendarUnit:(unsigned int)arg2;
- (id)_ratiosForCategory:(id)arg1 perCalendarUnit:(unsigned int)arg2 useTotalScreenTime:(_Bool)arg3;
- (id)ratiosForCategory:(id)arg1 perCalendarUnit:(unsigned int)arg2;
- (id)categoryRatiosPerCalendarUnit:(unsigned int)arg1 numberOfCategories:(unsigned int)arg2;
- (id)screenTimeUsagePerCalendarUnit:(unsigned int)arg1;
@property(readonly, copy) NSArray *pickups;
@property(readonly, copy) NSArray *notifications;
@property(readonly, copy) NSArray *applicationAndWebUsage;
- (id)_categoryUsageWithoutAllUsageItem;
@property(readonly, copy) NSArray *categoryUsage;
@property(readonly) int totalNotifications;
@property(readonly) int totalPickups;
@property(readonly) double totalScreenTime;
- (_Bool)generateReport:(id *)arg1;
- (id)initWithUsage:(id)arg1 dateInterval:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

