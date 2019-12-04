//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Search/SPSearchEntity.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface SPContactSearchEntity : SPSearchEntity
{
    CNContact *_contact;
    NSString *_contactIdentifier;
}

+ (id)contactStore;
+ (_Bool)supportsSecureCoding;
@property(retain) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (id)contact;
- (id)queryString;
- (void)appendToQuery:(id)arg1 key:(id)arg2 value:(id)arg3 additions:(id)arg4;
- (id)tokenText;
- (_Bool)isScopedAppSearch;
- (_Bool)isPeopleSearch;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;

@end
