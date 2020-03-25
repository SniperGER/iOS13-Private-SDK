//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface SBFCARenderer : NSObject
{
    NSXPCConnection *_rendererServiceConnection;
}

+ (BOOL)shouldUseXPCServiceForRendering;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)_coerceImageIntoData:(id)arg1;
- (id)applyMaterialRecipe:(id)arg1 recipeName:(id)arg2 weighting:(double)arg3 downsampleFactor:(double)arg4;
- (id)treatWallpaperImage:(id)arg1 needsLuminanceTreatment:(BOOL)arg2 needsDimmingTreatment:(BOOL)arg3 downsampleFactor:(double)arg4 averageColor:(id)arg5;
- (id)_remoteObjectProxy;
- (void)_createConnection;

@end
