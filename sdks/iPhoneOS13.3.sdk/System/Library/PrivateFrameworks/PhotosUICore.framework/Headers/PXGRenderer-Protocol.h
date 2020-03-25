//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, PXGChangeDetails, PXGLayout, PXGSpriteDataStore, PXGSpriteMetadataStore;
@protocol PXGRendererDelegate, PXGTextureConverter;

@protocol PXGRenderer <NSObject>
@property(readonly, nonatomic) id <PXGTextureConverter> textureConverter;
@property(readonly, nonatomic) int presentationType;
@property(nonatomic) CDStruct_93894d6c interactionState;
@property(nonatomic) CGRect visibleRect;
@property(nonatomic) __weak id <PXGRendererDelegate> delegate;
- (void)renderSpritesWithTextures:(NSArray *)arg1 dataStore:(PXGSpriteDataStore *)arg2 presentationDataStore:(PXGSpriteDataStore *)arg3 presentationMetadataStore:(PXGSpriteMetadataStore *)arg4 layout:(PXGLayout *)arg5;
- (void)updateWithChangeDetails:(PXGChangeDetails *)arg1;
- (void)setNeedsRender;

@optional
@property(copy, nonatomic) id /* CDUnknownBlockType */ test_renderSnapshotHandler;
@end
