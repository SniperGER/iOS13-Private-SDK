//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackBoardServices/BKSTouchDeliveryPolicy.h>

@class NSObject;
@protocol OS_xpc_object;

@interface _BKSShareTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy
{
    unsigned int _childContextId;
    unsigned int _hostContextId;
    NSObject<OS_xpc_object> *_assertionEndpoint;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned int hostContextId; // @synthesize hostContextId=_hostContextId;
@property(readonly, nonatomic) unsigned int childContextId; // @synthesize childContextId=_childContextId;
- (void)setAssertionEndpoint:(id)arg1;
- (id)assertionEndpoint;
// - (void).cxx_destruct;
- (id)matchSharingTouchesPolicy:(id /* CDUnknownBlockType */)arg1 orCancelTouchesPolicy:(id /* CDUnknownBlockType */)arg2 orCombinedPolicy:(id /* CDUnknownBlockType */)arg3;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChildContextId:(unsigned int)arg1 hostContextId:(unsigned int)arg2;

@end
