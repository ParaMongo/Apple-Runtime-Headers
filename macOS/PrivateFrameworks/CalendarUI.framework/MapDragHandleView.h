//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MapDragRadiusView;

@interface MapDragHandleView : NSView
{
    MapDragRadiusView *_radView;
}

- (void).cxx_destruct;
@property __weak MapDragRadiusView *radView; // @synthesize radView=_radView;
- (void)updateLayer;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

