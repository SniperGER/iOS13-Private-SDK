//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationListComponentDelegate-Protocol.h>

@class NCNotificationGroupList, NCNotificationRequest, NCNotificationStructuredSectionList;
@protocol NCAuxiliaryOptionsProviding;

@protocol NCNotificationStructuredSectionListDelegate <NCNotificationListComponentDelegate>
- (_Bool)notificationStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 shouldScrollToTopForGroupList:(NCNotificationGroupList *)arg2;
- (void)notificationStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 requestsScrollingToContentOffset:(double)arg2 withCompletion:(void (^)(void))arg3;
- (_Bool)notificationStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 shouldFilterNotificationRequest:(NCNotificationRequest *)arg2;
- (id <NCAuxiliaryOptionsProviding>)notificationStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(NCNotificationRequest *)arg2 isLongLook:(_Bool)arg3;
@end
