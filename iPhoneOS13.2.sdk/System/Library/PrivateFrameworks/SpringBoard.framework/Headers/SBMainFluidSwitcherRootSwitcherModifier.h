//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBFluidSwitcherRootSwitcherModifier.h>

@interface SBMainFluidSwitcherRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier
{
}

- (Class)_defaultMultitaskingModifierClass;
- (long long)_effectiveEnvironmentMode;
- (id)lowEndHardwareModifier;
- (id)tetheredInsertionModifierFortetheredInsertionEvent:(id)arg1;
- (id)tetheredRemovalModifierForTetheredRemovalEvent:(id)arg1;
- (id)insertionModifierForInsertionEvent:(id)arg1;
- (id)entityRemovalModifierForMainTransitionEvent:(id)arg1;
- (id)multitaskingModifierForEvent:(id)arg1;
- (id)appExposeModifierForAppExposeEvent:(id)arg1;
- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg1;
- (id)floorModifierForTransitionEvent:(id)arg1;
- (id)transitionModifierForMainTransitionEvent:(id)arg1;
- (id)gestureModifierForGestureEvent:(id)arg1;
- (id)newMultitaskingModifierFromMultitaskingModifier:(id)arg1;

@end
