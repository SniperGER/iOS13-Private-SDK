//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BoardServices/BSServiceDispatchingQueue-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _BSServiceDispatchingQueueImpl : NSObject <BSServiceDispatchingQueue>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)performAsync:(id /* block */)arg1 withHandoff:(id)arg2;
- (void)performAsync:(id /* block */)arg1;
- (id)backingQueueIfExists;
- (void)assertOnQueue;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
