//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBWorkspaceEntity.h>

@class SBTransientOverlayViewController;

@interface SBWorkspaceTransientOverlay : SBWorkspaceEntity
{
    SBTransientOverlayViewController *_viewController;
}

@property(readonly, nonatomic) SBTransientOverlayViewController *viewController; // @synthesize viewController=_viewController;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id /* block */)_generator;
- (id)initWithViewController:(id)arg1;

@end
