//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLookUI/QLSeamlessCloserDelegate-Protocol.h>

@class NSMapTable, NSString;

@interface QLSeamlessOpeningFakeCloserDelegate : NSObject <QLSeamlessCloserDelegate>
{
    NSMapTable *_mapTable;
}

+ (id)closerDelegate;
- (id)seamlessCloserTransitionImageForPreviewItem:(id)arg1 contentRect:(struct CGRect *)arg2 windowLevel:(long long *)arg3;
- (struct CGRect)seamlessCloserSourceFrameOnScreenForPreviewItem:(id)arg1;
- (id)seamlessCloserSourcePreviewViewForPreviewItem:(id)arg1;
- (id)infoForPreviewItem:(id)arg1;
- (void)registerInfo:(id)arg1 forPreviewItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

