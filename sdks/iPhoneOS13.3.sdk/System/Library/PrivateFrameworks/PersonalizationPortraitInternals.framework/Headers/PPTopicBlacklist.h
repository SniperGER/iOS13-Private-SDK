//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock, _PASNotificationToken;

@interface PPTopicBlacklist : NSObject
{
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)indicesOfBlacklistedTopicsInScoredTopicArray:(id)arg1;
- (id)indicesOfBlacklistedTopicsInRecordArray:(id)arg1;
- (BOOL)shouldBlacklist:(id)arg1;
- (void)_loadAssetData;
- (void)dealloc;
- (id)_init;

@end
