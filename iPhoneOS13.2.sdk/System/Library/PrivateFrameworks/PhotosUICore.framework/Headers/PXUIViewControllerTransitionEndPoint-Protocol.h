//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class PXRegionOfInterest, PXUIViewControllerTransition, UIColor;

@protocol PXUIViewControllerTransitionEndPoint 

@optional
@property(readonly, nonatomic) _Bool keepsSourceRegionOfInterestContent;
- (void)prepareForInteractiveTransition:(PXUIViewControllerTransition *)arg1;
- (void)restoreBackgroundColor:(UIColor *)arg1 forTransition:(PXUIViewControllerTransition *)arg2;
- (UIColor *)removeBackgroundColorForTransition:(PXUIViewControllerTransition *)arg1;
- (void)scrollRegionOfInterestToVisible:(PXRegionOfInterest *)arg1 forTransition:(PXUIViewControllerTransition *)arg2;
- (void)preloadWithSourceRegionOfInterest:(PXRegionOfInterest *)arg1 forTransition:(PXUIViewControllerTransition *)arg2;
- (PXRegionOfInterest *)regionOfInterestForTransition:(PXUIViewControllerTransition *)arg1;
@end
