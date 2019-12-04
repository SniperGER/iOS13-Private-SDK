//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSDate, NSTimeZone;

@interface REMDisplayDate : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _allDay;
    NSDate *_date;
    NSTimeZone *_timeZone;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithDueDateComponents:(id)arg1 alarms:(id)arg2;
- (id)initWithFloatingDateComponents:(id)arg1 nonFloatingDateComponents:(id)arg2;
- (id)initWithDate:(id)arg1 allDay:(_Bool)arg2 timeZone:(id)arg3;

@end
