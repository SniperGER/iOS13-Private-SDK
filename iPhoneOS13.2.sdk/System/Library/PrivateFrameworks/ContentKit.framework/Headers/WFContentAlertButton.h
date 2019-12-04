//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContentKit/WFSelectableAlertButton.h>

@class NSObject, NSString, WFContentItem;
@protocol OS_dispatch_group;

@interface WFContentAlertButton : WFSelectableAlertButton
{
    _Bool _hasContentSubtitle;
    _Bool _hideSubtitle;
    NSString *_subtitle;
    WFContentItem *_contentItem;
    NSObject<OS_dispatch_group> *_group;
}

+ (void)processContentAlertButtonSubtitles:(id)arg1;
+ (id)buttonWithContentItem:(id)arg1 selected:(_Bool)arg2 stickySelection:(_Bool)arg3 handler:(id /* block */)arg4;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(nonatomic) _Bool hideSubtitle; // @synthesize hideSubtitle=_hideSubtitle;
@property(readonly, nonatomic) WFContentItem *contentItem; // @synthesize contentItem=_contentItem;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (_Bool)addSubtitleCompletionHandler:(id /* block */)arg1;
- (void)start;
- (void)getSubtitle:(id /* block */)arg1;
@property(readonly, nonatomic) _Bool hasContentSubtitle; // @synthesize hasContentSubtitle=_hasContentSubtitle;

@end
