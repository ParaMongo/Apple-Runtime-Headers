//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QCSCN_Geometry;

__attribute__((visibility("hidden")))
@interface QCSCN_Skinner : NSObject
{
    // Error parsing type: ^{__C3DSkinner={__C3DEntity={__CFRuntimeBase=QAQ}^{__CFDictionary}}^{__C3DSkin}^{__C3DNode}^{__CFArray}^{C3DMatrix4x4}^{C3DMatrix4x4}BBB^{_SCNVector4}BB}, name: _skinner
    // Error parsing type: ^{__C3DScene={__C3DEntity={__CFRuntimeBase=QAQ}^{__CFDictionary}}^{__C3DSceneID}^{__C3DNode}^{__C3DAnimationManager}dddd^{__CFDictionary}{_SCNVector3=ddd}^{__C3DFXDeformerManager}{_opaque_pthread_mutex_t=q[56c]}}, name: _sceneRef
}

+     // Error parsing type: @24@0:8^{__C3DSkinner={__C3DEntity={__CFRuntimeBase=QAQ}^{__CFDictionary}}^{__C3DSkin}^{__C3DNode}^{__CFArray}^{C3DMatrix4x4}^{C3DMatrix4x4}BBB^{_SCNVector4}BB}16, name: skinnerWithSkinnerRef:
-     // Error parsing type: v24@0:8^{__C3DScene={__C3DEntity={__CFRuntimeBase=QAQ}^{__CFDictionary}}^{__C3DSceneID}^{__C3DNode}^{__C3DAnimationManager}dddd^{__CFDictionary}{_SCNVector3=ddd}^{__C3DFXDeformerManager}{_opaque_pthread_mutex_t=q[56c]}}16, name: setSceneRef:
-     // Error parsing type: ^{__C3DScene={__C3DEntity={__CFRuntimeBase=QAQ}^{__CFDictionary}}^{__C3DSceneID}^{__C3DNode}^{__C3DAnimationManager}dddd^{__CFDictionary}{_SCNVector3=ddd}^{__C3DFXDeformerManager}{_opaque_pthread_mutex_t=q[56c]}}16@0:8, name: sceneRef
@property(retain, nonatomic) QCSCN_Geometry *skinGeometry;
- (BOOL)setSkeleton:(id)arg1;
- (id)skeleton;
-     // Error parsing type: ^{__C3DSkinner={__C3DEntity={__CFRuntimeBase=QAQ}^{__CFDictionary}}^{__C3DSkin}^{__C3DNode}^{__CFArray}^{C3DMatrix4x4}^{C3DMatrix4x4}BBB^{_SCNVector4}BB}16@0:8, name: skinnerRef
- (id)objectInJointsAtIndex:(unsigned long long)arg1;
- (int)countOfJoints;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalize;
-     // Error parsing type: @24@0:8^{__C3DSkinner={__C3DEntity={__CFRuntimeBase=QAQ}^{__CFDictionary}}^{__C3DSkin}^{__C3DNode}^{__CFArray}^{C3DMatrix4x4}^{C3DMatrix4x4}BBB^{_SCNVector4}BB}16, name: initWithSkinnerRef:

@end

