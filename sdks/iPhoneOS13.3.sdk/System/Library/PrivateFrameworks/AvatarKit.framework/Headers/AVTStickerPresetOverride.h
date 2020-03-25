//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AVTStickerPresetOverride : NSObject
{
    long long _category;
    NSString *_presetIdentifier;
    NSArray *_unlessIdentifiers;
}

+ (id)presetOverrideFromDictionary:(id)arg1 forCategoryName:(id)arg2;
@property(readonly, nonatomic) NSArray *unlessIdentifiers; // @synthesize unlessIdentifiers=_unlessIdentifiers;
@property(readonly, copy, nonatomic) NSString *presetIdentifier; // @synthesize presetIdentifier=_presetIdentifier;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
// - (void).cxx_destruct;
- (id)overridenPresetForAvatar:(id)arg1;
- (void)applyToAvatar:(id)arg1;
- (id)initWithCategory:(long long)arg1 presetIdentifier:(id)arg2 unless:(id)arg3;

@end
