//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTPreset, NSString;

@interface AVTPresetDependency : NSObject
{
    long long category;
    AVTPreset *preset;
    NSString *variantName;
}

@property(retain, nonatomic) NSString *variantName; // @synthesize variantName;
@property(retain, nonatomic) AVTPreset *preset; // @synthesize preset;
@property(nonatomic) long long category; // @synthesize category;
// - (void).cxx_destruct;
- (id)debugDescription;

@end
