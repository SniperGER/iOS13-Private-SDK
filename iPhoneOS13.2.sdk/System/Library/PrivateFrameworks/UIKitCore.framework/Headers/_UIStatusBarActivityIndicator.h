//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIActivityIndicatorView.h"

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIStatusBarActivityIndicator : UIActivityIndicatorView <_UIStatusBarDisplayable>
{
    UIEdgeInsets _alignmentRectInsets;
}

@property(nonatomic) UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
- (void)applyStyleAttributes:(id)arg1;
@property(readonly, nonatomic) BOOL wantsCrossfade;

@end
