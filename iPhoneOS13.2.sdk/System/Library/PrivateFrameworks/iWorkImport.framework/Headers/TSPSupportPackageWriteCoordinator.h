//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPPackageWriteCoordinator.h>

__attribute__((visibility("hidden")))
@interface TSPSupportPackageWriteCoordinator : TSPPackageWriteCoordinator
{
    TSPPackageWriteCoordinator *_packageWriteCoordinator;
}

- (_Bool)wasComponentCopied:(long long)arg1;
- (long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2 objectUUIDOrNil:(id)arg3 outComponentIsVersioned:(_Bool *)arg4;
- (id)objectForIdentifier:(long long)arg1;
- (_Bool)componentWriter:(id)arg1 externalPackageDidWriteObject:(id)arg2 claimingComponent:(id *)arg3;
- (void)didReferenceData:(id)arg1;
- (_Bool)isObjectInExternalPackage:(id)arg1 claimingComponent:(id *)arg2;
- (_Bool)isComponentExternal:(id)arg1 wasWritten:(_Bool *)arg2 wasCopied:(_Bool *)arg3;
- (_Bool)shouldEnqueueComponent:(id)arg1;
- (id)initWithContext:(id)arg1 archiverClass:(Class)arg2 archiverFlags:(BOOL)arg3 documentRevision:(id)arg4 saveToken:(unsigned long long)arg5 fileFormatVersion:(unsigned long long)arg6 metadataObject:(id)arg7 dataAttributesSnapshot:(id)arg8 packageWriteCoordinator:(id)arg9;
- (id)initWithContext:(id)arg1 archiverClass:(Class)arg2 archiverFlags:(BOOL)arg3 documentRevision:(id)arg4 saveToken:(unsigned long long)arg5 packageIdentifier:(unsigned char)arg6 fileFormatVersion:(unsigned long long)arg7 preferredPackageType:(long long)arg8 metadataObject:(id)arg9 dataAttributesSnapshot:(id)arg10;

@end
