//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface _UITextViewRestorableScrollPosition : NSObject <NSCoding>
{
    NSRange * _range;
    double _offsetInLine;
}

+ (id)restorableScrollPositionWithDictionary:(id)arg1;
+ (id)restorableScrollPositionWithRange:(NSRange *)arg1;
+ (id)restorableScrollPositionForStateRestoration:(id)arg1;
+ (id)restorableScrollPositionForTextView:(id)arg1;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTextViewForStateRestoration:(id)arg1;
- (id)initWithTextView:(id)arg1;
- (double)offsetWithinLine;
- (NSRange *)range;
- (id)dictionaryRepresentation;

@end
