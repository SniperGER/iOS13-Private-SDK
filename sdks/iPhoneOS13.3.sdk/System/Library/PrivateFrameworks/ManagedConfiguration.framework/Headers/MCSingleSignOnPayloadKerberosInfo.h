//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MCSingleSignOnPayloadKerberosInfo : NSObject
{
    NSString *_principalName;
    NSString *_realm;
    NSString *_certificateUUID;
    NSArray *_URLPrefixMatches;
    NSArray *_appIdentifierMatches;
    NSString *_accountGUID;
    NSString *_accountTypeGUID;
}

@property(retain, nonatomic) NSString *accountTypeGUID; // @synthesize accountTypeGUID=_accountTypeGUID;
@property(retain, nonatomic) NSString *accountGUID; // @synthesize accountGUID=_accountGUID;
@property(retain, nonatomic) NSArray *appIdentifierMatches; // @synthesize appIdentifierMatches=_appIdentifierMatches;
@property(retain, nonatomic) NSArray *URLPrefixMatches; // @synthesize URLPrefixMatches=_URLPrefixMatches;
@property(retain, nonatomic) NSString *certificateUUID; // @synthesize certificateUUID=_certificateUUID;
@property(retain, nonatomic) NSString *realm; // @synthesize realm=_realm;
@property(retain, nonatomic) NSString *principalName; // @synthesize principalName=_principalName;
// - (void).cxx_destruct;
- (id)stubDictionary;
- (BOOL)validateURLPrefixMatch:(id)arg1 outNormalizedString:(id )arg2 outError:(id )arg3;
- (id)description;
- (BOOL)validateAppIdentifierMatch:(id)arg1 outError:(id )arg2;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id )arg3;

@end
