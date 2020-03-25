//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class KNAnimatedBuild, KNAnimationRandomGenerator, NSArray, NSDictionary, TSDAnimationSet, TSDGLState, TSDMetalContext, TSDMetalTextureRenderer;

@protocol KNAnimationPluginContext <NSObject>
@property(readonly, nonatomic) BOOL isWarmingUp;
@property(readonly, nonatomic) TSDGLState *GLState;
@property(readonly, nonatomic) BOOL hasLiveTextureSources;
@property(readonly, nonatomic) BOOL isMovieExport;
@property(readonly, nonatomic) BOOL isPreview;
@property(readonly, nonatomic) BOOL isMetalRenderer;
@property(readonly, nonatomic) BOOL isOpenGLRenderer;
@property(readonly, nonatomic) BOOL isFrameRenderer;
@property(readonly, nonatomic) BOOL isMagicMove;
@property(readonly, nonatomic) BOOL isTransition;
@property(readonly, nonatomic) BOOL isBuild;
@property(readonly, nonatomic) NSArray *magicMoveMatches;
@property(readonly, nonatomic) NSDictionary *transitionAttributes;
@property(readonly, nonatomic) KNAnimatedBuild *animatedBuild;
@property(nonatomic) CGRect boundingRect;
@property(readonly, nonatomic) CGRect boundingRectOnCanvas;
@property(readonly, nonatomic) CGRect animationFrame;
@property(readonly, nonatomic) CGRect drawableFrame;
@property(readonly, nonatomic) TSDMetalContext *metalContext;
@property(readonly, nonatomic) KNAnimationRandomGenerator *randomGenerator;
@property(readonly, nonatomic) BOOL isMotionBlurred;
@property(readonly, nonatomic) double percent;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSUInteger direction;
@property(readonly, nonatomic) NSArray *tags;
@property(readonly, nonatomic) NSArray *scaledTextures;
@property(readonly, nonatomic) TSDAnimationSet *animationSet;
@property(readonly, nonatomic) TSDMetalTextureRenderer *metalTextureRenderer;
@property(readonly, nonatomic) NSArray *textures;
@end
