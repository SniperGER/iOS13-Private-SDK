//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class PKPeerPaymentTermsController;

@interface PKPeerPaymentTermsAndConditionsRemoteAlertViewController : SBUIRemoteAlertServiceViewController
{
    PKPeerPaymentTermsController *_termsController;
}

+ (BOOL)_isSecureForRemoteViewService;
// - (void).cxx_destruct;
- (void)_dismiss;
- (void)handleButtonActions:(id)arg1;
- (BOOL)shouldAutorotate;
- (void)configureWithContext:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (long long)preferredStatusBarStyle;
- (NSUInteger)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (id)init;

@end
