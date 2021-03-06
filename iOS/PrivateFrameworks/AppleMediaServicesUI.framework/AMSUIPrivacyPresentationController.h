//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import <AppleMediaServicesUI/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface AMSUIPrivacyPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate>
{
    UIView *_dimmingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)presentationTransitionWillBegin;
- (void)_prepareDimmingViewIfNecessary;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (_Bool)shouldRemovePresentersView;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (long long)adaptivePresentationStyle;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

