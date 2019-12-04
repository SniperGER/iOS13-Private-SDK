//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EDPersistenceDatabaseConnection, EFSQLSchema;

@interface MFMailMessageLibraryModifyColumnDefinitionsMigrationStep : NSObject
{
    EDPersistenceDatabaseConnection *_connection;
}

@property(retain, nonatomic) EDPersistenceDatabaseConnection *connection; // @synthesize connection=_connection;
- (_Bool)performMigrationStep;
- (id)actionFlagsTableSchema;
- (id)actionLabelsTableSchema;
- (id)actionMessagesTableSchema;
- (id)localMessageActionsTableSchema;
- (id)serverLabelsTableSchema;
- (id)serverMessagesTableSchema;
- (id)mailboxesTableStubSchema;
- (id)messagesTableStubSchema;
@property(readonly, nonatomic) EFSQLSchema *schema;
- (id)initWithSQLiteConnection:(id)arg1;

@end
