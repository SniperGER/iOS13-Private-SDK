//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface CKDFileWatcher : NSObject
{
    int _fd;
    NSString *_path;
    NSObject<OS_dispatch_source> *_source;
}

+ (id)queue;
@property(nonatomic) int fd; // @synthesize fd=_fd;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
