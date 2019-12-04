//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICNoteFileFormat : NSObject
{
}

+ (_Bool)importNoteFromURL:(id)arg1 toNote:(id)arg2 error:(id *)arg3;
+ (void)exportNote:(id)arg1 toURL:(id)arg2;
+ (id)pathExtension;
+ (id)fileUTType;
- (void)totalNotesFoundAtFileURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)parseFileURL:(id)arg1 newNoteBlock:(id /* block */)arg2 updatedNoteBlock:(id /* block */)arg3 errorBlock:(id /* block */)arg4 completedParsingBlock:(id /* block */)arg5;
- (void)cancelParsing;
- (_Bool)canHandleFileURL:(id)arg1;
- (id)allowedFileTypes;

@end
