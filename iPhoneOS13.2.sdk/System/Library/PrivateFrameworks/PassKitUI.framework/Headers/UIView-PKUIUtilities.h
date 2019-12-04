//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (PKUIUtilities)
+ (void)pkui_animateUsingFactory:(id)arg1 withDelay:(double)arg2 options:(unsigned long long)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)pkui_animateUsingOptions:(unsigned long long)arg1 delay:(double)arg2 velocity:(double)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)pkui_animateUsingOptions:(unsigned long long)arg1 delay:(double)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)pkui_animateUsingOptions:(unsigned long long)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)pkui_setExcludedFromScreenCapture:(_Bool)arg1;
- (struct CGRect)pkui_readableContentBoundsWithMargins:(struct UIEdgeInsets)arg1;
- (id)pkui_viewControllerFromResponderChain;
- (id)pkui_translationAnimation;
- (void)addTransformSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 timing:(id)arg5;
- (void)addDefaultTransformSpringWithStartTime:(double)arg1;
- (void)addTranslationSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 velocity:(double)arg5 timing:(id)arg6;
- (void)addTranslationSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 startTime:(double)arg4 timing:(id)arg5;
- (void)addDefaultTranslationSpringWithVelocity:(double)arg1 startTime:(double)arg2;
- (_Bool)pkui_setBounds:(struct CGRect)arg1 position:(struct CGPoint)arg2 animated:(_Bool)arg3;
- (_Bool)pkui_setFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)pkui_smallShakeWithCompletion:(id /* block */)arg1;
- (void)pkui_shakeWithCompletion:(id /* block */)arg1;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)pkui_setMaskType:(unsigned long long)arg1;
@end
