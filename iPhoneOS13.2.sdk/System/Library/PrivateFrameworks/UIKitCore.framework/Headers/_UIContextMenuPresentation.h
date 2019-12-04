//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIClickPresentation.h>

@class UIView, UIWindow, _UIPlatterView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuPresentation : _UIClickPresentation
{
    UIView *_presentationContainer;
    UIView *_dragContainer;
    _UIPlatterView *_destinationPlatterView;
    id /* block */ _postDismissItemUpdate;
    id /* block */ _postDismissCleanUp;
    UIView *_dragAnimationPortalView;
    UIWindow *_dragAnimationWindow;
}

@property(retain, nonatomic) UIWindow *dragAnimationWindow; // @synthesize dragAnimationWindow=_dragAnimationWindow;
@property(retain, nonatomic) UIView *dragAnimationPortalView; // @synthesize dragAnimationPortalView=_dragAnimationPortalView;
@property(copy, nonatomic) id /* block */ postDismissCleanUp; // @synthesize postDismissCleanUp=_postDismissCleanUp;
@property(copy, nonatomic) id /* block */ postDismissItemUpdate; // @synthesize postDismissItemUpdate=_postDismissItemUpdate;
@property(retain, nonatomic) _UIPlatterView *destinationPlatterView; // @synthesize destinationPlatterView=_destinationPlatterView;
@property(retain, nonatomic) UIView *dragContainer; // @synthesize dragContainer=_dragContainer;
@property(readonly, nonatomic) UIView *presentationContainer; // @synthesize presentationContainer=_presentationContainer;

@end
