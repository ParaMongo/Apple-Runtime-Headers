//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSArray, NSCalendar, NSDate, NSLocale, NSMutableDictionary, NSString, NSTimeZone;

@interface NSDateFormatter : NSFormatter
{
    NSMutableDictionary *_attributes;
    struct __CFDateFormatter *_formatter;
    unsigned long long _counter;
    long long _cacheGeneration;
    struct os_unfair_lock_s _lock;
}

+ (id)dateFormatFromTemplate:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3;
+ (id)localizedStringFromDate:(id)arg1 dateStyle:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3;
+ (void)initialize;
+ (void)setDefaultFormatterBehavior:(unsigned long long)arg1;
+ (unsigned long long)defaultFormatterBehavior;
+ (id)_formatStringFromComponents:(id)arg1;
+ (id)_componentsFromFormatString:(id)arg1;
- (void)_setUsesCharacterDirection:(_Bool)arg1;
- (_Bool)_usesCharacterDirection;
@property _Bool doesRelativeDateFormatting;
@property long long formattingContext;
@property(copy) NSDate *gregorianStartDate;
@property(copy) NSArray *shortStandaloneQuarterSymbols;
@property(copy) NSArray *standaloneQuarterSymbols;
@property(copy) NSArray *shortQuarterSymbols;
@property(copy) NSArray *quarterSymbols;
@property(copy) NSArray *veryShortStandaloneWeekdaySymbols;
@property(copy) NSArray *shortStandaloneWeekdaySymbols;
@property(copy) NSArray *standaloneWeekdaySymbols;
@property(copy) NSArray *veryShortWeekdaySymbols;
@property(copy) NSArray *veryShortStandaloneMonthSymbols;
@property(copy) NSArray *shortStandaloneMonthSymbols;
@property(copy) NSArray *standaloneMonthSymbols;
@property(copy) NSArray *veryShortMonthSymbols;
@property(copy) NSArray *longEraSymbols;
@property(copy) NSString *PMSymbol;
@property(copy) NSString *AMSymbol;
@property(copy) NSArray *shortWeekdaySymbols;
@property(copy) NSArray *weekdaySymbols;
@property(copy) NSArray *shortMonthSymbols;
@property(copy) NSArray *monthSymbols;
@property(copy) NSArray *eraSymbols;
@property(copy) NSDate *defaultDate;
@property(copy) NSDate *twoDigitStartDate;
@property(getter=isLenient) _Bool lenient;
@property(copy) NSCalendar *calendar;
@property(copy) NSTimeZone *timeZone;
- (void)_setIsLenient:(_Bool)arg1;
- (void)_setDateFormat:(id)arg1;
- (id)_dateFormat;
@property(copy) NSString *dateFormat;
- (void)_setDateFormat:(id)arg1 alreadyLocked:(_Bool)arg2;
@property unsigned long long formatterBehavior;
@property _Bool generatesCalendarDates;
@property(copy) NSLocale *locale;
- (id)_getLocaleAlreadyLocked:(_Bool)arg1;
@property unsigned long long timeStyle;
@property unsigned long long dateStyle;
- (void)setLocalizedDateFormatFromTemplate:(id)arg1;
- (id)dateFromString:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)_locale_forOldMethods;
- (id)_timeZone_forOldMethods;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)_reset;
- (id)init;
- (void)_regenerateFormatter;
- (void)_regenerateFormatterIfAbsent;
- (void)_clearFormatter;
- (void)_invalidateCache;
- (id)_attributedStringWithFieldsFromDate:(id)arg1;
- (_Bool)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (_Bool)_tracksCacheGenerationCount;
- (long long)_cacheGenerationCount;

@end

