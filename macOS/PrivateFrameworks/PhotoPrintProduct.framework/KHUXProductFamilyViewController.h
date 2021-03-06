//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXViewController.h>

@class KHProductFamilyItem, KHUXProductFamilyView, NSString;

@interface KHUXProductFamilyViewController : UXViewController
{
    BOOL _selected;
    BOOL _compactMode;
    KHProductFamilyItem *_familyItem;
    CDUnknownBlockType _productSubgroupSelectionHandler;
    NSString *_countryCode;
}

+ (id)newLabel;
- (void).cxx_destruct;
@property(nonatomic) BOOL compactMode; // @synthesize compactMode=_compactMode;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) CDUnknownBlockType productSubgroupSelectionHandler; // @synthesize productSubgroupSelectionHandler=_productSubgroupSelectionHandler;
@property(readonly, nonatomic) KHProductFamilyItem *familyItem; // @synthesize familyItem=_familyItem;
- (void)viewDidLoad;
- (void)loadView;
- (void)productSubgroupSelected:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) KHUXProductFamilyView *productFamilyView;
- (id)containerViewForProductSubgroups:(id)arg1 maxSubgroupCount:(unsigned long long)arg2;
- (id)initWithFamilyItem:(id)arg1;

@end

