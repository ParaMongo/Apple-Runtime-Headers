//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitMacHelper/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol UINSDocumentBrowserAction <NSObject>
@property(nonatomic) BOOL supportsMultipleItems;
@property(copy, nonatomic) NSArray *supportedContentTypes;
@property(readonly, nonatomic) long long availability;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

