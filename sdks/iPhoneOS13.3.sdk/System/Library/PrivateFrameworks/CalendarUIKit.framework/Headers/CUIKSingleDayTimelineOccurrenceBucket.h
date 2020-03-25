//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUIKSingleDayTimelineLayoutPartition, NSArray, NSMutableArray;
@protocol CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils, CUIKSingleDayTimelineViewItem;

@interface CUIKSingleDayTimelineOccurrenceBucket : NSObject
{
    id <CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtBeginning;
    id <CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtEnd;
    id <CUIKSingleDayTimelineLayoutScreenUtils> _screenUtilsDelegate;
    BOOL _useTemporaryFitnessLevel;
    BOOL _temporaryFitnessLevelRequiresCalculation;
    double _temporaryFitnessLevel;
    BOOL _originalFitnessLevelRequiresCalculation;
    double _originalFitnessLevel;
    BOOL _ignoreFirstOccurrenceInFitnessCalculations;
    BOOL _ignoreLastOccurrenceInFitnessCalculations;
    BOOL _isOnlyBucket;
    CUIKSingleDayTimelineLayoutPartition *_correspondingPartition;
    id <CUIKSingleDayTimelineGeometryDelegate> _geometryDelegate;
    NSMutableArray *_currentOccurrences;
}

@property(retain, nonatomic) NSMutableArray *currentOccurrences; // @synthesize currentOccurrences=_currentOccurrences;
@property __weak id <CUIKSingleDayTimelineGeometryDelegate> geometryDelegate; // @synthesize geometryDelegate=_geometryDelegate;
@property(nonatomic) BOOL isOnlyBucket; // @synthesize isOnlyBucket=_isOnlyBucket;
@property(retain, nonatomic) CUIKSingleDayTimelineLayoutPartition *correspondingPartition; // @synthesize correspondingPartition=_correspondingPartition;
// - (void).cxx_destruct;
- (void)stampFramesOntoOccurrences;
- (void)makeTemporaryChangesPermanent;
- (void)revertTemporaryChanges;
- (void)removeOccurrenceAtEndTemporarily;
- (void)removeOccurrenceAtBeginningTemporarily;
- (void)addOccurrenceTemporarilyToEnd:(id)arg1;
- (void)addOccurrenceTemporarilyToBeginning:(id)arg1;
- (id)earliestOccurrence;
- (id)_occurrencesForFitnessLevel;
@property(readonly, nonatomic) NSArray *occurrences;
- (id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3 geometryDelegate:(id)arg4;
- (id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3;

@end
