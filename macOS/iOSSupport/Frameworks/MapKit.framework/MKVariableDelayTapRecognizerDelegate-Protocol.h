//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKVariableDelayTapRecognizer, UITouch;

@protocol MKVariableDelayTapRecognizerDelegate <NSObject>

@optional
- (double)variableDelayTapRecognizer:(MKVariableDelayTapRecognizer *)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(UITouch *)arg3;
@end

