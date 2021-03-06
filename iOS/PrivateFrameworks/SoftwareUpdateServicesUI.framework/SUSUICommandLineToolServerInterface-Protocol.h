//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SoftwareUpdateServicesUI/NSObject-Protocol.h>

@class NSNumber;

@protocol SUSUICommandLineToolServerInterface <NSObject>
- (void)setPasscodePolicy:(unsigned long long)arg1;
- (void)downloadDidFinish;
- (void)simulateComingFromOTAUpdate;
- (void)reboot:(_Bool)arg1;
- (void)toggleSettingsBadge:(_Bool)arg1;
- (void)showEmergencyCallUIWithOptions:(unsigned long long)arg1 result:(void (^)(_Bool, NSError *))arg2;
- (void)showAuthenticationUIWithOptions:(unsigned long long)arg1 result:(void (^)(_Bool, NSError *))arg2;
- (void)showFollowUp:(unsigned long long)arg1;
- (void)showMiniAlert:(unsigned long long)arg1 usingFakeData:(_Bool)arg2 errorCode:(NSNumber *)arg3;
@end

