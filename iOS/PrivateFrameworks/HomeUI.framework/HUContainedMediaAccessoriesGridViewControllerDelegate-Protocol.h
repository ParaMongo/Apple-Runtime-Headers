//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFItem, HUContainedMediaAccessoriesGridViewController, UIViewController;
@protocol HUDetailsPresentationDelegateHost;

@protocol HUContainedMediaAccessoriesGridViewControllerDelegate <NSObject>

@optional
- (UIViewController<HUDetailsPresentationDelegateHost> *)detailsViewControllerForContainedMediaAccessoryGridViewController:(HUContainedMediaAccessoriesGridViewController *)arg1 item:(HFItem *)arg2;
@end

