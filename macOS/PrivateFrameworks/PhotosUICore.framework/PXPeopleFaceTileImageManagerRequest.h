//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAsset, PHFace, PHPerson;

@interface PXPeopleFaceTileImageManagerRequest : NSObject
{
    BOOL _synchronous;
    PHPerson *_person;
    PHFace *_face;
    PHAsset *_asset;
    long long _deliveryMode;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL synchronous; // @synthesize synchronous=_synchronous;
@property(nonatomic) long long deliveryMode; // @synthesize deliveryMode=_deliveryMode;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) PHFace *face; // @synthesize face=_face;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
- (id)description;
- (id)initWithFaceTile:(id)arg1;
- (id)initWithPerson:(id)arg1 face:(id)arg2 asset:(id)arg3;
- (id)initWithPerson:(id)arg1;

@end

