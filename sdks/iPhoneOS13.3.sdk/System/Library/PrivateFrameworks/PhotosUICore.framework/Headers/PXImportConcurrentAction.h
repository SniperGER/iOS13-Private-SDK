//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface PXImportConcurrentAction : NSOperation
{
    BOOL _executing;
    BOOL _finished;
}

- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (BOOL)isConcurrent;
- (void)finish;
- (id)performAction;
- (void)start;

@end
