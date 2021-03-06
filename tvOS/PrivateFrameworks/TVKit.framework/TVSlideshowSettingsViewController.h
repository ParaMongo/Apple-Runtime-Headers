//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVKit/UITableViewDataSource-Protocol.h>
#import <TVKit/UITableViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, UILabel, UITableView;

@interface TVSlideshowSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    CDUnknownBlockType _completionHandler;
    NSArray *_slideshowSettings;
    NSDictionary *_slideshowThemeSettings;
    NSDictionary *_slideshowTransitionMapping;
    NSArray *_slideshowTransitionSettings;
    NSArray *_imageProxies;
    NSArray *_photoAssets;
    UITableView *_slideshowSettingsView;
    UITableView *_slideshowTransitionStyleView;
    UILabel *_slideshowLabel;
    UILabel *_transitionLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *transitionLabel; // @synthesize transitionLabel=_transitionLabel;
@property(retain, nonatomic) UILabel *slideshowLabel; // @synthesize slideshowLabel=_slideshowLabel;
@property(retain, nonatomic) UITableView *slideshowTransitionStyleView; // @synthesize slideshowTransitionStyleView=_slideshowTransitionStyleView;
@property(retain, nonatomic) UITableView *slideshowSettingsView; // @synthesize slideshowSettingsView=_slideshowSettingsView;
@property(retain, nonatomic) NSArray *photoAssets; // @synthesize photoAssets=_photoAssets;
@property(retain, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
@property(retain, nonatomic) NSArray *slideshowTransitionSettings; // @synthesize slideshowTransitionSettings=_slideshowTransitionSettings;
@property(retain, nonatomic) NSDictionary *slideshowTransitionMapping; // @synthesize slideshowTransitionMapping=_slideshowTransitionMapping;
@property(retain, nonatomic) NSDictionary *slideshowThemeSettings; // @synthesize slideshowThemeSettings=_slideshowThemeSettings;
@property(retain, nonatomic) NSArray *slideshowSettings; // @synthesize slideshowSettings=_slideshowSettings;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_initializeSlideshowSettings;
- (void)dealloc;
- (void)loadView;
- (void)refreshPhotoAssets:(id)arg1;
- (id)init;
- (id)initWithPhotoAssets:(id)arg1;
- (id)initWithImageProxies:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

