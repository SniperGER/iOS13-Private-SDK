//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, PHImageRequestOptions;
@protocol PXDisplayAsset;

@protocol PXUIImageProvider 
- (void)cancelImageRequest:(long long)arg1;
- (long long)requestImageForAsset:(id <PXDisplayAsset>)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(PHImageRequestOptions *)arg4 resultHandler:(void (^)(UIImage *, NSDictionary *))arg5;
- (id)init;

@optional
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(NSArray *)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(PHImageRequestOptions *)arg4;
- (void)startCachingImagesForAssets:(NSArray *)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(PHImageRequestOptions *)arg4;
@end
