//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/TTAttachment-Protocol.h>

@class NSString;

@interface TTAttachment : NSObject <TTAttachment>
{
    NSString *_attachmentIdentifier;
    NSString *_attachmentUTI;
}

+ (BOOL)isAttachment:(id)arg1 equalToModelComparable:(id)arg2;
@property(retain, nonatomic) NSString *attachmentUTI; // @synthesize attachmentUTI=_attachmentUTI;
@property(retain, nonatomic) NSString *attachmentIdentifier; // @synthesize attachmentIdentifier=_attachmentIdentifier;
// - (void).cxx_destruct;
- (id)attachmentInContext:(id)arg1;
- (BOOL)isEqualToModelComparable:(id)arg1;

@end
