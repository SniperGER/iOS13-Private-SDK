//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitCompoundBox.h>

@interface EQKitVBox : EQKitCompoundBox
{
    NSUInteger mPivotIndex;
}

@property(readonly, nonatomic) NSUInteger pivotIndex; // @synthesize pivotIndex=mPivotIndex;
- (CGRect)p_cacheErasableBounds;
- (void)p_cacheDimensionsForHeight:(double )arg1 depth:(double )arg2 width:(double )arg3;
- (id)description;
- (BOOL)p_getTransform:(CGAffineTransform )arg1 fromDescendant:(id)arg2;
- (BOOL)appendOpticalAlignToSpec:(struct Spec )arg1 offset:(CGPoint)arg2;
- (void)renderIntoContext:(CGContext )arg1 offset:(CGPoint)arg2;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithChildBoxes:(id)arg1;
- (id)initWithChildBoxes:(id)arg1 pivotIndex:(NSUInteger)arg2;

@end
