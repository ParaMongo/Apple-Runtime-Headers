//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVGridView.h>

#import <TVMLKit/TVRowHosting_Collection-Protocol.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _TVMLGridView : _TVGridView <TVRowHosting_Collection>
{
    _Bool _configureForListTemplate;
    UIView *_headerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool configureForListTemplate; // @synthesize configureForListTemplate=_configureForListTemplate;
- (_Bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (id)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets)arg2 firstItemRowIndex:(long long *)arg3;
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long *)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldBindRowsTogether;
@property(readonly) Class superclass;

@end

