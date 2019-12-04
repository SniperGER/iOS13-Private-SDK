//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitTicketingSegment : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_paths;
    NSString *_segmentName;
    NSString *_ticketingUrl;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_paths:1;
        unsigned int read_segmentName:1;
        unsigned int read_ticketingUrl:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_paths:1;
        unsigned int wrote_segmentName:1;
        unsigned int wrote_ticketingUrl:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)pathType;
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
- (id)pathAtIndex:(unsigned long long)arg1;
- (unsigned long long)pathsCount;
- (void)_addNoFlagsPath:(id)arg1;
- (void)addPath:(id)arg1;
- (void)clearPaths;
@property(retain, nonatomic) NSMutableArray *paths;
- (void)_readPaths;
@property(retain, nonatomic) NSString *segmentName;
@property(readonly, nonatomic) _Bool hasSegmentName;
- (void)_readSegmentName;
@property(retain, nonatomic) NSString *ticketingUrl;
@property(readonly, nonatomic) _Bool hasTicketingUrl;
- (void)_readTicketingUrl;
- (id)initWithData:(id)arg1;
- (id)init;

@end
