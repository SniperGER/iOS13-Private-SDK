//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKPopoverBasedViewController.h>

@class TSADebugTableViewController, UIViewController;

@interface TSADebugViewController : TSKPopoverBasedViewController
{
    UIViewController *_delegate;
    TSADebugTableViewController *_debugTableViewController;
}

- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)hideIt:(id)arg1;
- (void)showIt:(id)arg1;
- (void)toggleVisible:(id)arg1;
- (void)loadView;
- (void)addItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
