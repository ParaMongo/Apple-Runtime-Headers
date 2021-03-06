//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzComposer/QCPatch.h>

@class QCPort, QCStringPort;

__attribute__((visibility("hidden")))
@interface QCCore3DLoader : QCPatch
{
    BOOL _allMeshes;
    BOOL _normalize;
    QCStringPort *inputPath;
    QCPort *_outputPort;
}

+ (id)stateKeysWithIdentifier:(id)arg1;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (unsigned long long)stateVersionWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (Class)inspectorClassWithIdentifier:(id)arg1;
+ (id)instantiateWithFile:(id)arg1;
+ (BOOL)canInstantiateWithFile:(id)arg1;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (BOOL)setup:(id)arg1;
- (void)setNormalize:(BOOL)arg1;
- (void)setAllMeshes:(BOOL)arg1;
- (void)setMeshPath:(id)arg1;
- (BOOL)setState:(id)arg1;
- (id)state;
- (BOOL)_updateMesh;
- (void)_setMeshTransformation:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

