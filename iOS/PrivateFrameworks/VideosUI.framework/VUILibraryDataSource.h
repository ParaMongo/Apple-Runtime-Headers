//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol VUILibraryDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryDataSource : NSObject
{
    _Bool _hasCompletedInitialFetch;
    id <VUILibraryDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasCompletedInitialFetch; // @synthesize hasCompletedInitialFetch=_hasCompletedInitialFetch;
@property(nonatomic) __weak id <VUILibraryDataSourceDelegate> delegate; // @synthesize delegate=_delegate;

@end

