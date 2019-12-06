//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionStateRecognizer : NSObject
{
    NSUInteger _deepPressCount;
    double _smoothedForce;
    double _maximumForce;
    double _previousEffectiveTouchForce;
    double _timeMark;
    double _currentTime;
    double _previousTime;
    double _popOffsetInitial;
    double _popOffsetLongterm;
    double _popOffsetDecayAlpha;
    double _lowpassForceAlpha;
    double _popDecayingOffset;
    double _popReductionForce;
    double _progressToStrongThreshold;
    BOOL _allowsPopOffsetDecay;
    double _popForceReductionThreshold;
    double _popAlwaysThreshold;
    double _highPopThreshold;
    double _previousPopThreshold;
    double _saturationForce;
    double _revealThreshold;
    double _standardThreshold;
    double _strongThreshold;
    double _hintAndPeekInterval;
    double _hintReductionForce;
    double _actualHintForce;
    double _actualPeekForce;
    double _actualPopForce;
    double _actualHintTime;
    double _actualPeekTime;
    double _actualPopTime;
    BOOL _shouldDelayReveal;
    long long _currentState;
    double _minimumPreviewDuration;
    double _currentTouchForce;
}

@property(nonatomic) double currentTouchForce; // @synthesize currentTouchForce=_currentTouchForce;
@property(nonatomic) BOOL shouldDelayReveal; // @synthesize shouldDelayReveal=_shouldDelayReveal;
@property(nonatomic) double minimumPreviewDuration; // @synthesize minimumPreviewDuration=_minimumPreviewDuration;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (double)_currentTouchForceMultiplier;
- (double)_normalizedTouchForceValue:(double)arg1;
- (double)_denormalizedTouchForceValue:(double)arg1;
- (double)_thresholdForForceLevel:(long long)arg1;
- (void)_accessibilityForceSensitivityChanged:(id)arg1;
- (void)reset;
- (void)evaluateWithTouchForce:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3;
@property(readonly, nonatomic) double velocity; // @dynamic velocity;
- (double)currentProgressToState:(long long)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
