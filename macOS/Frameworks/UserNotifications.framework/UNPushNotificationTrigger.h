//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotifications/UNNotificationTrigger.h>

@interface UNPushNotificationTrigger : UNNotificationTrigger
{
    BOOL _isContentAvailable;
    BOOL _isMutableContent;
}

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithContentAvailable:(BOOL)arg1 mutableContent:(BOOL)arg2;
@property(readonly) BOOL isMutableContent; // @synthesize isMutableContent=_isMutableContent;
@property(readonly) BOOL isContentAvailable; // @synthesize isContentAvailable=_isContentAvailable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithContentAvailable:(BOOL)arg1 mutableContent:(BOOL)arg2;

@end

