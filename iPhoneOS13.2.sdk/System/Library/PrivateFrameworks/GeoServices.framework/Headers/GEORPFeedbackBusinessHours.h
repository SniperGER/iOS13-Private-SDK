//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOPDHours, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackBusinessHours : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_comments;
    unsigned long long _end;
    unsigned long long _start;
    GEOPDHours *_weeklyHours;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _hoursType;
    struct {
        unsigned int has_end:1;
        unsigned int has_start:1;
        unsigned int has_hoursType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_comments:1;
        unsigned int read_weeklyHours:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_comments:1;
        unsigned int wrote_end:1;
        unsigned int wrote_start:1;
        unsigned int wrote_weeklyHours:1;
        unsigned int wrote_hoursType:1;
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
- (int)StringAsHoursType:(id)arg1;
- (id)hoursTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasHoursType;
@property(nonatomic) int hoursType;
@property(retain, nonatomic) NSString *comments;
@property(readonly, nonatomic) _Bool hasComments;
- (void)_readComments;
@property(nonatomic) _Bool hasEnd;
@property(nonatomic) unsigned long long end;
@property(nonatomic) _Bool hasStart;
@property(nonatomic) unsigned long long start;
@property(retain, nonatomic) GEOPDHours *weeklyHours;
@property(readonly, nonatomic) _Bool hasWeeklyHours;
- (void)_readWeeklyHours;
- (id)initWithData:(id)arg1;
- (id)init;

@end
