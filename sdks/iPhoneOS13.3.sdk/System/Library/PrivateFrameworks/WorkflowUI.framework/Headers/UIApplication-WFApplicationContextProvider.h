//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import <WorkflowUI/WFApplicationContextProvider-Protocol.h>

@interface UIApplication (WFApplicationContextProvider) <WFApplicationContextProvider>
- (BOOL)shouldReverseLayoutDirection;
- (long long)currentApplicationStateForWFApplicationContext:(id)arg1;
@property(nonatomic) BOOL wfIdleTimerDisabled;
- (id)applicationForWFApplicationContext:(id)arg1;
- (id)keyWindowForWFApplicationContext:(id)arg1;
- (id)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(id)arg2;
- (id)currentUserInterfaceTypeForWFApplicationContext:(id)arg1;
- (id)bundleForWFApplicationContext:(id)arg1;
@end
