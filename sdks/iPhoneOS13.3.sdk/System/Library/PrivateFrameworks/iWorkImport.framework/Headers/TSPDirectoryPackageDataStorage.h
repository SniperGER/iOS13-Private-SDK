//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPFileDataStorage.h>

@class NSString, TSPDirectoryPackage;
@protocol TSPCryptoInfo;

__attribute__((visibility("hidden")))
@interface TSPDirectoryPackageDataStorage : TSPFileDataStorage
{
    _Atomic NSUInteger _cachedEncodedLength;
    NSString *_path;
    id <TSPCryptoInfo> _decryptionInfo;
    unsigned char _packageIdentifier;
    BOOL _isMissingData;
    BOOL _gilligan_isRemote;
    TSPDirectoryPackage *_package;
}

@property(readonly, nonatomic) __weak TSPDirectoryPackage *package; // @synthesize package=_package;
- (void)setGilligan_isRemote:(BOOL)arg1;
- (BOOL)gilligan_isRemote;
// - (void).cxx_destruct;
- (BOOL)linkOrCopyToURL:(id)arg1 encryptionInfo:(id)arg2 canLink:(BOOL)arg3;
- (BOOL)isInPackage:(id)arg1;
- (id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(struct DataInfo )arg3 preferredFilename:(id)arg4 error:(id )arg5;
- (void)performIOChannelReadWithAccessor:(id /* CDUnknownBlockType */)arg1;
- (void)performReadWithAccessor:(id /* CDUnknownBlockType */)arg1;
- (void)setIsMissingData:(BOOL)arg1;
- (BOOL)isMissingData;
- (id)decryptionInfo;
- (NSUInteger)encodedLength;
- (NSUInteger)length;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (void)didInitializeFromDocumentURL:(id)arg1;
- (id)init;
- (id)initWithPath:(id)arg1 package:(id)arg2 decryptionInfo:(id)arg3;

@end
