//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCalendar/ICSComponent.h>

@class ICSDate, NSArray;

@interface ICSTimeZoneBlock : ICSComponent
{
}

@property(nonatomic) long long tzoffsetto;
@property(nonatomic) long long tzoffsetfrom;
@property(nonatomic) NSArray *tzname;
@property(retain, nonatomic) NSArray *rrule;
@property(retain, nonatomic) NSArray *rdate;
@property(retain, nonatomic) ICSDate *dtstart;
- (BOOL)validate:(id )arg1;
- (long long)compare:(id)arg1;
- (void)addRecurrenceDate:(id)arg1;
- (id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;

@end
