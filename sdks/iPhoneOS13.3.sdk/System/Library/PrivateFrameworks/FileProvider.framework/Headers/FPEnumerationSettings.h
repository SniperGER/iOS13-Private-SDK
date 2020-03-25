//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSFileProviderSearchQuery;

@interface FPEnumerationSettings : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_sortDescriptors;
    NSFileProviderSearchQuery *_searchQuery;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSFileProviderSearchQuery *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(copy) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end
