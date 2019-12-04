//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CNContact, NSDictionary, PKPaymentPass, PKRemotePaymentInstrument;

@protocol PKPaymentOptionsProtocol 
@property(retain, nonatomic) CNContact *defaultContactName;
@property(retain, nonatomic) CNContact *defaultContactPhone;
@property(retain, nonatomic) CNContact *defaultContactEmail;
@property(readonly, nonatomic) NSDictionary *defaultBillingAddresses;
@property(retain, nonatomic) CNContact *defaultShippingAddress;
- (void)setDefaultBillingAddress:(CNContact *)arg1 forRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg2;
- (void)setDefaultBillingAddress:(CNContact *)arg1 forPaymentPass:(PKPaymentPass *)arg2;
- (CNContact *)defaultBillingAddressForRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg1;
- (CNContact *)defaultBillingAddressForPaymentPass:(PKPaymentPass *)arg1;
@end
