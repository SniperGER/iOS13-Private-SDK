//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNRealtimeUpdate.h>


@class GEOTransitRouteUpdate;

@interface MNRealtimeTransitUpdate : MNRealtimeUpdate <NSSecureCoding>
{
    GEOTransitRouteUpdate *_transitUpdate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) GEOTransitRouteUpdate *transitUpdate; // @synthesize transitUpdate=_transitUpdate;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)routeID;
- (id)initWithTransitRouteUpdate:(id)arg1;

@end
