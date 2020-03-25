//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSError, NSSet, NSString, NSUUID, SFPeerDevice;

@protocol SFActivityAdvertiserClient <NSObject>
- (void)pairedDevicesChanged:(NSSet *)arg1;
- (void)didSendPayloadForActivityIdentifier:(NSUUID *)arg1 toDevice:(SFPeerDevice *)arg2 error:(NSError *)arg3;
- (void)activityPayloadForAdvertisementPayload:(NSData *)arg1 command:(NSString *)arg2 requestedByDevice:(SFPeerDevice *)arg3 withCompletionHandler:(void (^)(NSUUID *, NSData *, NSError *))arg4;
@end
