//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNTimeProvider-Protocol.h>
#import <Navigation/MNTracePlayerSchedulerDelegate-Protocol.h>

@class MNLocation, MNSessionUpdateManager, MNTrace, MNTracePlayerETAUpdater, MNTracePlayerScheduler, MNTracePlayerTimelineStream, NSData, NSDate, NSHashTable;

@interface MNTracePlayer : NSObject <MNTracePlayerSchedulerDelegate, MNTimeProvider>
{
    MNTrace *_trace;
    double _traceStartTimestamp;
    NSHashTable *_observers;
    MNTracePlayerScheduler *_scheduler;
    MNTracePlayerTimelineStream *_locationStream;
    MNLocation *_lastReportedLocation;
    BOOL _isPlaying;
    BOOL _isPaused;
    double _duration;
    double _speedMultiplier;
    BOOL _forceDirectionsResponsesFromTrace;
    MNTracePlayerTimelineStream *_directionsStream;
    BOOL _shouldPlayETARequests;
    MNTracePlayerETAUpdater *_etaUpdater;
    MNTracePlayerTimelineStream *_etaUpdatesStream;
}

@property(nonatomic) BOOL forceDirectionsResponsesFromTrace; // @synthesize forceDirectionsResponsesFromTrace=_forceDirectionsResponsesFromTrace;
@property(nonatomic) BOOL shouldPlayETARequests; // @synthesize shouldPlayETARequests=_shouldPlayETARequests;
@property(nonatomic) double speedMultiplier; // @synthesize speedMultiplier=_speedMultiplier;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) BOOL isPaused; // @synthesize isPaused=_isPaused;
@property(readonly, nonatomic) BOOL isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) MNTrace *trace; // @synthesize trace=_trace;
// - (void).cxx_destruct;
- (id)_locationWithCurrentDate:(id)arg1;
- (double)_responseTimeForRequestAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) MNSessionUpdateManager *sessionUpdater;
- (void)_createTimelineStreams;
- (void)tracePlayerScheduler:(id)arg1 didUpdatePosition:(double)arg2;
@property(readonly, nonatomic) NSUInteger selectedRouteIndex;
@property(readonly, nonatomic) NSData *selectedRouteID;
@property(readonly, nonatomic) NSDate *currentLocationDate;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) double position;
- (void)jumpToBookmarkAtIndex:(NSUInteger)arg1;
- (void)skipByTimeInterval:(double)arg1;
- (void)jumpToLocationAtIndex:(NSUInteger)arg1;
- (void)jumpToTime:(double)arg1;
- (BOOL)requestDirectionsNearTimestamp:(double)arg1 withHandler:(id /* CDUnknownBlockType */)arg2 errorHandler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)requestDirectionsWithHandler:(id /* CDUnknownBlockType */)arg1 errorHandler:(id /* CDUnknownBlockType */)arg2;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)startAtLocationIndex:(NSUInteger)arg1;
- (void)start;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) int mainTransportType;
- (void)dealloc;
- (id)initWithTrace:(id)arg1;
- (id)initWithPath:(id)arg1 outError:(id )arg2;
- (id)initWithPath:(id)arg1;

@end
