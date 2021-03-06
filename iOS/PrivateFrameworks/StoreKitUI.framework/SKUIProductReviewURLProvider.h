//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, SSURLBag;

__attribute__((visibility("hidden")))
@interface SKUIProductReviewURLProvider : NSObject
{
    NSURL *_rateURL;
    NSURL *_writeReviewURL;
    NSString *_itemID;
    SSURLBag *_urlBag;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SSURLBag *urlBag; // @synthesize urlBag=_urlBag;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) NSURL *writeReviewURL; // @synthesize writeReviewURL=_writeReviewURL;
@property(retain, nonatomic) NSURL *rateURL; // @synthesize rateURL=_rateURL;
- (id)_urlByAppendingItemId:(id)arg1;
- (void)fetchURLsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithClientContext:(id)arg1 itemID:(id)arg2;
- (id)init;

@end

