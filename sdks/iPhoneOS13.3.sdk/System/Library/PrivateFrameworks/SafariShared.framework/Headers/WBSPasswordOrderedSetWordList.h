//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSPasswordWordList.h>

@class NSOrderedSet;

@interface WBSPasswordOrderedSetWordList : WBSPasswordWordList
{
    NSOrderedSet *_words;
    BOOL _sensitive;
}

@property(readonly, nonatomic, getter=isSensitive) BOOL sensitive; // @synthesize sensitive=_sensitive;
// - (void).cxx_destruct;
- (void)enumerateEntriesForString:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (id)initWithIdentifier:(id)arg1 isSensitive:(BOOL)arg2 orderedWordsArray:(id)arg3;
- (id)initWithIdentifier:(id)arg1 isSensitive:(BOOL)arg2 orderedWords:(id)arg3;

@end
