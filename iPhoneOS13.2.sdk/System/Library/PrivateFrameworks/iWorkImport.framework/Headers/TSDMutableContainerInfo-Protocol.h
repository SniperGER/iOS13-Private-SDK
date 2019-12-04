//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDContainerInfo-Protocol.h>
#import <iWorkImport/TSDModelContainer-Protocol.h>

@class NSArray, NSIndexSet, NSObject;
@protocol TSDInfo;

@protocol TSDMutableContainerInfo <TSDContainerInfo, TSDModelContainer>
- (void)replaceChildInfo:(NSObject<TSDInfo> *)arg1 with:(NSObject<TSDInfo> *)arg2;
- (void)removeChildInfo:(NSObject<TSDInfo> *)arg1;
- (void)moveChildren:(NSArray *)arg1 toIndexes:(NSIndexSet *)arg2;
- (void)insertChildInfo:(NSObject<TSDInfo> *)arg1 above:(NSObject<TSDInfo> *)arg2;
- (void)insertChildInfo:(NSObject<TSDInfo> *)arg1 below:(NSObject<TSDInfo> *)arg2;
- (void)insertChildInfo:(NSObject<TSDInfo> *)arg1 atIndex:(unsigned long long)arg2;
- (void)addChildInfo:(NSObject<TSDInfo> *)arg1;
- (void)setChildInfos:(NSArray *)arg1;
@end
