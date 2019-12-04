//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsToday/NFCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol FCContentContext, FCTodayPrivateData, NTSectionDescriptor, NTTodayItem, NTTodayResultOperationInfoProviding;

@protocol NTTodayProtoitem <NFCopying>
@property(readonly, copy, nonatomic) NSString *identifier;
- (id <NTTodayItem>)itemWithContentContext:(id <FCContentContext>)arg1 operationInfo:(id <NTTodayResultOperationInfoProviding>)arg2 sectionDescriptor:(id <NTSectionDescriptor>)arg3 todayData:(id <FCTodayPrivateData>)arg4 assetFileURLsByRemoteURL:(NSMutableDictionary *)arg5 forLeadingCellAppearance:(_Bool)arg6 preferredDynamicSlotAllocation:(unsigned long long)arg7;
- (NSArray *)assetHandlesWithOperationInfo:(id <NTTodayResultOperationInfoProviding>)arg1 forLeadingCellAppearance:(_Bool)arg2;
@end
