//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPanGestureRecognizer.h>

@class NSEvent;

@interface UXCollectionViewPanGestureRecognizer : NSPanGestureRecognizer
{
    NSEvent *_mouseDownEvent;
}

@property(retain, nonatomic) NSEvent *mouseDownEvent; // @synthesize mouseDownEvent=_mouseDownEvent;
- (void)dealloc;
- (void)uxCancel;
- (void)mouseDown:(id)arg1;

@end

