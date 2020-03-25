//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCMultiStepFetchOperation.h>

@class NSArray;
@protocol FCContentContext;

@interface FCResourcesFetchOperation : FCMultiStepFetchOperation
{
    BOOL _downloadAssets;
    long long _cacheLifetimeHint;
    id /* CDUnknownBlockType */ _progressHandler;
    id <FCContentContext> _context;
    NSArray *_resourceIDs;
    NSArray *_resources;
}

@property(retain, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(readonly, nonatomic) BOOL downloadAssets; // @synthesize downloadAssets=_downloadAssets;
@property(readonly, nonatomic) NSArray *resourceIDs; // @synthesize resourceIDs=_resourceIDs;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) id /* CDUnknownBlockType */ progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) long long cacheLifetimeHint; // @synthesize cacheLifetimeHint=_cacheLifetimeHint;
// - (void).cxx_destruct;
- (BOOL)_shoudUsePermanentURLForResourceID:(id)arg1;
- (id)completeFetchOperation;
- (id)downloadAssetsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)fetchResourcesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)validateOperation;
- (id)initWithContext:(id)arg1 resourceIDs:(id)arg2 downloadAssets:(BOOL)arg3;
- (id)init;

@end
