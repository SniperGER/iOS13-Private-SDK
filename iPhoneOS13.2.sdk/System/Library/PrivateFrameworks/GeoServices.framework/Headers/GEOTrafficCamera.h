//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOLatLng, GEOMiniCard, NSString, PBDataReader, PBUnknownFields;

@interface GEOTrafficCamera : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_identifier;
    GEOMiniCard *_infoCard;
    GEOLatLng *_position;
    NSString *_speedLimitText;
    double _speedThreshold;
    GEOMiniCard *_speedingCard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _cameraPriority;
    unsigned int _highlightDistance;
    int _type;
    struct {
        unsigned int has_speedThreshold:1;
        unsigned int has_cameraPriority:1;
        unsigned int has_highlightDistance:1;
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_identifier:1;
        unsigned int read_infoCard:1;
        unsigned int read_position:1;
        unsigned int read_speedLimitText:1;
        unsigned int read_speedingCard:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_identifier:1;
        unsigned int wrote_infoCard:1;
        unsigned int wrote_position:1;
        unsigned int wrote_speedLimitText:1;
        unsigned int wrote_speedThreshold:1;
        unsigned int wrote_speedingCard:1;
        unsigned int wrote_cameraPriority:1;
        unsigned int wrote_highlightDistance:1;
        unsigned int wrote_type:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(nonatomic) _Bool hasCameraPriority;
@property(nonatomic) unsigned int cameraPriority;
@property(retain, nonatomic) GEOMiniCard *speedingCard;
@property(readonly, nonatomic) _Bool hasSpeedingCard;
- (void)_readSpeedingCard;
@property(nonatomic) _Bool hasSpeedThreshold;
@property(nonatomic) double speedThreshold;
@property(retain, nonatomic) NSString *speedLimitText;
@property(readonly, nonatomic) _Bool hasSpeedLimitText;
- (void)_readSpeedLimitText;
@property(retain, nonatomic) GEOMiniCard *infoCard;
@property(readonly, nonatomic) _Bool hasInfoCard;
- (void)_readInfoCard;
@property(nonatomic) _Bool hasHighlightDistance;
@property(nonatomic) unsigned int highlightDistance;
@property(retain, nonatomic) GEOLatLng *position;
@property(readonly, nonatomic) _Bool hasPosition;
- (void)_readPosition;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(retain, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (void)_readIdentifier;
- (id)initWithData:(id)arg1;
- (id)init;

@end
