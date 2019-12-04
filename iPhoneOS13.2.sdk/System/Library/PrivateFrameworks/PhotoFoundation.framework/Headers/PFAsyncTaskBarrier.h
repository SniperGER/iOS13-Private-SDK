//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCondition, NSString;

@interface PFAsyncTaskBarrier : NSObject
{
    NSString *_label;
    long long _remainingTaskCount;
    id /* block */ _completionBlock;
    NSArray *_errors;
    NSCondition *_conditionLock;
}

@property(readonly) NSCondition *conditionLock; // @synthesize conditionLock=_conditionLock;
@property(retain) NSArray *errors; // @synthesize errors=_errors;
@property(readonly, copy) id /* block */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly) long long remainingTaskCount; // @synthesize remainingTaskCount=_remainingTaskCount;
@property(readonly) NSString *label; // @synthesize label=_label;
- (id)description;
- (void)executeCriticalBlock:(id /* block */)arg1;
- (void)setRemainingTaskCount:(long long)arg1;
- (void)changeRemainingTaskCount:(long long)arg1;
- (void)taskCompletedWithErrors:(id)arg1 criticalBlock:(id /* block */)arg2;
- (void)taskCompletedWithErrors:(id)arg1;
- (void)taskCompletedWithError:(id)arg1 criticalBlock:(id /* block */)arg2;
- (void)taskCompletedWithError:(id)arg1;
- (void)taskCompletedWithCriticalBlock:(id /* block */)arg1;
- (void)taskCompleted;
- (void)waitUntilCompletedOrError;
- (void)waitUntilCompleted;
- (id)initWithLabel:(id)arg1 taskCount:(long long)arg2 completionBlock:(id /* block */)arg3;
- (id)initWithLabel:(id)arg1 taskCount:(long long)arg2;

@end
