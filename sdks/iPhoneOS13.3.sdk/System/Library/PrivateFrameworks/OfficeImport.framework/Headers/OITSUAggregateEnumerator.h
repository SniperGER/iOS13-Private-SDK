//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OITSUAggregateEnumerator : NSEnumerator
{
    NSMutableArray *_objects;
}

+ (id)aggregateEnumeratorWithObjects:(id)arg1;
- (id)nextObject;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithObjects:(id)arg1;
- (id)initWithFirstObject:(id)arg1 argumentList:(struct __va_list_tag [1])arg2;

@end
