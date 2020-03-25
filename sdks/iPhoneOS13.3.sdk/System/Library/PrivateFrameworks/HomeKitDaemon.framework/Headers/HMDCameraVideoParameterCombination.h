//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraVideoTier, HMDH264Level, HMDH264Profile;

@interface HMDCameraVideoParameterCombination : HMFObject
{
    HMDH264Profile *_profile;
    HMDH264Level *_level;
    HMDCameraVideoTier *_videoTier;
}

@property(readonly, nonatomic) HMDCameraVideoTier *videoTier; // @synthesize videoTier=_videoTier;
@property(readonly, nonatomic) HMDH264Level *level; // @synthesize level=_level;
@property(readonly, nonatomic) HMDH264Profile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithProfile:(id)arg1 level:(id)arg2 videoTier:(id)arg3;

@end
