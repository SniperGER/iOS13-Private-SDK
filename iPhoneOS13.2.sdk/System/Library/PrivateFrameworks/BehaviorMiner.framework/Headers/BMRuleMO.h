//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet;

@interface BMRuleMO : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(retain, nonatomic) NSSet *antecedent; // @dynamic antecedent;
@property(nonatomic) double confidence; // @dynamic confidence;
@property(retain, nonatomic) NSSet *consequent; // @dynamic consequent;
@property(nonatomic) double support; // @dynamic support;

@end
