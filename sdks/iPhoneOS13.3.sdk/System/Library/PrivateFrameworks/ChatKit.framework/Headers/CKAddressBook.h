//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKAddressBook : NSObject
{
}

+ (id)monogrammerWithDiameter:(double)arg1 style:(long long)arg2 useAppTintColor:(BOOL)arg3 customFont:(id)arg4;
+ (void)flushMonogrammers;
+ (id)monogrammerProvider;
+ (id)locationSharingContactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 useCustomFont:(BOOL)arg3;
+ (id)transcriptContactImageOfDiameter:(double)arg1 forRecordID:(int)arg2;
+ (id)placeholderContactImageOfDiameter:(double)arg1 monogramStyle:(long long)arg2 tintMonogramText:(BOOL)arg3;
+ (id)contactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 monogramStyle:(long long)arg3 tintMonogramText:(BOOL)arg4 customFont:(id)arg5;
+ (id)contactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 monogramStyle:(long long)arg3 tintMonogramText:(BOOL)arg4;
+ (void )addressBook;
+ (id)contactImageCache;

@end
