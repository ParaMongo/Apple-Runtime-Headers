//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CoverSheet/MTMaterialGrouping-Protocol.h>

@class NSString;
@protocol CSAdjunctItemHosting, PLPlatter;

@interface CSAdjunctItemView : UIView <MTMaterialGrouping>
{
    long long _recipe;
    UIView<PLPlatter> *_platterView;
    _Bool _isContentHostPlatterView;
    NSString *_materialGroupNameBase;
    id <CSAdjunctItemHosting> _contentHost;
    struct CGSize _sizeToMimic;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CSAdjunctItemHosting> contentHost; // @synthesize contentHost=_contentHost;
@property(nonatomic) struct CGSize sizeToMimic; // @synthesize sizeToMimic=_sizeToMimic;
@property(copy, nonatomic) NSString *materialGroupNameBase; // @synthesize materialGroupNameBase=_materialGroupNameBase;
- (void)_setPlatterView:(id)arg1;
- (void)_updateSizeToMimic;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithRecipe:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

