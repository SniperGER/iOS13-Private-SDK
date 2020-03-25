//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ACHAchievementStore, ACHTemplateStore, NSObject, NSString;
@protocol ACHEarnedInstanceAwarding, ACHTemplateSource;

@protocol ACHAchievementsProfileExtending <NSObject>
@property(readonly, nonatomic) ACHTemplateStore *templateStore;
@property(readonly, nonatomic) ACHAchievementStore *achievementStore;
- (void)requestIncrementalEvaluationForAwardingSource:(NSString *)arg1 evaluationBlock:(NSSet * (^)(NSDateInterval *))arg2;
- (void)requestImmediateUpdateForTemplateSource:(NSObject<ACHTemplateSource> *)arg1;
- (void)deregisterTemplateSource:(NSObject<ACHTemplateSource> *)arg1 awardingSource:(NSObject<ACHEarnedInstanceAwarding> *)arg2;
- (void)registerTemplateSource:(NSObject<ACHTemplateSource> *)arg1 awardingSource:(NSObject<ACHEarnedInstanceAwarding> *)arg2;
@end
