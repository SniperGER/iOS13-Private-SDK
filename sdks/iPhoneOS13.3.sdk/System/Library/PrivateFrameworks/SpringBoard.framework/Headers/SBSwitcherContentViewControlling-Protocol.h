//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>
#import <SpringBoard/SBSwitcherAnimatedTransitioning-Protocol.h>

@class NSArray, NSString, NSUUID, SBAppLayout, SBApplicationSceneHandle, SBBestAppSuggestion, SBFluidSwitcherAnimationController, SBFluidSwitcherGesture, SBMainWorkspaceTransitionRequest, SBSwitcherModifierAction, SBTransientOverlayViewController, SBWorkspaceApplicationSceneTransitionContext;
@protocol SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate;

@protocol SBSwitcherContentViewControlling <SBLayoutStateTransitionObserver, SBSwitcherAnimatedTransitioning>
@property(nonatomic, getter=isLiveContentRasterizationDisabled) BOOL liveContentRasterizationDisabled;
@property(nonatomic) long long contentOrientation;
@property(nonatomic, getter=isShowingModifierTimeline) BOOL showModifierTimeline;
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
@property(nonatomic) __weak id <SBSwitcherContentViewControllerDataSource> dataSource;
@property(nonatomic) __weak id <SBSwitcherContentViewControllerDelegate> delegate;
- (void)noteKeyboardFocusDidChangeToSceneID:(NSString *)arg1;
- (SBSwitcherModifierAction *)enterAppExposeForBundleID:(NSString *)arg1;
- (SBFluidSwitcherAnimationController *)animationControllerForTransitionRequest:(SBMainWorkspaceTransitionRequest *)arg1;
- (void)relinquishTransientOverlayViewController:(SBTransientOverlayViewController *)arg1;
- (void)acquiredViewController:(SBTransientOverlayViewController *)arg1 forTransientOverlayAppLayout:(SBAppLayout *)arg2;
- (void)noteAppLayoutsDidChange;
- (void)handleModifierAction:(SBSwitcherModifierAction *)arg1;
- (SBSwitcherModifierAction *)handleGestureDidEnd:(SBFluidSwitcherGesture *)arg1;
- (SBSwitcherModifierAction *)handleGestureDidUpdate:(SBFluidSwitcherGesture *)arg1;
- (SBSwitcherModifierAction *)handleGestureDidBegin:(SBFluidSwitcherGesture *)arg1;
- (SBSwitcherModifierAction *)dispatchAndReturnTetheredRemovalEventWithID:(NSUUID *)arg1 phase:(NSUInteger)arg2;
- (void)performAnimatedRemovalOfAppLayout:(SBAppLayout *)arg1 forReason:(long long)arg2 completion:(void (^)(BOOL, BOOL))arg3;
- (SBSwitcherModifierAction *)noteModelDidMutateForRemovalOfAppLayout:(SBAppLayout *)arg1 forReason:(long long)arg2 animated:(BOOL)arg3;
- (SBSwitcherModifierAction *)prepareAnimatedRemovalOfAppLayout:(SBAppLayout *)arg1 forReason:(long long)arg2;
- (BOOL)shouldAnimateRemovalOfAppLayout:(SBAppLayout *)arg1 forReason:(long long)arg2;
- (SBSwitcherModifierAction *)dispatchAndReturnTetheredInsertionEventWithID:(NSUUID *)arg1 phase:(NSUInteger)arg2;
- (void)performAnimatedInsertionOfAppLayouts:(NSArray *)arg1 atIndexes:(NSArray *)arg2 completion:(void (^)(BOOL, BOOL))arg3;
- (SBSwitcherModifierAction *)noteModelDidMutateForInsertionOfAppLayouts:(NSArray *)arg1 atIndexes:(NSArray *)arg2 willAnimate:(BOOL)arg3;
- (SBSwitcherModifierAction *)prepareAnimatedInsertionOfAppLayouts:(NSArray *)arg1 atIndexes:(NSArray *)arg2;
- (BOOL)shouldAnimateInsertionOfAppLayouts:(NSArray *)arg1 atIndexes:(NSArray *)arg2;
- (BOOL)isStatusBarHiddenForAppLayout:(SBAppLayout *)arg1;
- (void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(BOOL)arg1;
- (BOOL)shouldRubberbandHomeGrabberView;
- (BOOL)shouldAcceleratedHomeButtonPressBegin;
- (BOOL)isUserInteractionEnabled;
- (BOOL)isWindowVisible;
- (BOOL)shouldAddAppLayoutToFront:(SBAppLayout *)arg1 forTransitionWithContext:(SBWorkspaceApplicationSceneTransitionContext *)arg2 transitionCompleted:(BOOL)arg3;
- (double)minimumHomeScreenScale;
- (double)snapshotScaleForSceneHandle:(SBApplicationSceneHandle *)arg1;
@end
