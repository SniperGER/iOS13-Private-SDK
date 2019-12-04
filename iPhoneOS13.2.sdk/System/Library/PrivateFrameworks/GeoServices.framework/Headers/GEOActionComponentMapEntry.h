//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



__attribute__((visibility("hidden")))
@interface GEOActionComponentMapEntry : PBCodable <NSCopying>
{
    CDStruct_95bda58d _placeDataComponents;
    int _actionComponent;
    struct {
        unsigned int has_actionComponent:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setPlaceDataComponents:(int *)arg1 count:(unsigned long long)arg2;
- (int)placeDataComponentsAtIndex:(unsigned long long)arg1;
- (void)addPlaceDataComponents:(int)arg1;
- (void)clearPlaceDataComponents;
@property(readonly, nonatomic) int *placeDataComponents;
@property(readonly, nonatomic) unsigned long long placeDataComponentsCount;
- (int)StringAsActionComponent:(id)arg1;
- (id)actionComponentAsString:(int)arg1;
@property(nonatomic) _Bool hasActionComponent;
@property(nonatomic) int actionComponent;
- (void)dealloc;

@end
