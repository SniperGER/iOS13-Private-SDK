//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthToolbox/WDAddDataManualEntryItem.h>

#import <HealthToolbox/WDAddDataManualEntryItemDelegate-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _WDTwoPartDateRangeManualEntryItem : WDAddDataManualEntryItem <WDAddDataManualEntryItemDelegate>
{
    WDAddDataManualEntryItem *_startItem;
    WDAddDataManualEntryItem *_endItem;
    NSDate *_maximumEndDate;
}

- (void)beginEditing;
- (id)generateValue;
- (void)_endItemDidChange;
- (void)_startItemDidChange;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (void)_setupEntryItems;
- (id)tableViewCells;
- (id)initWithMaximumEndDate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
