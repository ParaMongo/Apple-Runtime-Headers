//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Carousel/CSLEclipseObserver-Protocol.h>
#import <Carousel/CSLPIButtonHandlerOverride-Protocol.h>
#import <Carousel/CSLSystemLockStateMachineDelegate-Protocol.h>
#import <Carousel/IOSSHLBacklightObserver-Protocol.h>

@class CSLSOSCountdown, CSLSystemLockStateMachine, CSLSystemLockView, NSString;
@protocol CSLSystemLockViewControllerDelegate;

@interface CSLSystemLockViewController : UIViewController <IOSSHLBacklightObserver, CSLEclipseObserver, CSLSystemLockStateMachineDelegate, CSLPIButtonHandlerOverride>
{
    CSLSystemLockStateMachine *_stateMachine;
    CSLSOSCountdown *_sosCountdown;
    _Bool _observingEclipse;
    id _minorDetentAssertion;
    id _preventMinorDetentAssertion;
    _Bool _shouldDisplayEducationalScreen;
    id <CSLSystemLockViewControllerDelegate> _delegate;
}

+ (id)systemLockIdentifier;
+ (id)shouldDisplayEducationalScreenKey;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CSLSystemLockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_callSOS;
- (void)_chimeSOS;
- (_Bool)_shouldChime;
- (_Bool)_displayingSOS;
- (void)eclipseDidChange:(_Bool)arg1;
- (void)_setObservingEclipse:(_Bool)arg1;
- (void)_stopPreventingDetents;
- (void)_preventDetentsIfNecessary;
- (void)_disableDetents;
- (void)_enableDetentsIfNecessary;
- (void)backlight:(id)arg1 didTurnOn:(_Bool)arg2 atContinuousTime:(unsigned long long)arg3 forReason:(unsigned int)arg4;
- (_Bool)handleButton:(unsigned int)arg1 eventType:(unsigned int)arg2 firstDownTime:(unsigned long long)arg3 lastUpTime:(unsigned long long)arg4;
- (_Bool)postHandleButton:(unsigned int)arg1 eventType:(unsigned int)arg2 firstDownTime:(unsigned long long)arg3 lastUpTime:(unsigned long long)arg4;
- (_Bool)preHandleButton:(unsigned int)arg1 eventType:(unsigned int)arg2 firstDownTime:(unsigned long long)arg3 lastUpTime:(unsigned long long)arg4;
- (_Bool)wantsSystemLockUserIdleTimer;
- (void)systemLockStateMachine:(id)arg1 cancelSOSAnimated:(_Bool)arg2;
- (void)systemLockStateMachine:(id)arg1 startSOSAnimated:(_Bool)arg2;
- (_Bool)systemLockStateMachineCanTransitionToSOS:(id)arg1;
- (void)performPopAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)systemLockStateMachine:(id)arg1 performPopAnimationWithCompletion:(CDUnknownBlockType)arg2;
- (void)updatedWithDelta:(float)arg1;
- (void)systemLockStateMachine:(id)arg1 updatedWithDelta:(float)arg2;
- (void)systemLockStateMachine:(id)arg1 dismissAlertAnimated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)systemLockStateMachine:(id)arg1 showAlertAnimated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)systemLockStateMachineDidDismissAlert:(id)arg1;
- (void)systemLockStateMachineWillDisplayAlert:(id)arg1;
- (void)systemLockStateMachineDidUnlock:(id)arg1;
- (void)systemLockStateMachineWillLock:(id)arg1;
- (void)systemLockStateMachineUserIdleTimerFired:(id)arg1;
- (id)stateMachine;
- (_Bool)wantsCrownScrollEvents;
- (void)addRotationalFraction:(float)arg1;
- (void)forceUnlock;
- (void)beginingLock;
- (void)beginLock:(_Bool)arg1;
- (void)_persistDisplayedEductionalAffordance;
- (void)_readPreferences;
- (void)_registerDefaults;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) CSLSystemLockView *view; // @dynamic view;

@end

