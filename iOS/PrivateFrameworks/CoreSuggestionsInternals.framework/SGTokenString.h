//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface SGTokenString : NSString
{
    struct _NSRange _range;
    int _confidence;
    unsigned int _isASCII:1;
    unsigned int _length:31;
    union {
        char ascii[0];
        unsigned short utf16[0];
    } _contents;
}

+ (id)stringWithString:(id)arg1 range:(struct _NSRange)arg2 confidence:(int)arg3;
+ (id)stringWithString:(id)arg1 range:(struct _NSRange)arg2;
+ (id)stringWithString:(id)arg1;
@property(nonatomic) int confidence; // @synthesize confidence=_confidence;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)fastestEncoding;
- (const unsigned short *)_fastCharacterContents;
- (const char *)_fastCStringContents:(_Bool)arg1;
- (const char *)UTF8String;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)stringWithNewContents:(id)arg1;

@end

