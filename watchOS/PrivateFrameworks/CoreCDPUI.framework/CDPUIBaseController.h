//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPUI/CDPStateUIProvider-Protocol.h>

@class NSString, UIViewController;

@interface CDPUIBaseController : NSObject <CDPStateUIProvider>
{
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(_Bool)arg2 numericLength:(id)arg3 isRandom:(_Bool)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(_Bool)arg3 validator:(id)arg4;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithCompletion:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withDefaultIndex:(int)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(CDUnknownBlockType)arg2;
- (id)initWithPresentingViewController:(id)arg1;
- (id)initWithPresentingViewControlller:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

