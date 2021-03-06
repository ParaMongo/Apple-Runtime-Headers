//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>

@class NSData, NSString;

@interface IBICVectorGlyphComponent : NSObject <IBBinaryArchiving>
{
    NSData *_pdfData;
    double _baseline;
    double _capHeight;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double capHeight; // @synthesize capHeight=_capHeight;
@property(readonly, nonatomic) double baseline; // @synthesize baseline=_baseline;
@property(readonly, nonatomic) NSData *pdfData; // @synthesize pdfData=_pdfData;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithPDFData:(id)arg1 baseline:(double)arg2 capHeight:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

