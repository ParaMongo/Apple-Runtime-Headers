//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVEditSerializedOutput : NSObject
{
}

+ (id)sharedSerialOutput;
+ (void)initialize;
- (void)exportSerializedToURL:(id)arg1 withComposition:(id)arg2 andVideoComposition:(id)arg3 andAudioMix:(id)arg4;
- (id)serializeAudioMix:(id)arg1;
- (id)serializeVideoComposition:(id)arg1;
- (id)serializeComposition:(id)arg1 containingAssetURLs:(id)arg2;

@end

