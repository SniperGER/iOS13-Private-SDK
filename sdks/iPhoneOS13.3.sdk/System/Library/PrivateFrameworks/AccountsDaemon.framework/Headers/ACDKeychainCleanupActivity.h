//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ACDKeychainCleanupActivity : NSObject
{
    ACAccountStore *_accountStore;
    NSObject<OS_xpc_object> *_xpcActivity;
    NSObject<OS_dispatch_queue> *_activityQueue;
}

+ (id)sharedActivity;
// - (void).cxx_destruct;
- (void)_activityQueue_unregisterActivity;
- (void)_activityQueue_removeCredentialItem:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)_removeExpiredCredentials;
- (void)_activityQueue_removeExpiredCredentials;
- (void)_activityQueue_registerXPCActivityWithCriteria:(id)arg1;
- (void)_activityQueue_configureXPCActivityWithCriteria:(id)arg1;
- (void)_activityQueue_queueCredentialItemWithAccount:(id)arg1 serviceName:(id)arg2;
- (void)_activityQueue_checkIn;
- (void)queueNonPersistentCredentialRemoval:(id)arg1;
- (void)checkInIfNecessary;
- (id)init;

@end
