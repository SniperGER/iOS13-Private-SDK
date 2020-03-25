//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSAttributedString, NSString;

@protocol ICAttachmentFindable <NSObject>
- (_NSRange)selectedRangeWithinRange:(_NSRange)arg1 inFindableString:(NSAttributedString *)arg2;
- (void)setSelectedRange:(_NSRange)arg1 inFindableString:(NSAttributedString *)arg2;
- (void)replaceCharactersInRange:(_NSRange)arg1 withString:(NSString *)arg2 inFindableString:(NSAttributedString *)arg3;
- (void)drawCharactersInRange:(_NSRange)arg1 inFindableString:(NSAttributedString *)arg2 forContentView:(UIView )arg3;
- (void)scrollToRange:(_NSRange)arg1 inFindableString:(NSAttributedString *)arg2;
- (NSArray *)rectsForRange:(_NSRange)arg1 inFindableString:(NSAttributedString *)arg2;
- (UIView )viewForRange:(_NSRange)arg1 inFindableString:(NSAttributedString *)arg2;
@end
