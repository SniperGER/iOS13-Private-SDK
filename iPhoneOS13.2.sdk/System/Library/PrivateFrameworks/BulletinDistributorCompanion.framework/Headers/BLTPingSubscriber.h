//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTPingSubscribing-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol BLTPingService;

@interface BLTPingSubscriber : NSObject <BLTPingSubscribing>
{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableDictionary *_pingHandlers;
    id <BLTPingService> _service;
}

@property(retain, nonatomic) id <BLTPingService> service; // @synthesize service=_service;
@property(retain, nonatomic) NSMutableDictionary *pingHandlers; // @synthesize pingHandlers=_pingHandlers;
- (void)subscribeWithMachServiceName:(id)arg1;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)sendBulletinSummary:(id)arg1 forBulletin:(id)arg2 destinations:(unsigned long long)arg3;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(id /* block */)arg3;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)pingWithBulletin:(id)arg1 ack:(id /* block */)arg2;
- (void)pingWithBulletin:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 withNotificationAckForwardForAnyConnectionHandler:(id /* block */)arg2;
- (void)subscribeToSectionID:(id)arg1 withNotificationAckForwardHandler:(id /* block */)arg2;
- (void)subscribeToSectionID:(id)arg1 withNotificationAckHandler:(id /* block */)arg2;
- (void)subscribeToSectionID:(id)arg1 withNotificationHandler:(id /* block */)arg2;
- (void)subscribeToSectionID:(id)arg1 withBulletinAckForwardForAnyConnectionHandler:(id /* block */)arg2;
- (void)subscribeToSectionID:(id)arg1 withBulletinAckForwardHandler:(id /* block */)arg2;
- (void)subscribeToSectionID:(id)arg1 withBulletinAckHandler:(id /* block */)arg2;
- (void)subscribeToSectionID:(id)arg1 withBulletinHandler:(id /* block */)arg2;
- (void)subscribeToSectionID:(id)arg1 withPingAckForwardHandler:(id /* block */)arg2;
- (void)subscribeToSectionID:(id)arg1 withPingAckHandler:(id /* block */)arg2;
- (void)subscribeToSectionID:(id)arg1 withPingHandler:(id /* block */)arg2;
- (void)_subscribeToSectionID:(id)arg1 pingHandler:(id)arg2 ackType:(unsigned long long)arg3 forFullBulletins:(_Bool)arg4 forNotifications:(_Bool)arg5;
- (void)_subscribeToSectionID:(id)arg1 pingHandler:(id)arg2 ackType:(unsigned long long)arg3 forFullBulletins:(_Bool)arg4;
- (void)unsubscribeFromSectionID:(id)arg1;
- (id)subscriptionInfos;
- (id)sectionIDsForBulletins;
- (id)sectionIDs;
- (void)pingSubscriberDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
