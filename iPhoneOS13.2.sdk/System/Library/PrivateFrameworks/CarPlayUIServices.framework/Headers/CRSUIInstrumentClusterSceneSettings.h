//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplicationSceneSettings.h>

#import <CarPlayUIServices/CRSUIInstrumentClusterSceneSettings-Protocol.h>

@class NSString;

@interface CRSUIInstrumentClusterSceneSettings : UIApplicationSceneSettings <CRSUIInstrumentClusterSceneSettings>
{
}

@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long showsSpeedLimit;
@property(readonly, nonatomic) unsigned long long showsCompass;
@property(readonly, nonatomic) unsigned long long itemType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
