//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AACCore/AEAssessmentStatePublishing-Protocol.h>

@class AEXPCProxy;
@protocol OS_dispatch_queue;

@interface AEAssessmentStatePublishingProxy : NSObject <AEAssessmentStatePublishing>
{
    AEXPCProxy *_xpcProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)makeProxyWithEndpoint:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) AEXPCProxy *xpcProxy; // @synthesize xpcProxy=_xpcProxy;
- (void)_publishAssessmentState:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)publishAssessmentState:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithXPCProxy:(id)arg1 queue:(id)arg2;

@end

