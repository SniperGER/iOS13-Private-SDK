//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <Silex/SWReachabilityObserver-Protocol.h>
#import <Silex/SXAXCustomRotorItemProvider-Protocol.h>
#import <Silex/SXAnimatedImageDelegate-Protocol.h>
#import <Silex/SXDraggable-Protocol.h>

@class NSMapTable, NSString, NSTimer, SXAnimatedImage, SXImageResource, UIActivityIndicatorView, UIImage, UILongPressGestureRecognizer, UIView;
@protocol NSItemProviderWriting, SWReachabilityProvider, SXImageViewDelegate, SXResourceDataSource;

@interface SXImageView : UIImageView <SXAXCustomRotorItemProvider, SXAnimatedImageDelegate, SWReachabilityObserver, SXDraggable>
{
    BOOL _shouldShowLoadingIndicator;
    BOOL _scrubbingEnabled;
    BOOL _isScrubbing;
    BOOL _isDecorative;
    BOOL _autoPlayEnabled;
    BOOL _shouldResume;
    BOOL _shouldResumeAfterLoad;
    BOOL _paused;
    SXImageResource *_imageResource;
    id <SXImageViewDelegate> _delegate;
    SXAnimatedImage *_animatedImage;
    NSUInteger _frameIndex;
    id /* CDUnknownBlockType */ _frameChangeBlock;
    id <SXResourceDataSource> _resourceDataSource;
    id <SWReachabilityProvider> _reachabilityProvider;
    id /* CDUnknownBlockType */ _preferredQualityImageRequestCancelHandler;
    id /* CDUnknownBlockType */ _highQualityImageRequestCancelHandler;
    UIImage *_preferredQualityImage;
    UIImage *_highQualityImage;
    NSUInteger _preferredQualityInterest;
    NSUInteger _highQualityInterest;
    NSMapTable *_interestTable;
    UIActivityIndicatorView *_activityIndicatorView;
    NSUInteger _playCount;
    NSTimer *_activeTimer;
    NSUInteger _intendedFrameIndex;
    UILongPressGestureRecognizer *_scrubGesture;
    CGSize _preferredImageSize;
    CGSize _preferredQualityLoadingImageSize;
    CGPoint _previousPoint;
}

@property(nonatomic) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) CGPoint previousPoint; // @synthesize previousPoint=_previousPoint;
@property(retain, nonatomic) UILongPressGestureRecognizer *scrubGesture; // @synthesize scrubGesture=_scrubGesture;
@property(nonatomic) NSUInteger intendedFrameIndex; // @synthesize intendedFrameIndex=_intendedFrameIndex;
@property(retain, nonatomic) NSTimer *activeTimer; // @synthesize activeTimer=_activeTimer;
@property(nonatomic) NSUInteger playCount; // @synthesize playCount=_playCount;
@property(nonatomic) BOOL shouldResumeAfterLoad; // @synthesize shouldResumeAfterLoad=_shouldResumeAfterLoad;
@property(nonatomic) BOOL shouldResume; // @synthesize shouldResume=_shouldResume;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) NSMapTable *interestTable; // @synthesize interestTable=_interestTable;
@property(nonatomic) NSUInteger highQualityInterest; // @synthesize highQualityInterest=_highQualityInterest;
@property(nonatomic) NSUInteger preferredQualityInterest; // @synthesize preferredQualityInterest=_preferredQualityInterest;
@property(nonatomic) __weak UIImage *highQualityImage; // @synthesize highQualityImage=_highQualityImage;
@property(nonatomic) __weak UIImage *preferredQualityImage; // @synthesize preferredQualityImage=_preferredQualityImage;
@property(nonatomic) CGSize preferredQualityLoadingImageSize; // @synthesize preferredQualityLoadingImageSize=_preferredQualityLoadingImageSize;
@property(copy, nonatomic) id /* CDUnknownBlockType */ highQualityImageRequestCancelHandler; // @synthesize highQualityImageRequestCancelHandler=_highQualityImageRequestCancelHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ preferredQualityImageRequestCancelHandler; // @synthesize preferredQualityImageRequestCancelHandler=_preferredQualityImageRequestCancelHandler;
@property(readonly, nonatomic) id <SWReachabilityProvider> reachabilityProvider; // @synthesize reachabilityProvider=_reachabilityProvider;
@property(readonly, nonatomic) __weak id <SXResourceDataSource> resourceDataSource; // @synthesize resourceDataSource=_resourceDataSource;
@property(nonatomic) BOOL autoPlayEnabled; // @synthesize autoPlayEnabled=_autoPlayEnabled;
@property(copy, nonatomic) id /* CDUnknownBlockType */ frameChangeBlock; // @synthesize frameChangeBlock=_frameChangeBlock;
@property(nonatomic) NSUInteger frameIndex; // @synthesize frameIndex=_frameIndex;
@property(readonly, nonatomic) SXAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(nonatomic) BOOL isDecorative; // @synthesize isDecorative=_isDecorative;
@property(nonatomic) BOOL isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property(nonatomic) __weak id <SXImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CGSize preferredImageSize; // @synthesize preferredImageSize=_preferredImageSize;
@property(nonatomic) BOOL scrubbingEnabled; // @synthesize scrubbingEnabled=_scrubbingEnabled;
@property(nonatomic) BOOL shouldShowLoadingIndicator; // @synthesize shouldShowLoadingIndicator=_shouldShowLoadingIndicator;
@property(readonly, nonatomic) SXImageResource *imageResource; // @synthesize imageResource=_imageResource;
// - (void).cxx_destruct;
- (BOOL)accessibilityIgnoresInvertColors;
- (BOOL)isAccessibilityElement;
- (id)stringForAXDragAction;
- (void)didEndDragging;
- (void)didStartDragging;
@property(readonly, nonatomic) NSString *dragIdentifier;
@property(readonly, nonatomic) UIView *dragPreviewView;
@property(readonly, nonatomic) id <NSItemProviderWriting> dragObject;
- (id)itemsForCustomRotor:(id)arg1;
- (id)supportedCustomRotors;
- (void)animatedImage:(id)arg1 madeImageAvailableForFrameAtIndex:(NSUInteger)arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)resume;
- (void)pause;
- (void)setFrameIndex:(NSUInteger)arg1 allowNearest:(BOOL)arg2;
- (void)showNextFrame;
@property(readonly, nonatomic) BOOL containsAnimatedImage;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)handleScrubGesture:(id)arg1;
- (void)reachabilityChanged:(BOOL)arg1;
- (BOOL)isVisible;
- (void)fadeInImageWhenVisible:(id)arg1;
- (void)crossfadeToImage:(id)arg1;
- (CGSize)loadedImageSize;
@property(readonly, nonatomic) BOOL hasLoadedImage;
- (void)didReceiveMemoryWarning;
- (void)didLoadAnimatedImage:(id)arg1;
- (void)loadHighQualityImage;
- (void)loadPreferredQualityImage;
- (void)validateLoadedImage;
- (BOOL)objectHasQualityInterest:(id)arg1 quality:(int )arg2;
@property(readonly, nonatomic) BOOL prefersHighQuality;
@property(readonly, nonatomic) BOOL hasInterest;
- (void)giveUpInterestForObject:(id)arg1;
- (void)addInterestInImageQuality:(int)arg1 forObject:(id)arg2;
- (void)layoutActivityIndicator;
@property(nonatomic) long long loadingIndicatorStyle;
- (void)dealloc;
- (id)initWithImageResource:(id)arg1 resourceDataSource:(id)arg2 reachabilityProvider:(id)arg3;

@end
