//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class NSString, TIKeyboardLayout;

@interface TITypologyRecordKeyboardLayout : TITypologyRecord
{
    TIKeyboardLayout *_keyboardLayout;
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) TIKeyboardLayout *keyboardLayout; // @synthesize keyboardLayout=_keyboardLayout;
// - (void).cxx_destruct;
- (id)shortDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
