//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUMutableImage-Protocol.h>
#import <NeutrinoCore/NUTextureImage-Protocol.h>

@class NURegion;

@protocol NUMutableTextureImage <NUTextureImage, NUMutableImage>
- (void)writeTextureRegion:(NURegion *)arg1 withBlock:(void (^)(id <NUTextureTile>, BOOL ))arg2;
@end
