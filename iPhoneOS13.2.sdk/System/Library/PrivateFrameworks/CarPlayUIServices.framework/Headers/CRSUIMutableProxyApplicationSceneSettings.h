//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIMutableApplicationSceneSettings.h>

#import <CarPlayUIServices/CRSUIProxyApplicationSceneSettings-Protocol.h>

@class NSString;

@interface CRSUIMutableProxyApplicationSceneSettings : UIMutableApplicationSceneSettings <CRSUIProxyApplicationSceneSettings>
{
}

@property(nonatomic) _Bool proxiedApplicationLinkedOnOrAfterYukon;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *proxiedApplicationBundleIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
