//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@interface CalDAVCalendarServerCollectionUpdatesElement : CalDAVCalendarServerResourceChangeElement
{
    int _state;
}

@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (id)copyParseRules;
- (void)setUnpublish:(id)arg1;
- (void)setPublish:(id)arg1;

@end
