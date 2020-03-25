//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@class PXSwipeDownSettings;

@interface PXViewControllerSwipeDownTransitionSettings : PXSettings
{
    BOOL _allowSwipeDown;
    double _minimumDimmingOpacity;
    PXSwipeDownSettings *_swipeDownSettings;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(retain, nonatomic) PXSwipeDownSettings *swipeDownSettings; // @synthesize swipeDownSettings=_swipeDownSettings;
@property(nonatomic) double minimumDimmingOpacity; // @synthesize minimumDimmingOpacity=_minimumDimmingOpacity;
@property(nonatomic) BOOL allowSwipeDown; // @synthesize allowSwipeDown=_allowSwipeDown;
// - (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parentSettings;

@end
