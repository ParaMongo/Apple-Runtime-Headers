//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UIPasteboard;
@protocol UINSActivityItemsConfigurationReading, _UIServicesMenuDataProviding;

@protocol _UIServicesMenuDataProviding
@property(readonly, nonatomic) id <UINSActivityItemsConfigurationReading> _activityItemsConfigurationForServicesMenu;
- (BOOL)_readServicesMenuDataFromPasteboard:(UIPasteboard *)arg1;
- (id <_UIServicesMenuDataProviding>)_servicesMenuProviderForReturnType:(NSString *)arg1;
@end

