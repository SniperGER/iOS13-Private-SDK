//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, NSArray, NSNotificationCenter;
@protocol CNCancelable, CNMeContactComparisonStrategy, CNReaderWriterScheduler;

@interface CNUIMeContactMonitor : NSObject
{
    id <CNMeContactComparisonStrategy> _strategy;
    CNContactStore *_contactStore;
    NSNotificationCenter *_notificationCenter;
    id <CNReaderWriterScheduler> _lock;
    id <CNCancelable> _meNotificationToken;
}

+ (id)makeUnifiedMeContactMonitor;
+ (id)unifiedMeContactMonitor;
+ (id)makeMeContactMonitor;
+ (id)meContactMonitor;
@property(retain, nonatomic) id <CNCancelable> meNotificationToken; // @synthesize meNotificationToken=_meNotificationToken;
@property(retain, nonatomic) id <CNReaderWriterScheduler> lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) id <CNMeContactComparisonStrategy> strategy; // @synthesize strategy=_strategy;
- (void)meChanged:(id)arg1;
@property(readonly, nonatomic) NSArray *meContactIdentifiers;
- (_Bool)isMeContact:(id)arg1;
- (void)startMonitoring;
- (void)dealloc;
- (id)initWithComparisonStrategy:(id)arg1 contactStore:(id)arg2 notificationCenter:(id)arg3 schedulerProvider:(id)arg4;
- (id)initWithComparisonStrategy:(id)arg1 contactStore:(id)arg2;
- (id)initWithComparisonStrategy:(id)arg1;
- (id)initWithContactStore:(id)arg1;
- (id)init;

@end
