//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class UIImage;

@protocol MKUserTrackingButtonTarget <NSObject>
+ (Class)_activityIndicatorClass;
- (long long)_activityIndicatorStyle;
- (UIImage *)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
- (void)_repositionViews;
- (BOOL)_isHighlightedForState:(long long)arg1;
- (void)_updateForState:(long long)arg1;
- (void)_setInternallyEnabled:(BOOL)arg1;
@end

