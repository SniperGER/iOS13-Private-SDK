//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>



@class NSArray;

__attribute__((visibility("hidden")))
@interface TSTColumnAggregateList : TSKSosBase <NSCopying>
{
    NSArray *_columnAggregates;
}

-     // Error parsing type: v32@0:8^{ColumnAggregateListArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TST::ColumnAggregateArchive>=^{Arena}ii^{Rep}}}16@24, name: encodeToArchive:archiver:
-     // Error parsing type: @24@0:8r^{ColumnAggregateListArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TST::ColumnAggregateArchive>=^{Arena}ii^{Rep}}}16, name: initWithArchive:
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)aggregatesOnLevel:(unsigned char)arg1;
@property(readonly, nonatomic) NSArray *asArray;
- (id)initWithColumnAggregates:(id)arg1;

@end
