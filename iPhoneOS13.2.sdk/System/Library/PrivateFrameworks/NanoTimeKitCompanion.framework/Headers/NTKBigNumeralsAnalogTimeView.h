//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>

@interface NTKBigNumeralsAnalogTimeView : NTKAnalogHandsView
{
}

- (double)_largeHandAlpha;
- (void)layoutSubviews;
- (double)_minuteHandDotDiameter;
- (void)applySecondHandTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (void)applyHourMinuteHandsTransitionFraction:(double)arg1 fromStrokeColor:(id)arg2 fromFillColor:(id)arg3 toStrokeColor:(id)arg4 toFillColor:(id)arg5;
- (id)initForDevice:(id)arg1;

@end
