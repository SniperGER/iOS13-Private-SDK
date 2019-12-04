//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSessionTaskDelegate-Protocol.h>

@class GEODataRequest, GEODataSession, GEODataSessionTask, NSData, NSString, NSURL;
@protocol GEOSimpleTileRequesterOperationDelegate, OS_dispatch_queue, OS_os_activity;

__attribute__((visibility("hidden")))
@interface _GEOSimpleTileRequesterOperation : NSObject <GEODataSessionTaskDelegate>
{
    GEODataRequest *_request;
    NSData *_data;
    GEODataSessionTask *_task;
    NSString *_responseEtag;
    struct _GEOTileKey _key;
    NSString *_editionHeader;
    _GEOSimpleTileRequesterOperation *_baseTile;
    _GEOSimpleTileRequesterOperation *_localizationTile;
    id <GEOSimpleTileRequesterOperationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_os_activity> *_activity;
    NSObject<OS_os_activity> *_parentTileActivity;
    double _timeout;
    double _startTime;
    double _endTime;
    GEODataSession *_dataSession;
    unsigned long long _signpostID;
    int _attempts;
    int _checksumMethod;
    unsigned int _tileEdition;
    // Error parsing type: AI, name: _priority
    _Bool _finished;
    _Bool _existingCachedDataCurrent;
    _Bool _shouldReportAnalytics;
    NSString *_requestingBundleId;
    double _tileLoaderCreateTime;
    _Bool _shouldDownloadToDisk;
    _Bool _isRunning;
}

@property(nonatomic) double tileLoaderCreateTime; // @synthesize tileLoaderCreateTime=_tileLoaderCreateTime;
@property(retain, nonatomic) NSString *requestingBundleId; // @synthesize requestingBundleId=_requestingBundleId;
@property(nonatomic) _Bool shouldReportAnalytics; // @synthesize shouldReportAnalytics=_shouldReportAnalytics;
@property(nonatomic) _Bool shouldDownloadToDisk; // @synthesize shouldDownloadToDisk=_shouldDownloadToDisk;
@property(readonly, nonatomic, getter=isExistingCachedDataCurrent) _Bool existingCachedDataCurrent; // @synthesize existingCachedDataCurrent=_existingCachedDataCurrent;
@property(retain, nonatomic) NSString *responseEtag; // @synthesize responseEtag=_responseEtag;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <GEOSimpleTileRequesterOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) _GEOSimpleTileRequesterOperation *localizationTile; // @synthesize localizationTile=_localizationTile;
@property(retain, nonatomic) _GEOSimpleTileRequesterOperation *baseTile; // @synthesize baseTile=_baseTile;
@property(nonatomic) unsigned int tileEdition; // @synthesize tileEdition=_tileEdition;
@property(retain, nonatomic) NSString *editionHeader; // @synthesize editionHeader=_editionHeader;
@property(retain, nonatomic) GEODataSessionTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) struct _GEOTileKey key; // @synthesize key=_key;
@property(retain, nonatomic) NSObject<OS_os_activity> *parentTileActivity; // @synthesize parentTileActivity=_parentTileActivity;
@property(retain, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(nonatomic) unsigned long long signpostID; // @synthesize signpostID=_signpostID;
@property(readonly, nonatomic) GEODataRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) GEODataSession *dataSession; // @synthesize dataSession=_dataSession;
- (void)_recordAnalyticsWithError:(id)arg1;
- (void)taskFailed:(id)arg1 withError:(id)arg2;
- (_Bool)validateTileIntegrityForTask:(id)arg1;
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;
@property(readonly, nonatomic) NSURL *downloadedFileURL;
- (const struct _GEOTileKey *)keyPtr;
@property(readonly, nonatomic) _Bool responseIsCacheable;
@property(readonly, nonatomic) long long responseSource;
@property(readonly, nonatomic) int httpResponseStatusCode;
- (double)startTime;
- (double)elapsed;
- (void)clearAllRelatedOperations;
- (void)cancel;
- (void)start;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long contentLength;
@property(readonly, nonatomic) NSURL *URL;
@property unsigned int priority;
- (id)initWithRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
