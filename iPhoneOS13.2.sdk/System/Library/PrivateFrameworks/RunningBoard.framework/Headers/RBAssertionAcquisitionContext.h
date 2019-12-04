//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RBProcess, RBSAssertionDescriptor;

@interface RBAssertionAcquisitionContext : NSObject
{
    _Bool _allowAbstractTarget;
    _Bool _unitTesting;
    RBProcess *_process;
    RBSAssertionDescriptor *_descriptor;
    unsigned long long _acquisitionPolicy;
    id _holdToken;
}

+ (id)contextForProcess:(id)arg1 withDescriptor:(id)arg2;
@property(nonatomic) _Bool unitTesting; // @synthesize unitTesting=_unitTesting;
@property(retain, nonatomic) id holdToken; // @synthesize holdToken=_holdToken;
@property(nonatomic) unsigned long long acquisitionPolicy; // @synthesize acquisitionPolicy=_acquisitionPolicy;
@property(nonatomic) _Bool allowAbstractTarget; // @synthesize allowAbstractTarget=_allowAbstractTarget;
@property(readonly, nonatomic) RBSAssertionDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) RBProcess *process; // @synthesize process=_process;

@end
