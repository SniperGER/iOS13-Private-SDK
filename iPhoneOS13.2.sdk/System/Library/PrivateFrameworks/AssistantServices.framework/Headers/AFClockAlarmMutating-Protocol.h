//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSDate, NSString, NSURL, NSUUID;

@protocol AFClockAlarmMutating 
- (void)setLastModifiedDate:(NSDate *)arg1;
- (void)setDismissedDate:(NSDate *)arg1;
- (void)setFiredDate:(NSDate *)arg1;
- (void)setIsSnoozed:(_Bool)arg1;
- (void)setIsEnabled:(_Bool)arg1;
- (void)setRepeatOptions:(unsigned long long)arg1;
- (void)setMinute:(unsigned long long)arg1;
- (void)setHour:(unsigned long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setIsFiring:(_Bool)arg1;
- (void)setAlarmURL:(NSURL *)arg1;
- (void)setAlarmID:(NSUUID *)arg1;
@end
