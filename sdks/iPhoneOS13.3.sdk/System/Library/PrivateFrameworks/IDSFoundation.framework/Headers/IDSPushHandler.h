//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMapTable, NSMutableSet, NSRecursiveLock;

@interface IDSPushHandler : NSObject
{
    NSData *_cachedPushToken;
    NSMapTable *_handlerMap;
    NSRecursiveLock *_recursiveLock;
    NSMutableSet *_topicsCache;
    BOOL _shouldWaitToSetTopics;
}

+ (id)sharedInstanceWithPortName:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) BOOL shouldWaitToSetTopics; // @synthesize shouldWaitToSetTopics=_shouldWaitToSetTopics;
// - (void).cxx_destruct;
- (void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)configureAsMacNotificationCenterObserver:(id)arg1;
- (void)configureAsMacNotificationCenterObserver:(id)arg1 withPushToWakeTopics:(id)arg2;
- (struct __SecIdentity )copyPushIdentity;
@property(readonly, nonatomic) NSData *pushToken;
- (id)_apsConnectionPushToken;
- (void)setCommands:(id)arg1 forListener:(id)arg2;
- (void)setTopics:(id)arg1 forListener:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1 topics:(id)arg2 commands:(id)arg3 queue:(id)arg4;
- (void)_recalculateTopicsCache;
- (void)_updateTopics;
- (id)_getValidPushHandlersWithSelector:(SEL)arg1 topic:(id)arg2 command:(id)arg3;
- (BOOL)_validateHandler:(id)arg1 withSelector:(SEL)arg2 topic:(id)arg3 command:(id)arg4;
@property(readonly, nonatomic) BOOL isConnected;
- (void)dealloc;
- (id)initWithPort:(id)arg1;
- (id)init;

@end
