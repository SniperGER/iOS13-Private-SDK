//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/WFActionDocumentationViewDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateConfigurable-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateRepresentable-Protocol.h>

@class UIButton, UIScrollView, UIVisualEffectView, WFAction, WFActionDescriptionTitleView, WFActionDocumentationView, WFActionDrawerState;
@protocol WFActionDescriptionViewControllerDelegate;

@interface WFActionDescriptionViewController : UIViewController <UIScrollViewDelegate, WFActionDocumentationViewDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable>
{
    id <WFActionDescriptionViewControllerDelegate> _delegate;
    WFActionDescriptionTitleView *_titleView;
    UIButton *_dismissButton;
    UIScrollView *_scrollView;
    WFActionDocumentationView *_documentationView;
    UIVisualEffectView *_blurView;
}

@property(nonatomic) __weak UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(readonly, nonatomic) WFActionDocumentationView *documentationView; // @synthesize documentationView=_documentationView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(readonly, nonatomic) WFActionDescriptionTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <WFActionDescriptionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)moveToState:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) WFActionDrawerState *state;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint )arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)actionDocumentationViewDidSelectAddToWorkflowWithAction:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak WFAction *action;
- (id)init;

@end
