//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSUResourceCache-Protocol.h>
#import <iWorkImport/TSUResourceFileURLProvider-Protocol.h>

@class NSOperationQueue, NSString, NSURL, TSPDocumentResourceRegistry;

__attribute__((visibility("hidden")))
@interface TSPDocumentResourceCache : NSObject <TSUResourceCache, TSUResourceFileURLProvider>
{
    NSURL *_URL;
    TSPDocumentResourceRegistry *_documentResourceRegistry;
    NSOperationQueue *_ioOperationQueue;
}

+ (id)sharedCache;
// - (void).cxx_destruct;
- (id)fileURLForResourceInfo:(id)arg1;
- (void)purgeLegacyCaches;
- (void)purge;
- (void)cacheResourceAtURL:(id)arg1 forInfo:(id)arg2 copy:(BOOL)arg3 completionQueue:(id)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (BOOL)cachedResourceExistsForInfo:(id)arg1;
- (id)cachedFileURLForDocumentResourceInfo:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithURL:(id)arg1 documentResourceRegistry:(id)arg2;
- (id)init;

@end
