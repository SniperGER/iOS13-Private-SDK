//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKServerChangeToken;

__attribute__((visibility("hidden")))
@interface CKDFetchNotificationChangesOperation : CKDOperation
{
    BOOL _wantsChanges;
    BOOL _moreComing;
    id /* CDUnknownBlockType */ _notificationChangedBlock;
    CKServerChangeToken *_previousServerChangeToken;
    NSUInteger _resultsLimit;
    CKServerChangeToken *_resultServerChangeToken;
}

@property(nonatomic) BOOL moreComing; // @synthesize moreComing=_moreComing;
@property(retain, nonatomic) CKServerChangeToken *resultServerChangeToken; // @synthesize resultServerChangeToken=_resultServerChangeToken;
@property(nonatomic) BOOL wantsChanges; // @synthesize wantsChanges=_wantsChanges;
@property(nonatomic) NSUInteger resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
@property(copy, nonatomic) id /* CDUnknownBlockType */ notificationChangedBlock; // @synthesize notificationChangedBlock=_notificationChangedBlock;
// - (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)main;
- (void)_handleFetchChangesRequestFinished:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
