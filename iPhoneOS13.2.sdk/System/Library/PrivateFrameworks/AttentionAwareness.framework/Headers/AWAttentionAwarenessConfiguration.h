//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSDictionary, NSSet, NSString;
@protocol NSCopying;

@interface AWAttentionAwarenessConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_attentionLostTimeouts;
    NSDictionary *_attentionLostTimeoutDictionary;
    _Bool _samplingDelayExplicitlySet;
    _Bool _attentionLostEventMaskExplicitlySet;
    unsigned long long _tagIndex;
    NSSet *_allowedHIDEventsForRemoteEvent;
    _Bool _sampleWhileAbsent;
    NSString *_identifier;
    id <NSCopying> _tag;
    unsigned long long _notificationMask;
    unsigned long long _eventMask;
    unsigned long long _attentionLostEventMask;
    double _samplingInterval;
    double _samplingDelay;
}

+ (void)cancelNotification:(struct AWNotification_s *)arg1;
+ (struct AWNotification_s *)notifySupportedEventsChangedWithQueue:(id)arg1 block:(id /* block */)arg2;
+ (id)supportedEventsString;
+ (unsigned long long)supportedEvents;
+ (_Bool)supportsSecureCoding;
+ (void)initialize;
@property(nonatomic) _Bool sampleWhileAbsent; // @synthesize sampleWhileAbsent=_sampleWhileAbsent;
@property(nonatomic) double samplingDelay; // @synthesize samplingDelay=_samplingDelay;
@property(nonatomic) double samplingInterval; // @synthesize samplingInterval=_samplingInterval;
@property(nonatomic) unsigned long long attentionLostEventMask; // @synthesize attentionLostEventMask=_attentionLostEventMask;
@property(nonatomic) unsigned long long eventMask; // @synthesize eventMask=_eventMask;
@property(nonatomic) unsigned long long notificationMask; // @synthesize notificationMask=_notificationMask;
@property(copy, nonatomic) id <NSCopying> tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)setAllowedHIDEventsForRemoteEvent:(id)arg1;
- (id)allowedHIDEventsForRemoteEvent;
@property(copy, nonatomic) NSDictionary *attentionLostTimeoutDictionary;
@property(copy, nonatomic) NSSet *attentionLostTimeouts; // @dynamic attentionLostTimeouts;
- (void)setAttentionLostTimeout:(double)arg1;
- (unsigned long long)tagIndex;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (_Bool)validateWithError:(id *)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
