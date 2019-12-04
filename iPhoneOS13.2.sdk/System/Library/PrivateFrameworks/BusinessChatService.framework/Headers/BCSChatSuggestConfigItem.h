//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSDate;

@interface BCSChatSuggestConfigItem : NSObject <NSCopying, NSSecureCoding>
{
    long long _buckets;
    long long _shards;
    NSDate *_expirationDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) long long shards; // @synthesize shards=_shards;
@property(readonly, nonatomic) long long buckets; // @synthesize buckets=_buckets;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithBuckets:(long long)arg1 shards:(long long)arg2 expirationDate:(id)arg3;
- (id)initWithJSONObj:(id)arg1;

@end
