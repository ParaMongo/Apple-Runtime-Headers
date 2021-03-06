//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/MKOfflineModeViewController-Protocol.h>
#import <MapKit/NSGestureRecognizerDelegate-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, MKPlaceSectionRowView, NSMutableArray, NSString;
@protocol MKPlaceActionManagerProtocol, _MKPlaceItem;

__attribute__((visibility("hidden")))
@interface MKPlaceInfoViewController : MKPlaceSectionViewController <MKOfflineModeViewController, NSGestureRecognizerDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    NSMutableArray *_rows;
    MKPlaceSectionRowView *_selectedRow;
    BOOL _offlineMode;
    BOOL _bottomHairlineHidden;
    MKMapItem *_mapItem;
    id <MKPlaceActionManagerProtocol> _actionDelegate;
    id <_MKPlaceItem> _placeItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_MKPlaceItem> placeItem; // @synthesize placeItem=_placeItem;
@property(nonatomic) __weak id <MKPlaceActionManagerProtocol> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) BOOL bottomHairlineHidden; // @synthesize bottomHairlineHidden=_bottomHairlineHidden;
@property(nonatomic) BOOL offlineMode; // @synthesize offlineMode=_offlineMode;
- (id)infoCardChildUnactionableUIElements;
- (id)infoCardChildPossibleActions;
- (void)_launchMapsDirectionsWithSource:(id)arg1 destination:(id)arg2 directionsMode:(id)arg3;
- (void)_shareAddress:(id)arg1 fromView:(id)arg2;
- (void)_configureRow:(id)arg1 ofType:(unsigned long long)arg2 withValue:(id)arg3;
- (id)_createViewForInfoRow:(unsigned long long)arg1;
- (id)_addRowForType:(unsigned long long)arg1 withValue:(id)arg2 toViews:(id)arg3;
- (void)_addContactRow:(id)arg1 ofType:(unsigned long long)arg2 toViews:(id)arg3 defaultTitle:(id)arg4;
- (void)_updateViewsAnimated:(BOOL)arg1;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)actionTypeFromRowType:(unsigned long long)arg1;
- (BOOL)shouldShowDetails;
- (id)contact;
@property(readonly, nonatomic) BOOL hasContent;
- (void)viewDidLoad;
- (id)initWithPlaceItem:(id)arg1;
- (BOOL)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

