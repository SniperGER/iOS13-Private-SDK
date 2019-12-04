//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCPersonalizationFeature.h>

@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature
{
    NSString *_lengthID;
}

+ (id)longLengthFeature;
+ (id)mediumLengthFeature;
+ (id)shortLengthFeature;
@property(retain, nonatomic) NSString *lengthID; // @synthesize lengthID=_lengthID;
- (double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2;
- (id)fr_description;
- (id)initWithPersonalizationIdentifier:(id)arg1;
- (id)initWithLengthIdentifier:(id)arg1;
- (id)init;

@end
