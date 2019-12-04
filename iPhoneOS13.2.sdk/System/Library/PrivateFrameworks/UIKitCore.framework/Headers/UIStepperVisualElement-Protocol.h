//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UIEvent, UIImage, UITouch;
@protocol UIStepperControl;

@protocol UIStepperVisualElement 
+ (struct UIEdgeInsets)initialAlignmentRectInsets;
+ (struct CGSize)initialIntrinsicSize;
+ (struct CGSize)initialSize;
+ (id)new;
@property(nonatomic) __weak id <UIStepperControl> stepperControl;
@property(nonatomic) _Bool autorepeat;
@property(nonatomic) _Bool wraps;
@property(nonatomic, getter=isContinuous) _Bool continuous;
@property(nonatomic) double stepValue;
@property(nonatomic) double maximumValue;
@property(nonatomic) double minimumValue;
@property(nonatomic) double value;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forControl:(id <UIStepperControl>)arg2;
- (struct CGSize)intrinsicSizeWithinSize:(struct CGSize)arg1 forControl:(id <UIStepperControl>)arg2;
- (struct UIEdgeInsets)alignmentRectInsetsForControl:(id <UIStepperControl>)arg1;
- (UIImage *)decrementImageForState:(unsigned long long)arg1;
- (void)setDecrementImage:(UIImage *)arg1 forState:(unsigned long long)arg2;
- (UIImage *)incrementImageForState:(unsigned long long)arg1;
- (void)setIncrementImage:(UIImage *)arg1 forState:(unsigned long long)arg2;
- (UIImage *)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;
- (void)setDividerImage:(UIImage *)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
- (UIImage *)backgroundImageForState:(unsigned long long)arg1;
- (void)setBackgroundImage:(UIImage *)arg1 forState:(unsigned long long)arg2;
- (void)cancelTrackingWithEvent:(UIEvent *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (_Bool)continueTrackingWithTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (_Bool)beginTrackingWithTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
@end
