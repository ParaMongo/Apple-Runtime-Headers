//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class AVTAvatarActionsRecordUpdate, AVTAvatarActionsViewController;
@protocol AVTAvatarRecord;

@protocol AVTAvatarActionsViewControllerDelegate <NSObject>
- (void)avatarActionsViewControllerDidFinish:(AVTAvatarActionsViewController *)arg1;
- (AVTAvatarActionsRecordUpdate *)avatarActionsViewController:(AVTAvatarActionsViewController *)arg1 recordUpdateForDeletingRecord:(id <AVTAvatarRecord>)arg2;

@optional
- (void)avatarActionsViewController:(AVTAvatarActionsViewController *)arg1 didPerformAction:(long long)arg2 withAvatarRecord:(id <AVTAvatarRecord>)arg3;
@end

