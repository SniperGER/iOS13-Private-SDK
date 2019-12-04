//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ReminderKit/REMAlarmTrigger.h>



@class REMStructuredLocation;

@interface REMAlarmLocationTrigger : REMAlarmTrigger <NSSecureCoding>
{
    REMStructuredLocation *_structuredLocation;
    long long _proximity;
}

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;
@property(nonatomic) long long proximity; // @synthesize proximity=_proximity;
@property(copy, nonatomic) REMStructuredLocation *structuredLocation; // @synthesize structuredLocation=_structuredLocation;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isTemporal;
- (_Bool)isContentEqual:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)_deepCopy;
- (id)initWithCoder:(id)arg1;
- (id)initWithStructuredLocation:(id)arg1 proximity:(long long)arg2;
- (id)initWithObjectID:(id)arg1 structuredLocation:(id)arg2 proximity:(long long)arg3;

@end
