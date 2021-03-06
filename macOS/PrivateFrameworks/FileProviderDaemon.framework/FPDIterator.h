//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface FPDIterator : NSObject
{
    BOOL _skipMaterializedTreeTraversal;
    BOOL _shouldDecorateItems;
    NSError *_error;
}

+ (id)iteratorForLocator:(id)arg1 wantsDisk:(BOOL)arg2 provider:(id)arg3;
+ (id)iteratorForLocator:(id)arg1 provider:(id)arg2;
+ (id)iteratorForLocator:(id)arg1 manager:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) BOOL shouldDecorateItems; // @synthesize shouldDecorateItems=_shouldDecorateItems;
@property(nonatomic) BOOL skipMaterializedTreeTraversal; // @synthesize skipMaterializedTreeTraversal=_skipMaterializedTreeTraversal;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long numFoldersPopped;
@property(readonly, nonatomic) BOOL done;
- (id)nextItem;
- (id)nextWithError:(id *)arg1;

@end

