//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIClassSwapper : NSObject
{
    NSString *className;
    id object;
}

+ (id)swapperForObject:(id)arg1 withClassName:(id)arg2;
- (id)object;
- (id)className;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)performSelectorForObject:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3 withObject:(id)arg4 withObject:(id)arg5;
- (id)initWithObject:(id)arg1 andClassName:(id)arg2;

@end
