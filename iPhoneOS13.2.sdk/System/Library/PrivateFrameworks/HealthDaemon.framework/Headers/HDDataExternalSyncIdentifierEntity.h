//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataExternalSyncIdentifierEntity : HDHealthEntity
{
}

+ (_Bool)insertSyncIdentifierWithProfile:(id)arg1 database:(id)arg2 objectID:(long long)arg3 localSourceID:(long long)arg4 externalSyncObjectCode:(long long)arg5 syncIdentifier:(id)arg6 syncVersion:(id)arg7 deleted:(_Bool)arg8 errorOut:(id *)arg9;
+ (_Bool)populateSyncInfoForObjectID:(long long)arg1 database:(id)arg2 localSourceIDOut:(long long *)arg3 externalSyncObjectCodeOut:(long long *)arg4 syncIdentifierOut:(id *)arg5 syncVersionOut:(id *)arg6 deletedOut:(_Bool *)arg7 errorOut:(id *)arg8;
+ (_Bool)populateSyncInfoForLocalSourceID:(long long)arg1 externalSyncObjectCode:(long long)arg2 syncIdentifier:(id)arg3 deleted:(_Bool)arg4 database:(id)arg5 objectIDOut:(id *)arg6 errorOut:(id *)arg7;
+ (long long)protectionClass;
+ (id)indices;
+ (id)foreignKeys;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;
+ (_Bool)enumerateValuesWithProfile:(id)arg1 error:(id *)arg2 handler:(id /* block */)arg3;

@end
