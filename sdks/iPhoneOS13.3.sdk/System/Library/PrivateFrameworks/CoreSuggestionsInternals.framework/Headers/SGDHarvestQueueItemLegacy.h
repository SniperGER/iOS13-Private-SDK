//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGDHarvestQueueItem.h>

@class SGDWorkQueueItem;

@interface SGDHarvestQueueItemLegacy : SGDHarvestQueueItem
{
    SGDWorkQueueItem *_workQueueItem;
    BOOL _highPriority;
}

// - (void).cxx_destruct;
- (id)description;
- (BOOL)highPriority;
- (void)markAsFailed;
- (void)finish;
- (void)dealloc;
- (id)initWithWorkQueueItem:(id)arg1 item:(id)arg2 highPriority:(BOOL)arg3;

@end
