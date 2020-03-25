//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXLayoutGenerator.h>

@class NSIndexSet, PXMagazineLayoutTileMaker;

@interface PXEditorialLayoutGenerator : PXLayoutGenerator
{
    BOOL _isPrepared;
    PXMagazineLayoutTileMaker *_tileMaker;
    CGSize _actualSize;
    struct _PXLayoutGeometry _geometries;
    CGRect _rects;
    NSUInteger _geometriesCount;
    NSIndexSet *_geometrySet;
}

// - (void).cxx_destruct;
- (struct _PXLayoutGeometry)_geometryFromFrame:(CGRect)arg1 index:(NSUInteger)arg2;
- (void)_prepareIfNeeded;
- (void)_prepareBuffersForCount:(NSUInteger)arg1;
- (CGSize)size;
- (CGSize)estimatedSize;
- (void)_getHeaderGeometries:(struct _PXLayoutGeometry )arg1 inRange:(_NSRange)arg2;
- (void)_getContentGeometries:(struct _PXLayoutGeometry )arg1 inRange:(_NSRange)arg2;
- (void)getGeometries:(struct _PXLayoutGeometry )arg1 inRange:(_NSRange)arg2 withKind:(long long)arg3;
- (void)invalidate;
- (NSUInteger)numberOfGeometriesWithKind:(long long)arg1;
- (id)geometryKinds;
- (void)dealloc;
- (id)initWithMetrics:(id)arg1;

@end
