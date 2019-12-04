//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKMCDaySummary;

@interface HKMCDayViewModel : NSObject
{
    _Bool _fetched;
    unsigned long long _menstruationLevel;
    unsigned long long _fertileWindowLevel;
    HKMCDaySummary *_daySummary;
}

+ (id)dayViewModelWithMenstruationLevel:(unsigned long long)arg1 fertileWindowLevel:(unsigned long long)arg2 daySummary:(id)arg3 fetched:(_Bool)arg4;
+ (id)emptyDayViewModel;
+ (id)unfetchedDayViewModel;
@property(readonly, nonatomic) HKMCDaySummary *daySummary; // @synthesize daySummary=_daySummary;
@property(readonly, nonatomic, getter=isFetched) _Bool fetched; // @synthesize fetched=_fetched;
@property(readonly, nonatomic) unsigned long long fertileWindowLevel; // @synthesize fertileWindowLevel=_fertileWindowLevel;
@property(readonly, nonatomic) unsigned long long menstruationLevel; // @synthesize menstruationLevel=_menstruationLevel;
- (id)redactedDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isSupplementaryDataLogged) _Bool supplementaryDataLogged;
- (id)_initWithMenstruationLevel:(unsigned long long)arg1 fertileWindowLevel:(unsigned long long)arg2 daySummary:(id)arg3 fetched:(_Bool)arg4;

@end
