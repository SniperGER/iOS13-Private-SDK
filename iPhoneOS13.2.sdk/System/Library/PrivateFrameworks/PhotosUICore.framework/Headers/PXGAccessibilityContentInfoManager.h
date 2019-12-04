//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXGMutableAccessibilityContentInfoManager-Protocol.h>

@class NSArray, NSString;

@interface PXGAccessibilityContentInfoManager : PXObservable <PXGMutableAccessibilityContentInfoManager>
{
    NSArray *_visibleAccessibilityContentInfos;
    NSArray *_extendedAccessibilityContentInfos;
    NSArray *_extendedAccessibilityGroupContentInfos;
}

@property(readonly, nonatomic) NSArray *extendedAccessibilityGroupContentInfos; // @synthesize extendedAccessibilityGroupContentInfos=_extendedAccessibilityGroupContentInfos;
@property(readonly, nonatomic) NSArray *extendedAccessibilityContentInfos; // @synthesize extendedAccessibilityContentInfos=_extendedAccessibilityContentInfos;
@property(readonly, nonatomic) NSArray *visibleAccessibilityContentInfos; // @synthesize visibleAccessibilityContentInfos=_visibleAccessibilityContentInfos;
- (void)setExtendedAccessibilityGroupContentInfos:(id)arg1;
- (void)setExtendedAccessibilityContentInfos:(id)arg1;
- (void)setVisibleAccessibilityContentInfos:(id)arg1;
- (void)performChanges:(id /* block */)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
