//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProviderManager.h>

#import <RelevanceEngine/REMLModelManagerObserver-Protocol.h>
#import <RelevanceEngine/REPredictorObserver-Protocol.h>

@class NSString, REMLSentimentAnalyzer;

@interface REContentRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REMLModelManagerObserver>
{
    REMLSentimentAnalyzer *_sentimentAnalyzer;
}

+ (Class)_relevanceProviderClass;
+ (id)_features;
- (void)predictorDidUpdate:(id)arg1;
- (void)modelManagerDidUpdateModel:(id)arg1;
- (void)pause;
- (void)resume;
- (_Bool)_suppportsSentimentAnalysis;
- (_Bool)_suppportsPortarit;
- (id)_valuesForProvider:(id)arg1 context:(id)arg2 features:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
