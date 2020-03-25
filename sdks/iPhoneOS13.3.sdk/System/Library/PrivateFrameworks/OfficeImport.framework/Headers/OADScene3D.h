//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class OADBackdrop, OADCamera, OADLightRig;

__attribute__((visibility("hidden")))
@interface OADScene3D : NSObject <NSCopying>
{
    OADCamera *mCamera;
    OADLightRig *mLightRig;
    OADBackdrop *mBackdrop;
}

+ (id)nullScene3D;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)setBackdrop:(id)arg1;
- (id)backdrop;
- (void)setLightRig:(id)arg1;
- (id)lightRig;
- (void)setCamera:(id)arg1;
- (id)camera;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end
