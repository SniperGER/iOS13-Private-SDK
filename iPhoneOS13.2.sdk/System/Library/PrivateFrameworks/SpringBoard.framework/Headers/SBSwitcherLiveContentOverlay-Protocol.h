//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, UIView;

@protocol SBSwitcherLiveContentOverlay 
@property(readonly, nonatomic) UIView *contentOverlayView;
- (void)disableAsynchronousRenderingForNextCommit;
- (void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(_Bool)arg2;
- (long long)rasterizationStyle;
- (void)noteKeyboardFocusDidChangeToSceneID:(NSString *)arg1;
- (void)setUsesBrightSceneViewBackgroundMaterial:(_Bool)arg1;
- (void)setHomeGrabberHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setStatusBarHidden:(_Bool)arg1 nubViewHidden:(_Bool)arg2 animator:(void (^)(void (^)(void), void (^)(_Bool, _Bool)))arg3;

@optional
- (void)noteNeedsLayoutUpdateFor180DegreeRotation;
@end
