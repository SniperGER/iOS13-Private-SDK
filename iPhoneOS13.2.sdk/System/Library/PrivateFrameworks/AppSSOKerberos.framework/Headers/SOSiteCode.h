//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDate, NSString;

@interface SOSiteCode : NSObject <NSSecureCoding>
{
    NSString *_code;
    NSDate *_timeStamp;
    NSString *_networkFingerprint;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *networkFingerprint; // @synthesize networkFingerprint=_networkFingerprint;
@property(readonly, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(readonly, nonatomic) NSString *code; // @synthesize code=_code;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)age;
- (id)description;
- (id)initWithSiteCode:(id)arg1 forNetworkFingerprint:(id)arg2;

@end
