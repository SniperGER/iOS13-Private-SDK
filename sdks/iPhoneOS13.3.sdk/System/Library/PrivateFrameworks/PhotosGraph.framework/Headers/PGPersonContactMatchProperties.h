//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface PGPersonContactMatchProperties : NSObject
{
    BOOL _contactFaceprintMatch;
    NSString *_contactIdentifier;
    NSUInteger _numberOfWeakBirthdayMomentsAroundBirthdayDate;
    NSUInteger _numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
    NSUInteger _numberOfMomentsAtAddress;
    NSUInteger _numberOfMomentsAtMentionedAddress;
    NSUInteger _numberOfMomentsOverlappingWithCalendarEvents;
    NSUInteger _numberOfAppearancesInSharedAssets;
    NSUInteger _numberOfCMMSharedMomentsInMessageConversations;
    double _faceTimeFaceprintConfidence;
    NSMutableSet *_socialGroupDescriptions;
    NSMutableSet *_messageGroupDescriptions;
    double _socialGroupsOverlapScore;
    NSUInteger _numberOfMatchedRelationships;
    NSMutableSet *_matchedRelationships;
    NSUInteger _genderMatch;
    double _matchScore;
    double _birthdayScore;
    double _potentialBirthdayScore;
    double _addressScore;
    double _mentionedAddressScore;
    double _calendarScore;
    double _sharedAssetScore;
    double _sharedCMMScore;
    double _relationshipScore;
    double _scoreAfterMessagePenalty;
}

@property(nonatomic) double scoreAfterMessagePenalty; // @synthesize scoreAfterMessagePenalty=_scoreAfterMessagePenalty;
@property(nonatomic) double relationshipScore; // @synthesize relationshipScore=_relationshipScore;
@property(nonatomic) double sharedCMMScore; // @synthesize sharedCMMScore=_sharedCMMScore;
@property(nonatomic) double sharedAssetScore; // @synthesize sharedAssetScore=_sharedAssetScore;
@property(nonatomic) double calendarScore; // @synthesize calendarScore=_calendarScore;
@property(nonatomic) double mentionedAddressScore; // @synthesize mentionedAddressScore=_mentionedAddressScore;
@property(nonatomic) double addressScore; // @synthesize addressScore=_addressScore;
@property(nonatomic) double potentialBirthdayScore; // @synthesize potentialBirthdayScore=_potentialBirthdayScore;
@property(nonatomic) double birthdayScore; // @synthesize birthdayScore=_birthdayScore;
@property(nonatomic) NSUInteger genderMatch; // @synthesize genderMatch=_genderMatch;
@property(retain, nonatomic) NSMutableSet *matchedRelationships; // @synthesize matchedRelationships=_matchedRelationships;
@property(nonatomic) NSUInteger numberOfMatchedRelationships; // @synthesize numberOfMatchedRelationships=_numberOfMatchedRelationships;
@property(nonatomic) double socialGroupsOverlapScore; // @synthesize socialGroupsOverlapScore=_socialGroupsOverlapScore;
@property(retain, nonatomic) NSMutableSet *messageGroupDescriptions; // @synthesize messageGroupDescriptions=_messageGroupDescriptions;
@property(retain, nonatomic) NSMutableSet *socialGroupDescriptions; // @synthesize socialGroupDescriptions=_socialGroupDescriptions;
@property(nonatomic) double faceTimeFaceprintConfidence; // @synthesize faceTimeFaceprintConfidence=_faceTimeFaceprintConfidence;
@property(nonatomic) BOOL contactFaceprintMatch; // @synthesize contactFaceprintMatch=_contactFaceprintMatch;
@property(nonatomic) NSUInteger numberOfCMMSharedMomentsInMessageConversations; // @synthesize numberOfCMMSharedMomentsInMessageConversations=_numberOfCMMSharedMomentsInMessageConversations;
@property(nonatomic) NSUInteger numberOfAppearancesInSharedAssets; // @synthesize numberOfAppearancesInSharedAssets=_numberOfAppearancesInSharedAssets;
@property(nonatomic) NSUInteger numberOfMomentsOverlappingWithCalendarEvents; // @synthesize numberOfMomentsOverlappingWithCalendarEvents=_numberOfMomentsOverlappingWithCalendarEvents;
@property(nonatomic) NSUInteger numberOfMomentsAtMentionedAddress; // @synthesize numberOfMomentsAtMentionedAddress=_numberOfMomentsAtMentionedAddress;
@property(nonatomic) NSUInteger numberOfMomentsAtAddress; // @synthesize numberOfMomentsAtAddress=_numberOfMomentsAtAddress;
@property(nonatomic) NSUInteger numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate; // @synthesize numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate=_numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
@property(nonatomic) NSUInteger numberOfWeakBirthdayMomentsAroundBirthdayDate; // @synthesize numberOfWeakBirthdayMomentsAroundBirthdayDate=_numberOfWeakBirthdayMomentsAroundBirthdayDate;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
// - (void).cxx_destruct;
- (void)setPersonContactMatchScore:(double)arg1;
@property(readonly, nonatomic) double matchScore; // @synthesize matchScore=_matchScore;
- (id)edgeProperties;
- (id)_relationshipsDescription;
- (id)_messageGroupsDescription;
- (id)_socialGroupsDescription;
- (id)description;
- (id)_stringsForRelationshipMatch;
- (void)registerMessageFrequencyPenaltyNewScore:(double)arg1;
- (void)registerGenderMatch:(NSUInteger)arg1;
- (void)registerMatchedRelationship:(NSUInteger)arg1 withPeopleCount:(NSUInteger)arg2;
- (void)registerCMMWithPeopleCount:(NSUInteger)arg1;
- (void)registerSocialGroupAndMessageGroupMatchScore:(double)arg1 debugSocialGroupsDescription:(id)arg2 debugMessageGroupsDescription:(id)arg3;
- (void)registerCalendarEventWithPeopleCount:(NSUInteger)arg1;
- (void)registerFacetimeFaceprintMatchConfidence:(double)arg1;
- (void)registerContactFaceprintMatch;
- (void)registerSharedAssetAppearanceWithPeopleCount:(NSUInteger)arg1;
- (void)registerMomentAtMentionedAddressWithPeopleCount:(NSUInteger)arg1;
- (void)registerMomentAtAddressWithPeopleCount:(NSUInteger)arg1;
- (void)registerPotentialBirthdayWithPeopleCount:(NSUInteger)arg1;
- (void)registerBirthdayWithPeopleCount:(NSUInteger)arg1;
- (id)initWithContactIdentifier:(id)arg1;

@end
