//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/BSTransactionObserver-Protocol.h>

@class CSLUpdateScenesTransaction, FBScene;

@protocol CSLUpdateScenesTransactionObserver <BSTransactionObserver>

@optional
- (void)transaction:(CSLUpdateScenesTransaction *)arg1 didCommitSceneUpdate:(FBScene *)arg2;
- (void)transaction:(CSLUpdateScenesTransaction *)arg1 willCommitSceneUpdate:(FBScene *)arg2;
- (void)transaction:(CSLUpdateScenesTransaction *)arg1 willUpdateScene:(FBScene *)arg2;
- (void)transaction:(CSLUpdateScenesTransaction *)arg1 didCreateScene:(FBScene *)arg2;
@end

