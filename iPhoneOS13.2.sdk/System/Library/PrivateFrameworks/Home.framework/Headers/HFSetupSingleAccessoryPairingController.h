//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFHomeObserver-Protocol.h>
#import <Home/HFSetupPairingController-Protocol.h>

@class HFDiscoveredAccessory, HFSetupAccessoryResult, HFSetupPairingContext, HMAccessorySetupCompletedInfo, HMHome, NAFuture, NSDate, NSHashTable, NSSet, NSString;

@interface HFSetupSingleAccessoryPairingController : NSObject <HFHomeObserver, HFSetupPairingController>
{
    _Bool _accessoryRequiresCode;
    HFSetupPairingContext *_context;
    HFSetupAccessoryResult *_setupResult;
    HMAccessorySetupCompletedInfo *_completedInfo;
    HFDiscoveredAccessory *_discoveredAccessoryToPair;
    unsigned long long _phase;
    NSString *_statusTitle;
    NSString *_statusDescription;
    HMHome *_home;
    NSSet *_pairedAccessories;
    NSHashTable *_pairingObservers;
    NAFuture *_pairingFuture;
    NSDate *_phaseStartDate;
}

+ (_Bool)supportsSetupPayloadRetry;
@property(nonatomic) _Bool accessoryRequiresCode; // @synthesize accessoryRequiresCode=_accessoryRequiresCode;
@property(retain, nonatomic) NSDate *phaseStartDate; // @synthesize phaseStartDate=_phaseStartDate;
@property(retain, nonatomic) NAFuture *pairingFuture; // @synthesize pairingFuture=_pairingFuture;
@property(retain, nonatomic) NSHashTable *pairingObservers; // @synthesize pairingObservers=_pairingObservers;
@property(retain, nonatomic) NSSet *pairedAccessories; // @synthesize pairedAccessories=_pairedAccessories;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
@property(retain, nonatomic) NSString *statusTitle; // @synthesize statusTitle=_statusTitle;
@property(nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) HFDiscoveredAccessory *discoveredAccessoryToPair; // @synthesize discoveredAccessoryToPair=_discoveredAccessoryToPair;
@property(readonly, nonatomic) HMAccessorySetupCompletedInfo *completedInfo; // @synthesize completedInfo=_completedInfo;
@property(retain, nonatomic) HFSetupAccessoryResult *setupResult; // @synthesize setupResult=_setupResult;
@property(readonly, nonatomic) HFSetupPairingContext *context; // @synthesize context=_context;
- (void)_assertValidTransitionFromPhase:(unsigned long long)arg1 toPhase:(unsigned long long)arg2;
- (void)_failPairingWithDiscoveredAccessory:(id)arg1 error:(id)arg2;
- (void)_finishPairingWithDiscoveredAccessory:(id)arg1;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)_updateStatusTextAndNotifyDelegate:(_Bool)arg1;
- (void)_tryPairing;
- (id)cancel;
- (void)startWithHome:(id)arg1;
- (void)removePairingObserver:(id)arg1;
- (void)addPairingObserver:(id)arg1;
- (id)initWithContext:(id)arg1 discoveredAccessory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
