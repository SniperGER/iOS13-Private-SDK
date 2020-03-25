//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate;

@interface SPFinderStateInfo : NSObject <NSSecureCoding>
{
    BOOL _state;
    NSDate *_lastUpdated;
    NSDate *_lastPublishDate;
    NSDate *_lastScheduledPublishActivityDate;
    long long _activeCache;
}

+ (BOOL)canPublishAnonymously;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long activeCache; // @synthesize activeCache=_activeCache;
@property(copy, nonatomic) NSDate *lastScheduledPublishActivityDate; // @synthesize lastScheduledPublishActivityDate=_lastScheduledPublishActivityDate;
@property(copy, nonatomic) NSDate *lastPublishDate; // @synthesize lastPublishDate=_lastPublishDate;
@property(copy, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(nonatomic) BOOL state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithState:(BOOL)arg1 lastUpdated:(id)arg2 lastPublishDate:(id)arg3 lastScheduledPublishActivityDate:(id)arg4 activeCache:(long long)arg5;

@end
