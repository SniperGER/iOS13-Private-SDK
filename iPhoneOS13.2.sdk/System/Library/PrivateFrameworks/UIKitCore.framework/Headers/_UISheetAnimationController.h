//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <UIKitCore/UIViewControllerAnimatedTransitioning_Internal-Protocol.h>

@class NSString, UIView, UIViewPropertyAnimator;
@protocol UIViewControllerContextTransitioning;

@interface _UISheetAnimationController : NSObject <UIViewControllerAnimatedTransitioning_Internal, UIViewControllerAnimatedTransitioning>
{
    _Bool _isReversed;
    _Bool _isInInitialLayout;
    _Bool _scalesDownForwardView;
    id /* block */ _noninteractiveAnimations;
    id /* block */ _noninteractiveCompletion;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIView *_forwardView;
    UIViewPropertyAnimator *_propertyAnimator;
    struct CGPoint _offset;
    struct CGPoint _attachmentPoint;
    struct CGRect _sourceFrame;
    struct CGRect _forwardViewFullFrame;
}

@property(nonatomic) struct CGPoint attachmentPoint; // @synthesize attachmentPoint=_attachmentPoint;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool scalesDownForwardView; // @synthesize scalesDownForwardView=_scalesDownForwardView;
@property(retain, nonatomic) UIViewPropertyAnimator *propertyAnimator; // @synthesize propertyAnimator=_propertyAnimator;
@property(nonatomic) _Bool isInInitialLayout; // @synthesize isInInitialLayout=_isInInitialLayout;
@property(nonatomic) struct CGRect forwardViewFullFrame; // @synthesize forwardViewFullFrame=_forwardViewFullFrame;
@property(retain, nonatomic) UIView *forwardView; // @synthesize forwardView=_forwardView;
@property(nonatomic) __weak id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(copy, nonatomic) id /* block */ noninteractiveCompletion; // @synthesize noninteractiveCompletion=_noninteractiveCompletion;
@property(copy, nonatomic) id /* block */ noninteractiveAnimations; // @synthesize noninteractiveAnimations=_noninteractiveAnimations;
@property(nonatomic) struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;
@property(nonatomic) _Bool isReversed; // @synthesize isReversed=_isReversed;
- (_Bool)_allowKeyboardToAnimateAlongside:(id)arg1;
- (void)runNoninteractiveAnimationsIfPossible;
- (void)layoutTransitionViews;
- (void)animateTransition:(id)arg1;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
@property(readonly, nonatomic) _Bool isForward;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
