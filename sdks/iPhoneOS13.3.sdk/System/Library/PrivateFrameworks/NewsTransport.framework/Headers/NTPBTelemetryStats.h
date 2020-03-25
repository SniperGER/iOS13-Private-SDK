//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface NTPBTelemetryStats : PBCodable <NSCopying>
{
    long long _count;
    long long _max;
    long long _mean;
    long long _median;
    long long _min;
    long long _percentile95;
    struct {
        unsigned int count:1;
        unsigned int max:1;
        unsigned int mean:1;
        unsigned int median:1;
        unsigned int min:1;
        unsigned int percentile95:1;
    } _has;
}

@property(nonatomic) long long percentile95; // @synthesize percentile95=_percentile95;
@property(nonatomic) long long median; // @synthesize median=_median;
@property(nonatomic) long long mean; // @synthesize mean=_mean;
@property(nonatomic) long long max; // @synthesize max=_max;
@property(nonatomic) long long min; // @synthesize min=_min;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPercentile95;
@property(nonatomic) BOOL hasMedian;
@property(nonatomic) BOOL hasMean;
@property(nonatomic) BOOL hasMax;
@property(nonatomic) BOOL hasMin;
@property(nonatomic) BOOL hasCount;

@end
