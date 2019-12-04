//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUICardKitProviderSupport/CRKFeedbackDelegateProxying-Protocol.h>
#import <SearchUICardKitProviderSupport/SearchUIFeedbackDelegate-Protocol.h>

@class NSString;
@protocol CRKFeedbackDelegate;

@interface SUICKPFeedbackAdapter : NSObject <SearchUIFeedbackDelegate, CRKFeedbackDelegateProxying>
{
    id <CRKFeedbackDelegate> _feedbackDelegate;
}

@property(nonatomic) __weak id <CRKFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
- (void)presentViewControllerForCard:(id)arg1 animate:(_Bool)arg2;
- (void)willDismissViewController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(_Bool)arg2;
- (void)didReportUserResponseFeedback:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (_Bool)shouldHandleCardSectionEngagement:(id)arg1;
- (id)feedbackListener;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
