//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NGMFullPrekey, NGMPublicDeviceIdentity;

@interface NGMKeyRollingTicket : NSObject
{
    NGMFullPrekey *_prekey;
    NGMPublicDeviceIdentity *_registrationInfo;
}

@property(readonly, nonatomic) NGMPublicDeviceIdentity *registrationInfo; // @synthesize registrationInfo=_registrationInfo;
@property(readonly, nonatomic) NGMFullPrekey *prekey; // @synthesize prekey=_prekey;
- (id)publicDeviceIdentity;
- (id)prekeyData;
- (id)identityData;
- (id)initTicketWithSigningKey:(id)arg1 error:(id *)arg2;

@end
