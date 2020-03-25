//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCHChartInfo;

__attribute__((visibility("hidden")))
@interface TSCH3DAbstractLimitingSeriesUpgrader : NSObject
{
    TSCHChartInfo *mChartInfo;
    id /* CDUnknownBlockType */ mWillModifyBlock;
}

+ (id)upgraderWithChartInfo:(id)arg1;
+ (double)depthFactorForAdjustingNumberOfSeries:(NSUInteger)arg1 chartType:(id)arg2 fromOldLimitingSeries:(NSUInteger)arg3 toNewLimitingSeries:(NSUInteger)arg4;
+ (BOOL)chartTypeUsesSeriesLimiting:(id)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ willModifyBlock; // @synthesize willModifyBlock=mWillModifyBlock;
- (void)upgradeForSpice:(BOOL)arg1 naturalSize:(CGSize)arg2;
- (void)mutateInfoByAdjustingScaleFromLayoutSettings:(const CDStruct_b1c75024 )arg1 toLayoutSettings:(const CDStruct_b1c75024 )arg2;
- (id)adjustedScaleFromLayoutSettings:(const CDStruct_b1c75024 )arg1 toLayoutSettings:(const CDStruct_b1c75024 )arg2;
- (NSUInteger)numberOfSeries;
- (void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2;
- (id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1;
- (void)mutateInfoWithMutations:(id)arg1;
- (id)configuredSceneWithLayoutSettings:(CDStruct_b1c75024)arg1;
- (void)configureScene:(id)arg1;
- (CDStruct_b1c75024)upgradedLayoutSettings;
- (CDStruct_b1c75024)oldLayoutSettings;
- (CDStruct_b1c75024)p_oldLayoutSettingsForSpice:(BOOL)arg1;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1;

@end
