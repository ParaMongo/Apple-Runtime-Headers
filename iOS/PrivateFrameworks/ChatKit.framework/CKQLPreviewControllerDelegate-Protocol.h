//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/QLPreviewControllerDelegate-Protocol.h>

@class CKInvisibleInkEffectController, CKQLPreviewController, NSArray, QLPreviewController;

@protocol CKQLPreviewControllerDelegate <QLPreviewControllerDelegate>
- (void)previewControllerDidCancelDismiss:(QLPreviewController *)arg1;
- (CKInvisibleInkEffectController *)invisibleInkEffectControllerForPreviewController:(CKQLPreviewController *)arg1;

@optional
- (NSArray *)previewActionsForPreviewController:(CKQLPreviewController *)arg1;
@end

