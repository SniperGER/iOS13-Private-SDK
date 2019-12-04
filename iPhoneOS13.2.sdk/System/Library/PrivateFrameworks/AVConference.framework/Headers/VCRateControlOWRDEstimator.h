//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCRateControlOWRDEstimator : NSObject
{
    unsigned int _mode;
    _Bool _useUINT16;
    unsigned int _firstSendTimestamp;
    unsigned int _previousSendTimestamp;
    unsigned int _previousSendTimestampDiff;
    unsigned long long _sendTimestampWrappedAround;
    double _firstSendTime;
    unsigned int _firstReceiveTimestamp;
    unsigned int _previousReceiveTimestamp;
    unsigned int _previousReceiveTimestampDiff;
    unsigned long long _receiveTimestampWrappedAround;
    double _firstReceiveTime;
    double _shortAverageLag;
    double _longAverageLag;
    double _owrd;
    _Bool _sendTimestampSpikeDetected;
    _Bool _receiveTimestampSpikeDetected;
    double _averageSendInterval;
    double _averageReceiveInterval;
}

@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) double owrd; // @synthesize owrd=_owrd;
- (void)resetOWRDEstimation;
- (_Bool)detectOutOfOrderAndSpikeWithReceiveTimestamp:(unsigned int)arg1;
- (_Bool)detectOutOfOrderAndSpikeWithSendTimestamp:(unsigned int)arg1;
- (void)calculateOWRDWithSendTime:(double)arg1 receiveTime:(double)arg2;
- (double)relativeReceiveTimeWithTimestamp:(unsigned int)arg1 timestampRate:(unsigned int)arg2;
- (double)relativeSendTimeWithTimestamp:(unsigned int)arg1 timestampRate:(unsigned int)arg2;

@end
