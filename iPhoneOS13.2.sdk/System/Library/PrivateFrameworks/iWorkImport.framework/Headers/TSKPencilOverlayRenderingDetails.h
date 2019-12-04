//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSKPKDrawing, TSKPencilOverlayAnchorSelectionRectangle, TSPData, TSUBezierPath, TSUImage;
@protocol TSKPencilAnnotationStorage;

__attribute__((visibility("hidden")))
@interface TSKPencilOverlayRenderingDetails : NSObject
{
    id <TSKPencilAnnotationStorage> _pencilAnnotationStorage;
    TSUImage *_scaledImage;
    TSPData *_dataToInvalidateFromAfterDownload;
    TSKPKDrawing *_subDrawing;
    TSUBezierPath *_transformedPath;
    unsigned long long _pageIndex;
    TSKPencilOverlayAnchorSelectionRectangle *_unscaledSelectionRectangle;
    struct CGRect _unscaledImageClipRect;
    struct CGRect _unscaledImageFrame;
}

+ (struct CGColor *)fillColorForPenColor:(id)arg1;
+ (struct CGColor *)strokeColorForPenColor:(id)arg1 attachedType:(long long)arg2;
+ (id)p_baseColorForPenColor:(id)arg1;
@property(retain, nonatomic) TSKPencilOverlayAnchorSelectionRectangle *unscaledSelectionRectangle; // @synthesize unscaledSelectionRectangle=_unscaledSelectionRectangle;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) TSUBezierPath *transformedPath; // @synthesize transformedPath=_transformedPath;
@property(nonatomic) struct CGRect unscaledImageFrame; // @synthesize unscaledImageFrame=_unscaledImageFrame;
@property(nonatomic) struct CGRect unscaledImageClipRect; // @synthesize unscaledImageClipRect=_unscaledImageClipRect;
@property(retain, nonatomic) TSKPKDrawing *subDrawing; // @synthesize subDrawing=_subDrawing;
@property(retain, nonatomic) TSPData *dataToInvalidateFromAfterDownload; // @synthesize dataToInvalidateFromAfterDownload=_dataToInvalidateFromAfterDownload;
@property(retain, nonatomic) TSUImage *scaledImage; // @synthesize scaledImage=_scaledImage;
@property(retain, nonatomic) id <TSKPencilAnnotationStorage> pencilAnnotationStorage; // @synthesize pencilAnnotationStorage=_pencilAnnotationStorage;
- (id)description;
- (_Bool)containsPointForHitTesting:(struct CGPoint)arg1;
- (id)initWithPencilAnnotation:(id)arg1;

@end
