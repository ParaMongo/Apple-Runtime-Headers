//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFStaticItem, NSObject;
@protocol OS_dispatch_queue;

@interface HUSiriHistoryItemManager : HFItemManager
{
    NSObject<OS_dispatch_queue> *_queue;
    HFStaticItem *_deleteSiriHistoryItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFStaticItem *deleteSiriHistoryItem; // @synthesize deleteSiriHistoryItem=_deleteSiriHistoryItem;
- (id)didUpdateItemAtIndexPath:(id)arg1;
- (id)didSelectItemAtIndexPath:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 groupItem:(id)arg2;

@end

