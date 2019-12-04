//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSString;

@interface NSData (AppleMediaServices)
+ (id)_labelForDataProtectionClass:(unsigned long long)arg1;
+ (id)_generateInitializationVectorDataWithError:(id *)arg1;
+ (id)_AESKeyForDataProtectionClass:(unsigned long long)arg1 error:(id *)arg2;
+ (const struct __CFString *)_accessibleAttributeForDataProtectionClass:(unsigned long long)arg1;
+ (id)ams_generateEncryptionKey;
- (CDStruct_0f015c83)ams_encryptDataUsingKey:(id)arg1 error:(id *)arg2;
- (CDStruct_0f015c83)ams_encryptDataUsingDataProtectionClass:(unsigned long long)arg1 error:(id *)arg2;
- (id)ams_decryptUsingKey:(id)arg1 initializationVectorData:(id)arg2 tagData:(id)arg3 error:(id *)arg4;
- (id)ams_decryptUsingDataProtectionClass:(unsigned long long)arg1 initializationVectorData:(id)arg2 tagData:(id)arg3 error:(id *)arg4;
@property(readonly, nonatomic) NSData *ams_SHA1;
@property(readonly, nonatomic) NSString *ams_nvramDescription;
@property(readonly, nonatomic) NSString *ams_hexAddressDescription;
@property(readonly, nonatomic) NSData *ams_decompressedData;
@property(readonly, nonatomic) NSData *ams_compressedData;
@end
