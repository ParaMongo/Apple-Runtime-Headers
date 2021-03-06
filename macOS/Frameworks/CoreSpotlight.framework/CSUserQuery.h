//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpotlight/CSSearchQuery.h>

@class NSArray, NSString;

@interface CSUserQuery : CSSearchQuery
{
    NSArray *_filterQueries;
    NSArray *_bundleIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property(copy) NSArray *filterQueries; // @synthesize filterQueries=_filterQueries;
- (void)cancel;
- (void)start;
@property(readonly) NSString *keyboardLanguage;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 attributes:(id)arg3;
- (id)initWithQueryString:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, getter=isCancelled) BOOL cancelled; // @dynamic cancelled;
@property(readonly) unsigned long long foundItemCount; // @dynamic foundItemCount;
@property(copy) NSArray *protectionClasses; // @dynamic protectionClasses;

@end

