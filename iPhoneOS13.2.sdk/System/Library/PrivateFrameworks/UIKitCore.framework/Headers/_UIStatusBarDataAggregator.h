//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSSet, _UIStatusBarData;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDataAggregator : NSObject
{
    _UIStatusBarData *_overlayData;
    id /* block */ _updateBlock;
    Class _dataClass;
    NSCountedSet *_delayedKeys;
    NSMutableDictionary *_pendingUpdates;
    NSMutableDictionary *_coalescedKeys;
    NSMutableDictionary *_coalescedTimers;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *coalescedTimers; // @synthesize coalescedTimers=_coalescedTimers;
@property(retain, nonatomic) NSMutableDictionary *coalescedKeys; // @synthesize coalescedKeys=_coalescedKeys;
@property(retain, nonatomic) NSMutableDictionary *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
@property(retain, nonatomic) NSCountedSet *delayedKeys; // @synthesize delayedKeys=_delayedKeys;
@property(copy, nonatomic) Class dataClass; // @synthesize dataClass=_dataClass;
@property(copy, nonatomic) id /* block */ updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy, nonatomic) _UIStatusBarData *overlayData; // @synthesize overlayData=_overlayData;
@property(readonly, copy, nonatomic) NSSet *coalescedEntryKeys;
- (void)endCoalescingUpdatesForEntryKeys:(id)arg1;
- (void)beginCoalescingUpdatesForEntryKeys:(id)arg1 delay:(double)arg2;
- (void)_coalescedUpdateForEntryKeys:(id)arg1;
- (void)_updateForCoalescedKeysWithData:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *delayedEntryKeys;
- (void)endDelayingUpdatesForEntryKeys:(id)arg1;
- (void)beginDelayingUpdatesForEntryKeys:(id)arg1;
- (void)_updateForDelayedKeysWithData:(id)arg1;
- (void)_updateForOverlayWithData:(id)arg1;
- (void)_updateFromPendingUpdatesForKeys:(id)arg1 block:(id /* block */)arg2;
- (id)_updatedDataFromData:(id)arg1 delayedKeys:(id)arg2;
- (void)updateWithData:(id)arg1;
- (id)initWithUpdateBlock:(id /* block */)arg1;

@end
