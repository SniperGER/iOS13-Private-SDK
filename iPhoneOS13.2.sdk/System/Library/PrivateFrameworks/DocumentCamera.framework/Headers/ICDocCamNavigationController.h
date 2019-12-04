//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <DocumentCamera/DCUnsavedDataDelegate-Protocol.h>

@class NSString;

@interface ICDocCamNavigationController : UINavigationController <DCUnsavedDataDelegate>
{
}

- (void)prepareForDismissal;
- (long long)_preferredModalPresentationStyle;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didReceiveMemoryWarning;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
