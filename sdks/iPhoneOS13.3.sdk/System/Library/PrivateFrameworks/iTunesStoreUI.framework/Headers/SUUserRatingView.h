//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface SUUserRatingView : UIView
{
    float _value;
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
}

+ (double)reflectionHeight;
+ (id)copyImageForRating:(float)arg1 backgroundColor:(id)arg2 style:(long long)arg3;
- (CGRect)_foregroundImageClipBounds;
- (void)layoutSubviews;
- (void)setValue:(float)arg1;
- (float)heightWithoutReflection;
- (id)initWithStyle:(long long)arg1;
- (id)initWithForeground:(id)arg1 background:(id)arg2;
- (id)init;

@end
