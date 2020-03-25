//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface DNDLifetimeDetails : NSObject <NSCopying>
{
    NSString *_identifier;
    NSString *_name;
    NSString *_metadata;
}

+ (id)lifetimeDetailsForPlaceInference:(id)arg1;
+ (id)lifetimeDetailsForEvent:(id)arg1 relativeToDate:(id)arg2;
+ (id)lifetimeDetailsUntilMorning;
+ (id)lifetimeDetailsUntilEvening;
+ (id)lifetimeDetailsForOneHour;
@property(readonly, copy, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 metadata:(id)arg3;

@end
