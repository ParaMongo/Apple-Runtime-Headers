//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIFeedback.h>

#import <UIKitCore/_UIFeedbackContinuousPlayable-Protocol.h>
#import <UIKitCore/_UIFeedbackDiscretePlayable-Protocol.h>

@class NSMutableArray, NSString, NSTimer;

@interface _UIFeedbackPattern : _UIFeedback <_UIFeedbackDiscretePlayable, _UIFeedbackContinuousPlayable>
{
    _Bool _highPriority;
    _Bool _isRepeating;
    double _duration;
    NSMutableArray *_feedbacks;
    NSTimer *_repeatTimer;
}

+ (Class)_parametersClass;
+ (id)feedbackPattern;
+ (id)type;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *repeatTimer; // @synthesize repeatTimer=_repeatTimer;
@property(readonly, nonatomic) _Bool isRepeating; // @synthesize isRepeating=_isRepeating;
@property(retain, nonatomic) NSMutableArray *feedbacks; // @synthesize feedbacks=_feedbacks;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic, getter=isHighPriority) _Bool highPriority; // @synthesize highPriority=_highPriority;
- (id)_debugDictionary;
- (void)setPosition:(float)arg1;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)stop;
- (void)_playPattern;
- (void)play;
- (id)_allSystemSoundIDs;
- (id)_allEventTypes;
- (id)_individualFeedbacks;
- (unsigned long long)_effectivePlayableFeedbackTypes;
- (void)addFeedback:(id)arg1 atTime:(double)arg2;
- (id)_playableProtocol;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

