//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData;

__attribute__((visibility("hidden")))
@interface OTSOSMessage : PBCodable <NSCopying>
{
    NSData *_circleBlob;
    NSData *_credential;
    NSData *_initialSyncItems;
    NSData *_peerInfo;
}

@property(retain, nonatomic) NSData *initialSyncItems; // @synthesize initialSyncItems=_initialSyncItems;
@property(retain, nonatomic) NSData *circleBlob; // @synthesize circleBlob=_circleBlob;
@property(retain, nonatomic) NSData *peerInfo; // @synthesize peerInfo=_peerInfo;
@property(retain, nonatomic) NSData *credential; // @synthesize credential=_credential;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasInitialSyncItems;
@property(readonly, nonatomic) _Bool hasCircleBlob;
@property(readonly, nonatomic) _Bool hasPeerInfo;
@property(readonly, nonatomic) _Bool hasCredential;

@end
