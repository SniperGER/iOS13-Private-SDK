//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EspressoDataFrameMappedFile : NSObject
{
    int file_id;
    unsigned long long length;
    NSString *_path;
    char *_basePtr;
}

@property char *basePtr; // @synthesize basePtr=_basePtr;
@property(retain) NSString *path; // @synthesize path=_path;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
