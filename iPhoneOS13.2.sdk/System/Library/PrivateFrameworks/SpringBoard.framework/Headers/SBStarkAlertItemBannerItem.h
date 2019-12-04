//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBStarkBannerItem.h>

@class NSDate, NSString, SBAlertItem, SBUISound;

@interface SBStarkAlertItemBannerItem : SBStarkBannerItem
{
    SBAlertItem *_alertItem;
    NSString *_title;
    NSString *_message;
    SBUISound *_sound;
    NSDate *_originDate;
}

- (id)subActions;
- (id)subActionLabels;
- (id)sourceDate;
- (id)sound;
- (id /* block */)ignoreAction;
- (id /* block */)action;
- (_Bool)isSticky;
- (unsigned long long)priority;
- (_Bool)matchesContext:(id)arg1;
- (void)reloadDisplayProperties;
- (long long)defaultActionType;
- (id)iconImages;
- (id)category;
- (id)title;
- (void)dealloc;
- (id)initWithAlertItem:(id)arg1 configuration:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

@end
