//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GEOStorefrontImagery : NSObject
{
    NSUInteger _identifier;
    unsigned int _buildId;
    unsigned short _bucketId;
    NSUInteger _timestamp;
    double _groundAltitude;
    struct GEOOrientedPosition _position;
    NSArray *_cameras;
    unsigned int _dataFormatVersion;
}

@property(readonly, nonatomic) unsigned int dataFormatVersion; // @synthesize dataFormatVersion=_dataFormatVersion;
@property(readonly, nonatomic) NSArray *cameras; // @synthesize cameras=_cameras;
@property(readonly, nonatomic) struct GEOOrientedPosition position; // @synthesize position=_position;
@property(readonly, nonatomic) double groundAltitude; // @synthesize groundAltitude=_groundAltitude;
@property(readonly, nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned short bucketId; // @synthesize bucketId=_bucketId;
@property(readonly, nonatomic) unsigned int buildId; // @synthesize buildId=_buildId;
@property(readonly, nonatomic) NSUInteger identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)initWithPhotoPosition:(id)arg1;
- (id)init;

@end
