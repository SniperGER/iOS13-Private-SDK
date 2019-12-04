//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBUInt64Array : NSObject <NSCopying>
{
    GPBMessage *_autocreator;
    unsigned long long *_values;
    unsigned long long _count;
    unsigned long long _capacity;
}

+ (id)arrayWithCapacity:(unsigned long long)arg1;
+ (id)arrayWithValueArray:(id)arg1;
+ (id)arrayWithValue:(unsigned long long)arg1;
+ (id)array;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;
- (void)removeAll;
- (void)removeValueAtIndex:(unsigned long long)arg1;
- (void)addValuesFromArray:(id)arg1;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(unsigned long long)arg2;
- (void)insertValue:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)addValues:(const unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)addValue:(unsigned long long)arg1;
- (void)internalResizeToCapacity:(unsigned long long)arg1;
- (unsigned long long)valueAtIndex:(unsigned long long)arg1;
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateValuesWithBlock:(id /* block */)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithValues:(const unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)initWithValueArray:(id)arg1;
- (id)init;

@end
