//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseLocationUpdater.h>

#import <MapsSuggestions/CLLocationManagerDelegate-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsLocationUpdater-Protocol.h>

@class CLLocationManager, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsDefaultLocationUpdater : MapsSuggestionsBaseLocationUpdater <CLLocationManagerDelegate, MapsSuggestionsLocationUpdater>
{
    CLLocationManager *_locationManager;
    _Bool _running;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)stopImplementation;
- (void)startImplemention;
- (void)_startImplemention;
- (void)_deinitLocationManager;
- (void)_initLocationManagers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end
