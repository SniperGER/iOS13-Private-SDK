//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


#import <SiriInstrumentation/SISchemaInvocation-Protocol.h>

@class NSData, NSString, SISchemaViewContainer;

@interface SISchemaInvocation : PBCodable <SISchemaInvocation, NSSecureCoding>
{
    int _invocationAction;
    int _invocationSource;
    SISchemaViewContainer *_viewContainer;
}

@property(retain, nonatomic) SISchemaViewContainer *viewContainer; // @synthesize viewContainer=_viewContainer;
@property(nonatomic) int invocationSource; // @synthesize invocationSource=_invocationSource;
@property(nonatomic) int invocationAction; // @synthesize invocationAction=_invocationAction;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
