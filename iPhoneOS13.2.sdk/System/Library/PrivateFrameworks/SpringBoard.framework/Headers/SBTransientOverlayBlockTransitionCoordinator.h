//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBTransientOverlayTransitionCoordinating-Protocol.h>

@class NSString;

@interface SBTransientOverlayBlockTransitionCoordinator : NSObject <SBTransientOverlayTransitionCoordinating>
{
    id /* block */ _startTransitionHandler;
    id /* block */ _finalizeTransitionHandler;
}

@property(copy, nonatomic) id /* block */ finalizeTransitionHandler; // @synthesize finalizeTransitionHandler=_finalizeTransitionHandler;
@property(copy, nonatomic) id /* block */ startTransitionHandler; // @synthesize startTransitionHandler=_startTransitionHandler;
- (void)finalizeTransitionWithContextProvider:(id)arg1;
- (void)startTransitionWithContextProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
