//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSCharacterSet;

@interface AccountsPrefFormatter : NSFormatter
{
    long long _maxLength;
    NSCharacterSet *_characterSet;
}

+ (id)passwordFormatter;
+ (id)unixNameFormatter;
+ (id)maxLengthFormatter:(long long)arg1;
+ (id)hexSet;
+ (id)asciiSet;
- (void).cxx_destruct;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithCharacterSet:(id)arg1 withMaxLength:(long long)arg2;
- (id)initWithMaxLength:(long long)arg1;

@end

