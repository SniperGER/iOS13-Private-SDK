//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore;

@interface FIUIWeeklyGoalModel : NSObject
{
    HKHealthStore *_healthStore;
}

- (void)saveNewWeeklyGoals:(id)arg1;
- (void)saveNewWeeklyGoal:(id)arg1 quantityType:(id)arg2 forDate:(id)arg3 completion:(id /* block */)arg4;
- (void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 completion:(id /* block */)arg3;
- (void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2;
- (void)fetchMostRecentWeeklyGoalWithCompletion:(id /* block */)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)init;

@end
