//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthenticationServices/_ASExtensionViewController.h>

@protocol _ASCredentialListViewControllerDelegate;

@interface _ASCredentialListViewController : _ASExtensionViewController
{
    id <_ASCredentialListViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <_ASCredentialListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareToCompleteRequestWithHostContext:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)_finishWithCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)_requestDidFailWithError:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithExtension:(id)arg1 serviceIdentifiers:(id)arg2;

@end
