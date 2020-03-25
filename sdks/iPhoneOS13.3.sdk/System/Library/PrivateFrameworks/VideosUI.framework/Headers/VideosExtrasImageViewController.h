//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/VideosExtrasZoomingImageTransitionParticipant-Protocol.h>

@class MPUContentSizeLayoutConstraint, NSArray, NSAttributedString, NSString, UIActivityIndicatorView, UIImage, UILabel, UIView, VideosExtrasZoomableImageView, VideosExtrasZoomingImageInteractiveTransitionSourceContext;

__attribute__((visibility("hidden")))
@interface VideosExtrasImageViewController : UIViewController <VideosExtrasZoomingImageTransitionParticipant>
{
    BOOL _allowsPinchingImageForInteractiveZoomingImageTransition;
    BOOL _overlayHidden;
    NSUInteger _imageIndex;
    NSString *_zoomingImageTransitionIdentifier;
    UIActivityIndicatorView *_activityIndicatorView;
    VideosExtrasZoomableImageView *_zoomableImageView;
    NSArray *_gestureRecognizers;
    VideosExtrasZoomingImageInteractiveTransitionSourceContext *_interactiveTransitionSourceContext;
    UIView *_textContainmentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
    MPUContentSizeLayoutConstraint *_topLabelConstraint;
    MPUContentSizeLayoutConstraint *_subtitleLeadingConstraint;
    MPUContentSizeLayoutConstraint *_descriptionLeadingConstraint;
    MPUContentSizeLayoutConstraint *_bottomLabelConstraint;
}

@property(nonatomic) BOOL overlayHidden; // @synthesize overlayHidden=_overlayHidden;
@property(retain, nonatomic) MPUContentSizeLayoutConstraint *bottomLabelConstraint; // @synthesize bottomLabelConstraint=_bottomLabelConstraint;
@property(retain, nonatomic) MPUContentSizeLayoutConstraint *descriptionLeadingConstraint; // @synthesize descriptionLeadingConstraint=_descriptionLeadingConstraint;
@property(retain, nonatomic) MPUContentSizeLayoutConstraint *subtitleLeadingConstraint; // @synthesize subtitleLeadingConstraint=_subtitleLeadingConstraint;
@property(retain, nonatomic) MPUContentSizeLayoutConstraint *topLabelConstraint; // @synthesize topLabelConstraint=_topLabelConstraint;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *textContainmentView; // @synthesize textContainmentView=_textContainmentView;
@property(retain, nonatomic) VideosExtrasZoomingImageInteractiveTransitionSourceContext *interactiveTransitionSourceContext; // @synthesize interactiveTransitionSourceContext=_interactiveTransitionSourceContext;
@property(copy, nonatomic) NSArray *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
@property(retain, nonatomic) VideosExtrasZoomableImageView *zoomableImageView; // @synthesize zoomableImageView=_zoomableImageView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(copy, nonatomic) NSString *zoomingImageTransitionIdentifier; // @synthesize zoomingImageTransitionIdentifier=_zoomingImageTransitionIdentifier;
@property(nonatomic) BOOL allowsPinchingImageForInteractiveZoomingImageTransition; // @synthesize allowsPinchingImageForInteractiveZoomingImageTransition=_allowsPinchingImageForInteractiveZoomingImageTransition;
@property(nonatomic) NSUInteger imageIndex; // @synthesize imageIndex=_imageIndex;
// - (void).cxx_destruct;
- (void)_handleSingleTap:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handleDoubleTap:(id)arg1;
@property(retain, nonatomic) NSAttributedString *descriptionString;
@property(retain, nonatomic) NSAttributedString *subtitleString;
@property(retain, nonatomic) NSAttributedString *titleString;
@property(retain, nonatomic) UIImage *image;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (BOOL)prefersStatusBarHidden;
- (void)dealloc;

@end
