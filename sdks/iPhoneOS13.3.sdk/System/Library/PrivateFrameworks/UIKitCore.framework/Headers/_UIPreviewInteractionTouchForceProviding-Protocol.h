//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol UICoordinateSpace;

@protocol _UIPreviewInteractionTouchForceProviding <NSObject>
@property(readonly, nonatomic) double touchForce;
@property(readonly, nonatomic, getter=isActive) BOOL active;
- (void)cancelInteraction;
- (CGPoint)locationInCoordinateSpace:(id <UICoordinateSpace>)arg1;
@end
