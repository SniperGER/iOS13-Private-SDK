//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CCUIContentModuleContext, CCUIStatusUpdate;

@protocol CCUIContentModuleContextDelegate 
- (void)dismissControlCenterForContentModuleContext:(CCUIContentModuleContext *)arg1;
- (void)dismissExpandedViewForContentModuleContext:(CCUIContentModuleContext *)arg1;
- (void)requestExpandModuleForContentModuleContext:(CCUIContentModuleContext *)arg1;
- (void)contentModuleContext:(CCUIContentModuleContext *)arg1 enqueueStatusUpdate:(CCUIStatusUpdate *)arg2;
- (void)contentModuleContext:(CCUIContentModuleContext *)arg1 didUpdateHomeGestureDismissalAllowed:(_Bool)arg2;
@end
