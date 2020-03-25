//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ARPAnalyticsEvent : NSObject
{
    BOOL _predictionCorrect;
    NSString *_prediction;
    NSString *_predictionReason;
    NSString *_suppressionReason;
    NSString *_predictedDevice;
    NSString *_actualDevice;
    NSString *_correction;
    NSString *_correctionTiming;
    NSString *_failure;
    NSUInteger _numberOfMicrolocations;
}

+ (id)feedbackEventsFromAppUsageEvents:(id)arg1 playingEvents:(id)arg2 microLocationEvents:(id)arg3 feedbackEvents:(id)arg4;
@property(nonatomic) NSUInteger numberOfMicrolocations; // @synthesize numberOfMicrolocations=_numberOfMicrolocations;
@property(copy, nonatomic) NSString *failure; // @synthesize failure=_failure;
@property(copy, nonatomic) NSString *correctionTiming; // @synthesize correctionTiming=_correctionTiming;
@property(copy, nonatomic) NSString *correction; // @synthesize correction=_correction;
@property(copy, nonatomic) NSString *actualDevice; // @synthesize actualDevice=_actualDevice;
@property(copy, nonatomic) NSString *predictedDevice; // @synthesize predictedDevice=_predictedDevice;
@property(nonatomic) BOOL predictionCorrect; // @synthesize predictionCorrect=_predictionCorrect;
@property(copy, nonatomic) NSString *suppressionReason; // @synthesize suppressionReason=_suppressionReason;
@property(copy, nonatomic) NSString *predictionReason; // @synthesize predictionReason=_predictionReason;
@property(copy, nonatomic) NSString *prediction; // @synthesize prediction=_prediction;
// - (void).cxx_destruct;
- (id)analyticsDictionary;
- (id)description;
- (id)init;

@end
