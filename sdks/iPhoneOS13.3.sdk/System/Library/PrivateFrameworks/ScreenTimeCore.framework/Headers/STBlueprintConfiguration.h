//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <ScreenTimeCore/STSyncableSubObject-Protocol.h>
#import <ScreenTimeCore/STUniquelySerializableManagedObject-Protocol.h>

@protocol STSerializableManagedObject;

@interface STBlueprintConfiguration : NSManagedObject <STSyncableSubObject, STUniquelySerializableManagedObject>
{
}

+ (id)blueprintConfigurationTypeForDeclaration:(id)arg1;
+ (Class)cemDeclarationClassForConfigurationType:(id)arg1;
+ (id)cemConfigurationIdentifierWithType:(id)arg1 forUser:(id)arg2;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id )arg3;
- (void)setCemConfiguration:(id)arg1;
- (id)cemConfiguration;
@property(readonly) id <STSerializableManagedObject> syncableRootObject;
- (id)dictionaryRepresentation;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;

@end
