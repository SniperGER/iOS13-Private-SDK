//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/_MFOfflineCacheOperation.h>

@class NSString;

@interface _MFDADeferredSetFlagsOperation : _MFOfflineCacheOperation
{
    unsigned long long _onFlags;
    unsigned long long _offFlags;
    NSString *_messageID;
}

+ (_Bool)supportsSecureCoding;
+ (id)log;
- (id)description;
- (_Bool)translateToLocalActionWithConnection:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
