//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/UIInteraction_Internal-Protocol.h>

@class NSString, UIView;
@protocol UIPencilInteractionDelegate;

@interface UIPencilInteraction : NSObject <UIInteraction_Internal, UIInteraction>
{
    _Bool _enabled;
    id <UIPencilInteractionDelegate> _delegate;
    UIView *_view;
}

+ (long long)preferredTapAction;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <UIPencilInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)performDelegateDidTap;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
