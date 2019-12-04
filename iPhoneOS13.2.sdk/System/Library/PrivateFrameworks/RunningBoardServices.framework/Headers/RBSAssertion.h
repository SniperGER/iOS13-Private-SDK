//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/BSDescriptionProviding-Protocol.h>

@class NSArray, NSHashTable, NSString, RBSAssertionDescriptor, RBSAssertionIdentifier, RBSTarget;
@protocol RBSServiceLocalProtocol;

@interface RBSAssertion : NSObject <BSDescriptionProviding>
{
    NSHashTable *_observers;
    id /* block */ _invalidationHandler;
    id /* block */ _warningHandler;
    struct os_unfair_lock_s _lock;
    RBSAssertionDescriptor *_descriptor;
    unsigned long long _state;
    id <RBSServiceLocalProtocol> _service;
}

- (id)_observers;
- (void)_serverDidChangeIdentifier:(id)arg1;
- (void)_serverWillInvalidate;
- (void)_serverInvalidateWithError:(id)arg1;
- (_Bool)_clientInvalidateWithError:(out id *)arg1;
@property(readonly, copy, nonatomic) RBSAssertionDescriptor *descriptor;
@property(readonly, copy, nonatomic) RBSAssertionIdentifier *identifier;
@property(readonly, nonatomic) unsigned long long state;
- (id)_initWithDescriptor:(id)arg1 service:(id)arg2;
- (id)_initWithServerValidatedDescriptor:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)setExpirationWarningHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *attributes;
@property(readonly, nonatomic) RBSTarget *target;
@property(readonly, copy, nonatomic) NSString *explanation;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (oneway void)invalidate;
- (_Bool)invalidateWithError:(out id *)arg1;
- (oneway void)acquireWithInvalidationHandler:(id /* block */)arg1;
- (_Bool)acquireWithError:(out id *)arg1;
- (id)initWithExplanation:(id)arg1 target:(id)arg2 attributes:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
