//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class FPXDomainContext, NSDictionary;

__attribute__((visibility("hidden")))
@interface FPXServiceEndpointFactory : NSObject <NSFileProviderServiceEndpointCreating>
{
    NSDictionary *_serviceSources;
    FPXDomainContext *_domainContext;
}

- (void)getListenerEndpointForServiceName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithServiceSources:(id)arg1 domainContext:(id)arg2;

@end
