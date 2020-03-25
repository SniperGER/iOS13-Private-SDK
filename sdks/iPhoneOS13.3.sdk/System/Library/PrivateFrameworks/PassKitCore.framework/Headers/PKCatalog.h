//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class NSDate, NSMutableArray;

@interface PKCatalog : NSObject <NSCopying, NSSecureCoding, PKCloudStoreCoding>
{
    NSMutableArray *_groups;
    NSDate *_timestamp;
}

+ (id)catalogWithLocalCatalog:(id)arg1 ubiquitousCatalog:(id)arg2;
+ (id)cloudStoreCatalogRecordTypeRecordNamePrefix;
+ (BOOL)supportsSecureCoding;
+ (id)catalogWithContentsOfURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
// - (void).cxx_destruct;
- (NSUInteger)itemType;
- (id)recordTypesAndNames;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (void)shuffle:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)allGroupIDs;
- (BOOL)isNewerThanCatalog:(id)arg1;
- (BOOL)isEquivalentToCatalog:(id)arg1;
- (void)writeToURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2 atomically:(BOOL)arg3;
- (id)init;

@end
