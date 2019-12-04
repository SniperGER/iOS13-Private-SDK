//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateInterval, NSDictionary, NSString;

@interface ARPRoutingEvent : NSObject
{
    NSString *_bundleID;
    NSString *_outputDeviceID;
    NSDateInterval *_interval;
    NSDictionary *_probabilityVector;
}

+ (id)mostRecentRoutingEventInDateInterval:(id)arg1 knowledgeStore:(id)arg2 eventLimit:(unsigned long long)arg3 longFormVideoFilter:(id /* block */)arg4;
@property(readonly, nonatomic) NSDictionary *probabilityVector; // @synthesize probabilityVector=_probabilityVector;
@property(readonly, copy, nonatomic) NSDateInterval *interval; // @synthesize interval=_interval;
@property(readonly, copy, nonatomic) NSString *outputDeviceID; // @synthesize outputDeviceID=_outputDeviceID;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;
- (id)initWithBundleID:(id)arg1 outputDeviceID:(id)arg2 interval:(id)arg3 probabilityVector:(id)arg4;

@end
