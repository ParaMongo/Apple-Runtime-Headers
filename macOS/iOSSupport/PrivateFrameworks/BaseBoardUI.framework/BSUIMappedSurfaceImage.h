//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@class NSData;

@interface BSUIMappedSurfaceImage : UIImage
{
    NSData *_mappedSurfaceData;
}

+ (id)mappedSurfaceImageFromPath:(id)arg1 loadEagerly:(BOOL)arg2;
+ (BOOL)writeSurfaceImage:(id)arg1 toFileDescriptor:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic, getter=_mappedSurfaceData, setter=_setMappedSurfaceData:) NSData *_mappedSurfaceData; // @synthesize _mappedSurfaceData;

@end

