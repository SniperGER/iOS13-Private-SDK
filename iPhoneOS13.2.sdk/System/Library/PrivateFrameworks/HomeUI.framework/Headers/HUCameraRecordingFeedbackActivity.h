//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class HMCameraClip, HMCameraProfile;

@interface HUCameraRecordingFeedbackActivity : UIActivity
{
    HMCameraClip *_cameraClip;
    HMCameraProfile *_cameraProfile;
    id /* block */ _submissionHandler;
}

@property(copy, nonatomic) id /* block */ submissionHandler; // @synthesize submissionHandler=_submissionHandler;
@property(retain, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(retain, nonatomic) HMCameraClip *cameraClip; // @synthesize cameraClip=_cameraClip;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithCameraClip:(id)arg1 cameraProfile:(id)arg2 completionHandler:(id /* block */)arg3;

@end
