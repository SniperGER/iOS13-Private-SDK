//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BBBulletin, BBSyncService, NSArray, NSString;

@protocol BBSyncServiceDelegate <NSObject>
- (NSString *)syncService:(BBSyncService *)arg1 sectionIdentifierForUniversalSectionIdentifier:(NSString *)arg2;
- (NSString *)syncService:(BBSyncService *)arg1 universalSectionIdentifierForSectionIdentifier:(NSString *)arg2;
- (BOOL)syncService:(BBSyncService *)arg1 shouldAbortDelayedDismissalForBulletin:(BBBulletin *)arg2;
- (void)syncService:(BBSyncService *)arg1 receivedDismissalDictionaries:(NSArray *)arg2 dismissalIDs:(NSArray *)arg3 inSection:(NSString *)arg4 forFeeds:(NSUInteger)arg5;
@end
