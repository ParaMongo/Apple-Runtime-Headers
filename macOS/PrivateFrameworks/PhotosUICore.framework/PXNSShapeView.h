//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSBezierPath, NSColor;

@interface PXNSShapeView : NSView
{
    NSBezierPath *_path;
    NSColor *_fillColor;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSColor *fillColor; // @synthesize fillColor=_fillColor;
@property(copy, nonatomic) NSBezierPath *path; // @synthesize path=_path;
- (id)shapeLayer;
- (id)init;
- (id)makeBackingLayer;

@end

