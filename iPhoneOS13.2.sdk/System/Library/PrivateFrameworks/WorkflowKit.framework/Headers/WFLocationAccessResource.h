//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

#import <WorkflowKit/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSString;

@interface WFLocationAccessResource : WFAccessResource <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    id /* block */ _makeAvailableCompletionHandler;
}

+ (_Bool)isSystemResource;
@property(copy, nonatomic) id /* block */ makeAvailableCompletionHandler; // @synthesize makeAvailableCompletionHandler=_makeAvailableCompletionHandler;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)finishMakingAvailableWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (id)icon;
- (id)name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
