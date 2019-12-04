//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/ASAuthorizationCredential-Protocol.h>

@class NSArray, NSData, NSPersonNameComponents, NSString;

@interface ASAuthorizationAppleIDCredential : NSObject <ASAuthorizationCredential>
{
    NSString *_user;
    NSArray *_authorizedScopes;
    NSString *_state;
    NSData *_authorizationCode;
    NSData *_identityToken;
    NSString *_email;
    NSPersonNameComponents *_fullName;
    long long _realUserStatus;
    NSData *_accessToken;
    NSData *_refreshToken;
}

+ (_Bool)supportsSecureCoding;
+ (id)new;
@property(copy, nonatomic) NSData *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSData *accessToken; // @synthesize accessToken=_accessToken;
@property(nonatomic) long long realUserStatus; // @synthesize realUserStatus=_realUserStatus;
@property(copy, nonatomic) NSPersonNameComponents *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSData *identityToken; // @synthesize identityToken=_identityToken;
@property(copy, nonatomic) NSData *authorizationCode; // @synthesize authorizationCode=_authorizationCode;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSArray *authorizedScopes; // @synthesize authorizedScopes=_authorizedScopes;
@property(readonly, copy, nonatomic) NSString *user; // @synthesize user=_user;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithUser:(id)arg1 authorizedScopes:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
