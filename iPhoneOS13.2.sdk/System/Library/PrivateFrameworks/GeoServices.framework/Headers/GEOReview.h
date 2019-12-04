//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOUser, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOReview : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_languageCode;
    double _reviewTime;
    GEOUser *_reviewer;
    double _score;
    NSString *_snippet;
    NSString *_uid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _isChinaSuppressed;
    struct {
        unsigned int has_reviewTime:1;
        unsigned int has_score:1;
        unsigned int has_isChinaSuppressed:1;
        unsigned int read_unknownFields:1;
        unsigned int read_languageCode:1;
        unsigned int read_reviewer:1;
        unsigned int read_snippet:1;
        unsigned int read_uid:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_languageCode:1;
        unsigned int wrote_reviewTime:1;
        unsigned int wrote_reviewer:1;
        unsigned int wrote_score:1;
        unsigned int wrote_snippet:1;
        unsigned int wrote_uid:1;
        unsigned int wrote_isChinaSuppressed:1;
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
@property(nonatomic) _Bool hasIsChinaSuppressed;
@property(nonatomic) _Bool isChinaSuppressed;
@property(retain, nonatomic) NSString *languageCode;
@property(readonly, nonatomic) _Bool hasLanguageCode;
- (void)_readLanguageCode;
@property(retain, nonatomic) NSString *uid;
@property(readonly, nonatomic) _Bool hasUid;
- (void)_readUid;
@property(retain, nonatomic) GEOUser *reviewer;
@property(readonly, nonatomic) _Bool hasReviewer;
- (void)_readReviewer;
@property(nonatomic) _Bool hasReviewTime;
@property(nonatomic) double reviewTime;
@property(nonatomic) _Bool hasScore;
@property(nonatomic) double score;
@property(retain, nonatomic) NSString *snippet;
@property(readonly, nonatomic) _Bool hasSnippet;
- (void)_readSnippet;
- (id)initWithData:(id)arg1;
- (id)init;

@end
