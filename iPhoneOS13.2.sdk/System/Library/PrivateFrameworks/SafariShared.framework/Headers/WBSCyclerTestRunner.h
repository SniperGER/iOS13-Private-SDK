//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol WBSCyclerTestSuite, WBSCyclerTestTarget;

@interface WBSCyclerTestRunner : NSObject
{
    _Bool _stopRequested;
    NSMutableArray *_pendingRequestQueue;
    NSMutableArray *_pendingRequestCompletionHandlerQueue;
    _Bool _running;
    id <WBSCyclerTestSuite> _testSuite;
    id <WBSCyclerTestTarget> _target;
}

@property(readonly, nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(readonly, nonatomic) id <WBSCyclerTestTarget> target; // @synthesize target=_target;
@property(readonly, nonatomic) id <WBSCyclerTestSuite> testSuite; // @synthesize testSuite=_testSuite;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)_handleNextPendingRequestWithCompletionHandler:(id /* block */)arg1;
- (void)_performNextIterationWithCompletionHandler:(id /* block */)arg1;
- (void)_stop;
- (void)handleRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestStop;
- (void)runWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithTestSuite:(id)arg1 target:(id)arg2;
- (id)init;

@end
