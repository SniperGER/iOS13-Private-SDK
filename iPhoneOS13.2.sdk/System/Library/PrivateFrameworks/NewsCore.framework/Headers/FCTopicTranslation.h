//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NTPBArticleTopic;

@interface FCTopicTranslation : NSObject
{
    _Bool _isHidden;
    _Bool _isEligibleForGrouping;
    _Bool _isEligibleForGroupingIfFavorited;
    NSString *_tagID;
    NTPBArticleTopic *_articleTopic;
}

@property(retain, nonatomic) NTPBArticleTopic *articleTopic; // @synthesize articleTopic=_articleTopic;
@property(nonatomic) _Bool isEligibleForGroupingIfFavorited; // @synthesize isEligibleForGroupingIfFavorited=_isEligibleForGroupingIfFavorited;
@property(nonatomic) _Bool isEligibleForGrouping; // @synthesize isEligibleForGrouping=_isEligibleForGrouping;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(retain, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
- (id)description;
- (id)initWithLanguageBucket:(id)arg1;
- (id)initWithTagID:(id)arg1;
- (id)init;

@end
