//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLatLng, NSData, PBDataReader;

@interface GEORPPhotoWithMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    double _creationDate;
    NSData *_data;
    GEOLatLng *_geotagCoordinate;
    double _geotagHorizontalAccuracy;
    double _geotagTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_creationDate:1;
        unsigned int has_geotagHorizontalAccuracy:1;
        unsigned int has_geotagTimestamp:1;
        unsigned int read_data:1;
        unsigned int read_geotagCoordinate:1;
        unsigned int wrote_creationDate:1;
        unsigned int wrote_data:1;
        unsigned int wrote_geotagCoordinate:1;
        unsigned int wrote_geotagHorizontalAccuracy:1;
        unsigned int wrote_geotagTimestamp:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasGeotagTimestamp;
@property(nonatomic) double geotagTimestamp;
@property(nonatomic) BOOL hasGeotagHorizontalAccuracy;
@property(nonatomic) double geotagHorizontalAccuracy;
@property(retain, nonatomic) GEOLatLng *geotagCoordinate;
@property(readonly, nonatomic) BOOL hasGeotagCoordinate;
- (void)_readGeotagCoordinate;
@property(nonatomic) BOOL hasCreationDate;
@property(nonatomic) double creationDate;
@property(retain, nonatomic) NSData *data;
@property(readonly, nonatomic) BOOL hasData;
- (void)_readData;
- (id)initWithData:(id)arg1;
- (id)init;

@end
