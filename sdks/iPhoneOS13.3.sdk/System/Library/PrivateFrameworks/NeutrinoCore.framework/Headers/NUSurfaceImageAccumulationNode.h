//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageAccumulationNode.h>

@protocol NUMutablePurgeableSurfaceImage;

@interface NUSurfaceImageAccumulationNode : NUImageAccumulationNode
{
}

@property(readonly, nonatomic) id <NUMutablePurgeableSurfaceImage> surfaceImage;
- (id)_newImage;

@end
