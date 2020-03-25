//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDecimalNumber, NSMutableDictionary, NSString, PKBillPaymentSuggestedAmount;

@interface PKBillPaymentSuggestedAmountList : NSObject
{
    NSMutableDictionary *_suggestionsForCategory;
    NSMutableDictionary *_suggestionsForAmount;
    NSMutableDictionary *_suggestedAmountGapMessageForAmount;
    NSArray *_sortedSuggestedAmounts;
    NSString *_currencyCode;
    NSDecimalNumber *_minimumAmount;
    NSDecimalNumber *_remainingStatementAmount;
    NSDecimalNumber *_maximumAmount;
    NSDecimalNumber *_smalllestSuggestionAmountBelowRemainingStatementAmount;
    PKBillPaymentSuggestedAmount *_initialSuggestedAmount;
}

+ (NSUInteger)maximumNumberSuggestions;
+ (id)requiredSuggestedAmountCategories;
+ (id)roundingHandler;
+ (id)boundaryAngle;
@property(retain, nonatomic) PKBillPaymentSuggestedAmount *initialSuggestedAmount; // @synthesize initialSuggestedAmount=_initialSuggestedAmount;
@property(readonly, copy, nonatomic) NSDecimalNumber *smalllestSuggestionAmountBelowRemainingStatementAmount; // @synthesize smalllestSuggestionAmountBelowRemainingStatementAmount=_smalllestSuggestionAmountBelowRemainingStatementAmount;
@property(readonly, copy, nonatomic) NSDecimalNumber *maximumAmount; // @synthesize maximumAmount=_maximumAmount;
@property(readonly, copy, nonatomic) NSDecimalNumber *remainingStatementAmount; // @synthesize remainingStatementAmount=_remainingStatementAmount;
@property(readonly, copy, nonatomic) NSDecimalNumber *minimumAmount; // @synthesize minimumAmount=_minimumAmount;
@property(readonly, copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly, copy, nonatomic) NSArray *sortedSuggestedAmounts; // @synthesize sortedSuggestedAmounts=_sortedSuggestedAmounts;
// - (void).cxx_destruct;
- (id)_boundaryAmount;
- (void)_updateValues;
- (id)_suggestedAmountThatIsNotRequired:(id)arg1 suggestedAmount2:(id)arg2;
- (id)_lastSuggestedAmountThatIsNotRequred;
- (BOOL)_suggestedAmountIsRequiredCategory:(id)arg1;
- (id)_smalllestSuggestionAmountBelowRemainingStatementAmount;
- (id)_sortedSuggestedAmounts;
- (id)_sortedAmounts;
- (void)_removeSuggestedAmount:(id)arg1;
- (id)description;
- (void)attemptToPurgeInvalidSuggestedAmounts;
- (BOOL)isValidWithUnableReason:(NSUInteger )arg1;
- (id)billPaymentSelectedSuggestedAmountDataEventForAmount:(id)arg1 accountIdentifier:(id)arg2 statementIdentifier:(id)arg3;
- (void)addSuggestedAmountGapMessage:(id)arg1 forStartSuggestedAmount:(id)arg2;
- (id)suggestedAmountGapMessageForStartSuggestedAmount:(id)arg1;
- (id)suggestedAmountAfterSuggestedAmount:(id)arg1;
- (id)suggestedAmountBeforeSuggestedAmount:(id)arg1;
- (BOOL)suggestedAmount:(id)arg1 isAdjoiningSuggestedAmount:(id)arg2;
- (id)minimumSuggestedAmountFromCategories:(id)arg1;
- (id)maximumSuggestedAmountFromCategories:(id)arg1;
- (id)minimumSuggestedAmount;
- (id)maximumSuggestedAmount;
- (id)suggestedAmountWithCategory:(NSUInteger)arg1;
- (BOOL)_addSuggestedAmount:(id)arg1 force:(BOOL)arg2;
- (void)addSuggestedAmountList:(id)arg1;
- (BOOL)addSuggestedAmount:(id)arg1;
- (BOOL)canAddCategory:(NSUInteger)arg1;
- (BOOL)canAddAmount:(id)arg1;
- (BOOL)canAddAmount:(id)arg1 andCategory:(NSUInteger)arg2;
- (void)_createMandatorySuggestions;
- (id)initWithCurrencyCode:(id)arg1 remainingMinimumPayment:(id)arg2 remainingStatementBalance:(id)arg3 currentBalance:(id)arg4;
- (id)init;

@end
