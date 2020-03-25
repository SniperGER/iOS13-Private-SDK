//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPCloudReplica-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@interface MSPReplica : NSObject <MSPCloudReplica>
{
    NSUUID *_clientIdentifier;
    NSDictionary *_records;
}

+ (void)_switchForEdit:(id)arg1 caseIsInsertRecord:(id /* CDUnknownBlockType */)arg2 caseIsEditContents:(id /* CDUnknownBlockType */)arg3;
+ (id)allowedEditClasses;
@property(readonly, nonatomic) NSDictionary *records; // @synthesize records=_records;
@property(readonly, copy, nonatomic) NSUUID *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)tombstoneRecordForRecord:(id)arg1;
- (id)editsToRemoveRecordsWithIdentifiers:(id)arg1;
- (id)editsToInsertOrUpdateRecords:(id)arg1;
- (void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5;
- (id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2;
- (id)editsToMergeWithReplica:(id)arg1;
- (id)initWithRecords:(id)arg1 clientIdentifier:(id)arg2;
- (id)init;
- (id)replicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(id /* CDUnknownBlockType */)arg4 replicaEditApplier:(id /* CDUnknownBlockType */)arg5 error:(out id )arg6;
- (id)_replicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(id /* CDUnknownBlockType */)arg4 replicaEditApplier:(id /* CDUnknownBlockType */)arg5 error:(out id )arg6;
- (BOOL)_containerSerializationRequiresTrackingPositionEdits;
- (Class)replicaRecordClass;
- (id)mergeOptionsWithLastSyncDate:(id)arg1;
- (id)changesMergingCloudChanges:(id)arg1 withReplica:(id)arg2 lastSyncDate:(id)arg3;

@end
