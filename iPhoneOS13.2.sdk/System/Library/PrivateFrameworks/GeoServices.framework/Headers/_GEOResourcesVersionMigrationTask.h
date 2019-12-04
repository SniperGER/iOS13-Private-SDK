//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOActiveTileGroupMigrationTask-Protocol.h>

@class GEOActiveTileGroup, GEOActiveTileGroupMigrationTaskOptions, GEODataSetDescription, GEOReportedProgress, GEOResourceLoader, GEOResourceManifestConfiguration, GEOResources, GEOResourcesVersionMigrator, GEOTileGroup, NSArray, NSProgress, NSSet, NSString;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOResourcesVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask>
{
    GEOResourcesVersionMigrator *_migrator;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _running;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    GEODataSetDescription *_preferredDataSet;
    GEOActiveTileGroup *_oldTileGroup;
    NSSet *_activeScales;
    NSSet *_activeScenarios;
    id /* block */ _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOResourceLoader *_immediateResourceLoader;
    GEOResourceLoader *_wifiOnlyResourceLoader;
    NSArray *_loadedResources;
    NSArray *_unloadedConditionalResources;
    GEOReportedProgress *_progress;
    id ion;
    GEOActiveTileGroupMigrationTaskOptions *_options;
}

+ (id)_resourcesDirectory:(id)arg1;
+ (Class)_resourceLoaderClass;
@property(retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) id on; // @synthesize transaction=_transaction;
- (id)_staleResourceForResource:(id)arg1;
- (void)_loadImmediateResources:(id)arg1 conditionalWifiResources:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeOldData:(id)arg1;
- (void)populateTileGroup:(id)arg1;
- (void)cancel;
- (void)startWithCompletionHandler:(id /* block */)arg1 callbackQueue:(id)arg2;
- (id)_resourcesDirectory;
@property(readonly) NSProgress *progress;
@property(readonly, nonatomic) long long estimatedWeight;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 dataSet:(id)arg5 oldTileGroup:(id)arg6 activeScales:(id)arg7 activeScenarios:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
