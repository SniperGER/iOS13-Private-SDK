//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol BSInvalidatable;

@interface SBDeviceOrientationUpdateManager : NSObject
{
    NSMutableSet *_deferralAssertions;
    _Bool _deviceOrientationIsDirty;
    id <BSInvalidatable> _stateCaptureHandle;
    long long _lastUpdatedDeviceOrientation;
}

@property(nonatomic) long long lastUpdatedDeviceOrientation; // @synthesize lastUpdatedDeviceOrientation=_lastUpdatedDeviceOrientation;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (void)_enqueueOrientationUpdateToDeviceOrientation:(long long)arg1;
- (_Bool)_deviceOrientationUpdateNeededForOrientation:(long long)arg1;
- (void)_endDeferringOrientationUpdatesForAssertion:(id)arg1;
- (id)deviceOrientationUpdateDeferralAssertionWithReason:(id)arg1;
@property(readonly, nonatomic, getter=isCurrentlyDeferringOrientationUpdates) _Bool currentlyDeferringOrientationUpdates;
- (void)dealloc;
- (id)init;

@end
