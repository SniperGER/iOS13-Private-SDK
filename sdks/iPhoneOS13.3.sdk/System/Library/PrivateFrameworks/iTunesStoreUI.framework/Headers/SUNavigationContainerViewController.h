//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

@class AMSBinaryPromise, UIViewController;

@interface SUNavigationContainerViewController : SUViewController
{
    BOOL _bridgedNavigation;
    BOOL _shouldRunPopHandler;
    AMSBinaryPromise *_appearancePromise;
    id /* CDUnknownBlockType */ _popHandler;
}

@property(nonatomic) BOOL shouldRunPopHandler; // @synthesize shouldRunPopHandler=_shouldRunPopHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ popHandler; // @synthesize popHandler=_popHandler;
@property(nonatomic) BOOL bridgedNavigation; // @synthesize bridgedNavigation=_bridgedNavigation;
@property(retain, nonatomic) AMSBinaryPromise *appearancePromise; // @synthesize appearancePromise=_appearancePromise;
// - (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *embeddedViewController;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)setEmbeddedViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithChildViewController:(id)arg1;

@end
