//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoRegistry/NRDiffBase.h>

@class NRPBDevicePropertyDiff;
@protocol NSObject><NSCopying;

@interface NRDevicePropertyDiff : NRDiffBase
{
    id <NSCopying> _value;
}

+ (id)unpackPropertyValue:(id)arg1;
+ (id)packPropertyValue:(id)arg1;
+ (id)enclosedClassTypes;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) id <NSCopying> value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NRPBDevicePropertyDiff *protobuf;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithValue:(id)arg1;

@end
