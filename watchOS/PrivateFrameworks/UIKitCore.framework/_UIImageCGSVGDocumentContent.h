//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIImageContent.h>

__attribute__((visibility("hidden")))
@interface _UIImageCGSVGDocumentContent : _UIImageContent
{
    struct CGSVGDocument *_svgDocumentRef;
}

- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)description;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (struct CGSize)sizeInPixels;
- (struct CGSVGDocument *)CGSVGDocument;
- (_Bool)isCGSVGDocument;
- (_Bool)canProvideFullResCGImage;
- (void)dealloc;
- (id)initWithScale:(float)arg1;
- (id)initWithCGSVGDocument:(struct CGSVGDocument *)arg1 scale:(float)arg2;

@end

