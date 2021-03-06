//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/AVVoiceControllerRecordDelegate-Protocol.h>
#import <CoreUtils/CUActivatable-Protocol.h>

@class AVVoiceController, NSArray, NSMutableSet, NSString, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

@interface CULiveAudioSession : NSObject <AVVoiceControllerRecordDelegate, CUActivatable>
{
    _Bool _activateCalled;
    CDUnknownBlockType _activateCompletion;
    unsigned long long _activateTicks;
    _Bool _clinkActivated;
    RPCompanionLinkClient *_clinkClient;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_destinationDevices;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    _Bool _peersActivated;
    NSMutableSet *_peerSessionSet;
    int _sessionState;
    _Bool _sentTimingInfo;
    int _startRecordingState;
    int _stopRecordingState;
    AVVoiceController *_voiceController;
    CDUnknownBlockType _invalidationHandler;
    NSArray *_destinationIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *destinationIDs; // @synthesize destinationIDs=_destinationIDs;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)voiceControllerMediaServicesWereReset:(id)arg1;
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3;
- (void)voiceControllerDidDetectStartpoint:(id)arg1;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (_Bool)_voiceControllerStart;
- (void)_voiceControllerTearDown;
- (_Bool)_voiceControllerSetup;
- (void)_runCLinkPeersActivateStart;
- (void)_runCLinkActivateCompleted;
- (void)_runCLinkActivateStart;
- (void)_run;
- (void)_reportError:(id)arg1 where:(const char *)arg2;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

