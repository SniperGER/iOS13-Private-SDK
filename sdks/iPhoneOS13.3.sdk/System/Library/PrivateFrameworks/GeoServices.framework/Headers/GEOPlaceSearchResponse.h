//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOMapRegion, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPlaceSearchResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_namedFeatures;
    NSString *_nearbySectionHeader;
    NSMutableArray *_placeResults;
    NSMutableArray *_suggestionEntryLists;
    NSData *_suggestionMetadata;
    double _turnaroundTime;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _statusCodeInfo;
    int _status;
    BOOL _isChainResultSet;
    struct {
        unsigned int has_turnaroundTime:1;
        unsigned int has_statusCodeInfo:1;
        unsigned int has_isChainResultSet:1;
        unsigned int read_unknownFields:1;
        unsigned int read_mapRegion:1;
        unsigned int read_namedFeatures:1;
        unsigned int read_nearbySectionHeader:1;
        unsigned int read_placeResults:1;
        unsigned int read_suggestionEntryLists:1;
        unsigned int read_suggestionMetadata:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_namedFeatures:1;
        unsigned int wrote_nearbySectionHeader:1;
        unsigned int wrote_placeResults:1;
        unsigned int wrote_suggestionEntryLists:1;
        unsigned int wrote_suggestionMetadata:1;
        unsigned int wrote_turnaroundTime:1;
        unsigned int wrote_statusCodeInfo:1;
        unsigned int wrote_status:1;
        unsigned int wrote_isChainResultSet:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)namedFeaturesType;
+ (Class)suggestionEntryListsType;
+ (Class)placeResultType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsChainResultSet;
@property(nonatomic) BOOL isChainResultSet;
@property(retain, nonatomic) NSString *nearbySectionHeader;
@property(readonly, nonatomic) BOOL hasNearbySectionHeader;
- (void)_readNearbySectionHeader;
@property(nonatomic) BOOL hasTurnaroundTime;
@property(nonatomic) double turnaroundTime;
- (int)StringAsStatusCodeInfo:(id)arg1;
- (id)statusCodeInfoAsString:(int)arg1;
@property(nonatomic) BOOL hasStatusCodeInfo;
@property(nonatomic) int statusCodeInfo;
- (id)namedFeaturesAtIndex:(NSUInteger)arg1;
- (NSUInteger)namedFeaturesCount;
- (void)_addNoFlagsNamedFeatures:(id)arg1;
- (void)addNamedFeatures:(id)arg1;
- (void)clearNamedFeatures;
@property(retain, nonatomic) NSMutableArray *namedFeatures;
- (void)_readNamedFeatures;
@property(retain, nonatomic) NSData *suggestionMetadata;
@property(readonly, nonatomic) BOOL hasSuggestionMetadata;
- (void)_readSuggestionMetadata;
- (id)suggestionEntryListsAtIndex:(NSUInteger)arg1;
- (NSUInteger)suggestionEntryListsCount;
- (void)_addNoFlagsSuggestionEntryLists:(id)arg1;
- (void)addSuggestionEntryLists:(id)arg1;
- (void)clearSuggestionEntryLists;
@property(retain, nonatomic) NSMutableArray *suggestionEntryLists;
- (void)_readSuggestionEntryLists;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) BOOL hasMapRegion;
- (void)_readMapRegion;
- (id)placeResultAtIndex:(NSUInteger)arg1;
- (NSUInteger)placeResultsCount;
- (void)_addNoFlagsPlaceResult:(id)arg1;
- (void)addPlaceResult:(id)arg1;
- (void)clearPlaceResults;
@property(retain, nonatomic) NSMutableArray *placeResults;
- (void)_readPlaceResults;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) int status;
- (id)initWithData:(id)arg1;
- (id)init;

@end
