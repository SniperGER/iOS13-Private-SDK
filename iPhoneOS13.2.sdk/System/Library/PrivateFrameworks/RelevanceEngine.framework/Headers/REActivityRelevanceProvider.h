//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@interface REActivityRelevanceProvider : RERelevanceProvider
{
    _Bool _closedActiveEngergy;
    _Bool _closedExerciseTime;
    _Bool _closedStandHour;
}

+ (id)relevanceSimulatorID;
@property(readonly, nonatomic) _Bool closedStandHour; // @synthesize closedStandHour=_closedStandHour;
@property(readonly, nonatomic) _Bool closedExerciseTime; // @synthesize closedExerciseTime=_closedExerciseTime;
@property(readonly, nonatomic) _Bool closedActiveEngergy; // @synthesize closedActiveEngergy=_closedActiveEngergy;
- (id)description;
- (unsigned long long)_hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithActiveEnergyState:(_Bool)arg1 exerciseTimeState:(_Bool)arg2 standHourState:(_Bool)arg3;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;

@end
