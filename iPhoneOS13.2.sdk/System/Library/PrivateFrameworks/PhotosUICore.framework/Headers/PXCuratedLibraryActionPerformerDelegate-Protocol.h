//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAssetCollectionActionPerformerDelegate-Protocol.h>

@class PHFetchResult, PXActivitySharingContext, PXCuratedLibraryActionPerformer, PXGSpriteReference;

@protocol PXCuratedLibraryActionPerformerDelegate <PXAssetCollectionActionPerformerDelegate>

@optional
- (void)curatedLibraryActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 presentFilterPopoverFromSpriteReference:(PXGSpriteReference *)arg2 insets:(struct UIEdgeInsets)arg3;
- (void)curatedLibraryActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 presentShareSheetWithSharingContext:(PXActivitySharingContext *)arg2;
- (void)curatedLibraryActionPerformer:(PXCuratedLibraryActionPerformer *)arg1 showMapWithAssetsFetchResult:(PHFetchResult *)arg2;
@end
