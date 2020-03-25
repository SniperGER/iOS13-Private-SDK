//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualVoicemail/VMTelephonyRequestController.h>

#import <VisualVoicemail/CoreTelephonyClientSMSDelegate-Protocol.h>

@protocol VMCTMessageCenter, VMCoreTelephonyClient;

@interface VMCarrierStateRequestController : VMTelephonyRequestController <CoreTelephonyClientSMSDelegate>
{
    id <VMCTMessageCenter> _messageCenter;
    id <VMCoreTelephonyClient> _telephonyClient;
}

@property(readonly, nonatomic) id <VMCoreTelephonyClient> telephonyClient; // @synthesize telephonyClient=_telephonyClient;
// - (void).cxx_destruct;
- (void)postSMSMessageSent:(id)arg1 success:(BOOL)arg2 messageID:(long long)arg3 err1:(long long)arg4 err2:(long long)arg5;
@property(readonly, nonatomic) id <VMCTMessageCenter> messageCenter; // @synthesize messageCenter=_messageCenter;
- (void)executeRequest:(id)arg1;
- (id)initWithMessageCenter:(id)arg1 telephonyClient:(id)arg2 queue:(id)arg3;
- (id)init;

@end
