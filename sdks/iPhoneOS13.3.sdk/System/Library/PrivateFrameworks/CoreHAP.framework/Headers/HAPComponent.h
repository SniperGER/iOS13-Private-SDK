//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@protocol HAPBTLECentralManagerDelegate;

@interface HAPComponent : HMFObject
{
    id <HAPBTLECentralManagerDelegate> centralManagerDelegate;
}

@property(nonatomic) __weak id <HAPBTLECentralManagerDelegate> centralManagerDelegate; // @synthesize centralManagerDelegate;
// - (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1;

@end
