//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKDataMetadataSection.h>

@class HKDisplayTypeController, HKHealthStore, HKUnitPreferenceController, NSArray;
@protocol HKHeartbeatSequenceListMetadataSectionDelegate;

@interface HKHeartbeatSequenceListMetadataSection : HKDataMetadataSection
{
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
    id <HKHeartbeatSequenceListMetadataSectionDelegate> _delegate;
    NSArray *_sequencesSamples;
}

@property(retain, nonatomic) NSArray *sequencesSamples; // @synthesize sequencesSamples=_sequencesSamples;
@property(nonatomic) __weak id <HKHeartbeatSequenceListMetadataSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(retain, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;
- (void)_startAssociatedSequenceQueryForEvent:(id)arg1;
- (id)initWithEvent:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 delegate:(id)arg5;

@end
