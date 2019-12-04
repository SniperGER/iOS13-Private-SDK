//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBDeviceApplicationSceneHandle, SBIsolatedSceneOrientationFollowingWrapperViewController, UIViewController;
@protocol SBDeviceApplicationSceneOverlayViewProviderDelegate;

@interface SBDeviceApplicationSceneOverlayViewProvider : NSObject
{
    SBIsolatedSceneOrientationFollowingWrapperViewController *_orientationWrapperViewController;
    id <SBDeviceApplicationSceneOverlayViewProviderDelegate> _delegate;
    SBDeviceApplicationSceneHandle *_sceneHandle;
}

@property(retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
@property(readonly, nonatomic) __weak id <SBDeviceApplicationSceneOverlayViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_realOverlayViewController;
- (void)_deactivateIfPossible;
- (void)_activateIfPossible;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldFollowSceneOrientation;
@property(readonly, nonatomic) long long preferredStatusBarStyle;
@property(readonly, nonatomic) UIViewController *overlayViewController;
- (void)dealloc;
- (id)initWithSceneHandle:(id)arg1 delegate:(id)arg2;

@end
