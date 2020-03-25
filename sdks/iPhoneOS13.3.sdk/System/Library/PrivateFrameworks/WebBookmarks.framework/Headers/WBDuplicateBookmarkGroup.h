//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, WebBookmark;

__attribute__((visibility("hidden")))
@interface WBDuplicateBookmarkGroup : NSObject
{
    NSMutableArray *_dupicateBookmarks;
    NSMutableArray *_dupicateBookmarksToKeep;
    BOOL _foundDuplicates;
    WebBookmark *_originalBookmark;
}

@property(readonly, nonatomic) BOOL foundDuplicates; // @synthesize foundDuplicates=_foundDuplicates;
@property(readonly, nonatomic) WebBookmark *originalBookmark; // @synthesize originalBookmark=_originalBookmark;
// - (void).cxx_destruct;
- (void)removeAllDuplicates;
- (void)exchangeOriginalBookmarkWithBookmark:(id)arg1;
- (void)addDuplicateBookmarkToKeep:(id)arg1;
- (void)addDuplicateBookmark:(id)arg1 replaceOriginal:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *duplicatesToKeep;
@property(readonly, nonatomic) NSArray *duplicates;
- (id)initWithOriginalBookmark:(id)arg1;

@end
