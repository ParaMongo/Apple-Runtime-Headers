//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPArtworkDataSource-Protocol.h>

@class NSString;

@interface _MPArtworkCatalogStaticDataSource : NSObject <MPArtworkDataSource>
{
}

+ (id)sharedDataSource;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

