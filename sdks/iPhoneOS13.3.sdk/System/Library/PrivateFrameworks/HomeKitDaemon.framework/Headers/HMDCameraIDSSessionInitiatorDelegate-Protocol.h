//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMDCameraIDSSessionInitiator, NSError;

@protocol HMDCameraIDSSessionInitiatorDelegate <NSObject>
- (void)sessionInitiator:(HMDCameraIDSSessionInitiator *)arg1 didEndSession:(NSError *)arg2;
- (void)sessionInitiator:(HMDCameraIDSSessionInitiator *)arg1 didSetup:(NSError *)arg2;
@end
