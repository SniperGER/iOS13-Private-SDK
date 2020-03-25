//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSLock, NSMutableArray, NSMutableDictionary;
@protocol STMSizeCacheDelegate;

@interface STMSizeCache : NSObject
{
    struct __CFString _prefsKey;
    NSMutableDictionary *_itemsByPath;
    NSMutableArray *_eventsToProcess;
    NSUInteger _cacheEventID;
    id <STMSizeCacheDelegate> _delegate;
    long long _totalSize;
    NSLock *_itemsLock;
}

@property(retain) NSLock *itemsLock; // @synthesize itemsLock=_itemsLock;
@property long long totalSize; // @synthesize totalSize=_totalSize;
@property __weak id <STMSizeCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSUInteger cacheEventID; // @synthesize cacheEventID=_cacheEventID;
// - (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (id)createCacheEntryForPath:(id)arg1;
- (void)sizeAllItems;
- (void)sizeItem:(id)arg1;
- (void)sizeItems:(id)arg1;
- (void)processCacheEvent:(id)arg1;
- (void)processCacheEvents:(id)arg1;
- (id)_sizeEntry:(id)arg1;
- (void)updateCacheID:(id)arg1;
@property(retain, nonatomic) NSArray *items;
- (id)itemsContainedBy:(id)arg1;
- (id)itemsContaining:(id)arg1;
- (void)_updateTotalSize;
- (id)sizeOfItem:(id)arg1;
@property(readonly) long long totalSizeOfItems;
@property(readonly) NSUInteger itemCount;
@property(readonly) NSDictionary *itemSizes;
- (void)notifySizesChanged;
- (void)notifyItemsChanged;
- (void)flushCacheToPref;
- (void)_flushCache:(id)arg1;
- (void)_writeCache;
- (void)loadCacheFromPref;
- (void)dealloc;
- (id)initWithPrefsKey:(id)arg1;

@end
