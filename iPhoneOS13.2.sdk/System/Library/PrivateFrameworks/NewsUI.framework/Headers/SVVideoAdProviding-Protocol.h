//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsUI/SVVideoProviding-Protocol.h>
#import <NewsUI/SVVideoSkipThreshold-Protocol.h>

@protocol SVVideoAdProviding <SVVideoProviding, SVVideoSkipThreshold>
@property(readonly, nonatomic) _Bool hasAction;
@property(readonly, nonatomic) unsigned long long skipThreshold;
- (void)presentPrivacyStatement;
- (void)presentAction;
- (void)skipped;
@end
