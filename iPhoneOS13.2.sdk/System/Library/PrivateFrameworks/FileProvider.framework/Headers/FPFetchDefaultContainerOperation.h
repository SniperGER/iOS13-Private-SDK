//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPFetchDefaultContainerOperation : FPActionOperation
{
    NSString *_defaultName;
    NSString *_appIdentifier;
    NSString *_domainIdentifier;
    id /* block */ _fetchCompletionBlock;
}

@property(copy, nonatomic) id /* block */ fetchCompletionBlock; // @synthesize fetchCompletionBlock=_fetchCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)actionMain;
- (id)initForApplicationProxy:(id)arg1 providerDomain:(id)arg2;

@end
