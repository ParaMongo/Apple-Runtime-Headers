//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SensorKitUI/SRAuthorizationPromptServiceInterface-Protocol.h>

@protocol SRRemoteAuthorizationPromptViewControllerDelegate;

@protocol SRRemoteAuthorizationPromptViewController <SRAuthorizationPromptServiceInterface>
@property(nonatomic) __weak id <SRRemoteAuthorizationPromptViewControllerDelegate> delegate;
- (void)invalidate;
@end

