//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestTagRequest : NSObject
{
    int _requestType;
    UIView *_view;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) int requestType; // @synthesize requestType=_requestType;
- (id)initWithRequestType:(int)arg1 view:(id)arg2;

@end

