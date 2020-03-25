//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDContainerInfo-Protocol.h>
#import <iWorkImport/TSDResizingAwareInfo-Protocol.h>

@class NSArray, TSDDrawableInfo, TSDGroupInfo, TSDInfoGeometry, TSPObject;
@protocol TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface TSDCounterRotateInfo : NSObject <TSDResizingAwareInfo, TSDContainerInfo>
{
    TSDInfoGeometry *_geometry;
    TSDGroupInfo *_parentGroup;
    TSDDrawableInfo *_childInfo;
    CGAffineTransform _counterTransform;
}

+ (id)infoGeometryInRootIncludingCounterRotateIfNeededForDrawable:(id)arg1;
+ (CGAffineTransform)counterTransformForTransformInRoot:(CGAffineTransform)arg1;
+ (id)p_infoGeometryForCounterTransform:(CGAffineTransform)arg1 isChildFlipped:(BOOL)arg2;
+ (id)infoGeometryForTransformInRoot:(CGAffineTransform)arg1 isChildFlipped:(BOOL)arg2;
@property(nonatomic) CGAffineTransform counterTransform; // @synthesize counterTransform=_counterTransform;
@property(readonly, nonatomic) __weak TSDDrawableInfo *childInfo; // @synthesize childInfo=_childInfo;
@property(readonly, nonatomic) __weak TSDGroupInfo *parentGroup; // @synthesize parentGroup=_parentGroup;
@property(copy, nonatomic) TSDInfoGeometry *geometry; // @synthesize geometry=_geometry;
// - (void).cxx_destruct;
- (id)infoForSelectionPath:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *childInfos;
- (id)copyWithContext:(id)arg1;
- (void)setPrimitiveGeometry:(id)arg1;
- (Class)repClass;
- (Class)layoutClass;
- (BOOL)isThemeContent;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (BOOL)isSelectable;
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
- (id)initWithChildInfo:(id)arg1 parentGroup:(id)arg2 counterTransform:(CGAffineTransform)arg3;

@end
