//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol TMLObservable <NSObject>
- (void)tmlRemoveObserver:(id)arg1 forKeyPath:(NSString *)arg2;
- (void)tmlAddObserver:(id)arg1 forKeyPath:(NSString *)arg2 callback:(void (^)(id <TMLObservable>, NSString *, id))arg3;
@end
