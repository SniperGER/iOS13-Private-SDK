//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNFuture-Protocol.h>
#import <ContactsFoundation/CNPromise-Protocol.h>

@class NSMutableArray, NSString;
@protocol CNFutureImpl;

@interface CNFuture : NSObject <CNFuture, CNPromise>
{
    id <CNFutureImpl> _impl;
    NSMutableArray *_calculationDependencies;
}

+ (id)join:(id)arg1;
+ (id)sequence:(id)arg1;
+ (id)chain:(id)arg1;
+ (void)finishPromise:(id)arg1 withFuture:(id)arg2;
+ (id)recover:(id)arg1 withBlock:(id /* block */)arg2 schedulerProvider:(id)arg3;
+ (id)flatMap:(id)arg1 withBlock:(id /* block */)arg2 schedulerProvider:(id)arg3;
+ (id)lazyFutureWithBlock:(id /* block */)arg1;
+ (id)futureWithBlock:(id /* block */)arg1 scheduler:(id)arg2 schedulerProvider:(id)arg3;
+ (id)futureWithBlock:(id /* block */)arg1 schedulerProvider:(id)arg2;
+ (id)futureWithBlock:(id /* block */)arg1 scheduler:(id)arg2;
+ (id)futureWithBlock:(id /* block */)arg1;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithResult:(id)arg1;
+ (id)future;
+ (id)promiseFuture;
- (id)recover:(id /* block */)arg1 schedulerProvider:(id)arg2;
- (id)recover:(id /* block */)arg1;
- (id)flatMap:(id /* block */)arg1 schedulerProvider:(id)arg2;
- (id)flatMap:(id /* block */)arg1;
- (void)addFailureBlock:(id /* block */)arg1 scheduler:(id)arg2;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1 scheduler:(id)arg2;
- (void)addSuccessBlock:(id /* block */)arg1;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)arg1;
- (id /* block */)completionHandlerAdapter;
- (_Bool)finishWithError:(id)arg1;
- (_Bool)finishWithResult:(id)arg1;
- (_Bool)finishWithResult:(id)arg1 error:(id)arg2;
- (void)didCancel;
- (_Bool)cancel;
@property(readonly, getter=isCancelled) _Bool cancelled;
@property(readonly, getter=isFinished) _Bool finished;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id)result:(id *)arg1;
- (void)addCalculationDependency:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithImpl:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)init;
- (void)_flushCompletionBlocks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
