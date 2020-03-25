//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTileTransitionAnimationCoordinator-Protocol.h>

@protocol NSObject;

@interface PXTileTransitionSimpleAnimationCoordinator : NSObject <PXTileTransitionAnimationCoordinator>
{
    id <NSObject> _animationOptions;
}

@property(readonly, nonatomic) id <NSObject> animationOptions; // @synthesize animationOptions=_animationOptions;
// - (void).cxx_destruct;
- (BOOL)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(struct PXTileIdentifier)arg1 fromGeometry:(struct PXTileGeometry)arg2 fromUserData:(id)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;
- (BOOL)getFinalGeometry:(out struct PXTileGeometry )arg1 finalUserData:(out id )arg2 forDisappearingTileWithIdentifier:(struct PXTileIdentifier)arg3 fromGeometry:(struct PXTileGeometry)arg4 fromUserData:(id)arg5;
- (BOOL)getInitialGeometry:(out struct PXTileGeometry )arg1 initialUserData:(out id )arg2 forAppearingTileWithIdentifier:(struct PXTileIdentifier)arg3 toGeometry:(struct PXTileGeometry)arg4 toUserData:(id)arg5;
- (id)optionsForAnimatingTileWithIdentifier:(struct PXTileIdentifier)arg1 animationType:(long long)arg2 fromGeometry:(struct PXTileGeometry)arg3 fromUserData:(id)arg4 toGeometry:(struct PXTileGeometry)arg5 toUserData:(id)arg6;
- (id)initWithAnimationOptions:(id)arg1;
- (id)init;

@end
