//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString;

@interface FCPPTFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
{
    NSString *_channelID;
}

@property(retain, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (void)performOperation;
- (id)initWithChannelID:(id)arg1 context:(id)arg2 fromCursor:(id)arg3 toCursor:(id)arg4 groupEmitterIdentifier:(id)arg5;

@end
