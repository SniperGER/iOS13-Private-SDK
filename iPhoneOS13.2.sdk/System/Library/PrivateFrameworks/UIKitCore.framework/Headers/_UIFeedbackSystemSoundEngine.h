//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIFeedbackEngine.h>

#import <UIKitCore/_UIFeedbackPlayer_Internal-Protocol.h>

@class NSCountedSet;

__attribute__((visibility("hidden")))
@interface _UIFeedbackSystemSoundEngine : _UIFeedbackEngine <_UIFeedbackPlayer_Internal>
{
    id /* block */ _invalidationBlock;
    NSCountedSet *_warmSSIDs;
    NSCountedSet *_suspendedSSIDs;
}

+ (_Bool)_supportsPlayingIndividualFeedback:(id)arg1;
+ (id)sharedEngine;
+ (id)_internalQueue;
@property(readonly, nonatomic) NSCountedSet *suspendedSSIDs; // @synthesize suspendedSSIDs=_suspendedSSIDs;
@property(readonly, nonatomic) NSCountedSet *warmSSIDs; // @synthesize warmSSIDs=_warmSSIDs;
@property(copy, nonatomic) id /* block */ invalidationBlock; // @synthesize invalidationBlock=_invalidationBlock;
- (id)_stats_key;
- (void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2;
- (void)_stopFeedback:(id)arg1;
- (void)_internal_playFeedbackDataNow:(id)arg1 forFeedback:(id)arg2 withOptions:(id)arg3;
- (_Bool)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(id /* block */)arg1;
- (void)_internal_updateSuspension;
- (void)_internal_stopWarmingFeedbacks:(id)arg1;
- (void)_internal_startWarmingFeedbacks:(id)arg1;
- (void)_internal_performForEachSSIDsInFeedbacks:(id)arg1 block:(id /* block */)arg2;
- (_Bool)_internal_prepareSystemSoundID:(unsigned int)arg1 forBeingActive:(_Bool)arg2;

@end
