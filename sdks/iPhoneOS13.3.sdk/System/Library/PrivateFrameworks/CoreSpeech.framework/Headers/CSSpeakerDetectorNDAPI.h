//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSpeakerModel;
@protocol CSSpeakerDetectorNDAPIDelegate;

@interface CSSpeakerDetectorNDAPI : NSObject
{
    float _threshold;
    NSUInteger _maxSpeakerVectorsToPersist;
    CSSpeakerModel *_spkModel;
    id <CSSpeakerDetectorNDAPIDelegate> _delegate;
}

@property(nonatomic) __weak id <CSSpeakerDetectorNDAPIDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (float)getRejectLoggingThreshold;
- (NSUInteger)getMaxSpeakerVectorsToPersist;
- (NSUInteger)getSATVectorCount;
- (BOOL)addLastTriggerToProfileWithSuperVector:(id)arg1;
- (BOOL)addLastTriggerToProfile;
- (id)analyzeWavForEnrollment:(id)arg1 numSamples:(NSUInteger)arg2;
- (float)computeSATScore:(id)arg1;
- (float)getSatThreshold;
- (BOOL)_initializeSAT:(id)arg1;
- (BOOL)_initializeNDAPI:(id)arg1 resourcePath:(id)arg2;
- (void)dealloc;
- (void)reset;
- (id)initWithAsset:(id)arg1 speakerModel:(id)arg2;

@end
