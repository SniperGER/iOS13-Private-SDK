//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTextCheckingResult;

__attribute__((visibility("hidden")))
@interface PRTypologyCandidate : NSObject
{
    NSString *_candidateString;
    _NSRange _selectedRange;
    NSTextCheckingResult *_result;
    double _openTime;
    double _closeTime;
    BOOL _isOpen;
}

+ (id)openTypologyCandidate:(id)arg1 selectedRange:(_NSRange)arg2 inString:(id)arg3;
- (void)closeTypologyCandidateWithResult:(id)arg1;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)description;
- (id)initWithString:(id)arg1 range:(_NSRange)arg2;

@end
