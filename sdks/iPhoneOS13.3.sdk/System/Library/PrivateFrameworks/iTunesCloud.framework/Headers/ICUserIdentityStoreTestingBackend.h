//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICUserIdentityStoreBackend-Protocol.h>

@class ICLocalStoreAccountProperties, NSMutableDictionary, NSNumber;
@protocol ICUserIdentityStoreBackendDelegate;

@interface ICUserIdentityStoreTestingBackend : NSObject <ICUserIdentityStoreBackend>
{
    NSNumber *_activeAccountDSID;
    NSNumber *_activeLockerAccountDSID;
    NSMutableDictionary *_identityProperties;
    ICLocalStoreAccountProperties *_localStoreAccountProperties;
    id <ICUserIdentityStoreBackendDelegate> _delegate;
}

+ (BOOL)supportsSecureCoding;
+ (void)setDefaultStorefrontIdentifier:(id)arg1;
+ (void)setDefaultActiveLockerAccountDSID:(id)arg1;
+ (void)setDefaultActiveAccountDSID:(id)arg1;
@property(nonatomic) __weak id <ICUserIdentityStoreBackendDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_propertiesToSaveForProperties:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)setLocalStoreAccountProperties:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)localStoreAccountPropertiesWithError:(id )arg1;
- (void)localStoreAccountPropertiesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)verificationContextForDSID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)verificationContextForAccountEstablishmentWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)synchronize;
- (void)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)removeIdentityForDSID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)identityPropertiesForPrimaryICloudAccountWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)setIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)identityPropertiesForDSID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updateActiveLockerAccountDSID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)activeLockerAccountDSIDWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)updateActiveAccountDSID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)activeAccountDSIDWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end
