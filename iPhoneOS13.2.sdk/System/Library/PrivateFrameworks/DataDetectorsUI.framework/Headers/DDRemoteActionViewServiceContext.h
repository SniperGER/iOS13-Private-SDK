//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <DataDetectorsUI/DDRemoteActionViewServiceProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DDRemoteActionViewServiceContext : NSExtensionContext <DDRemoteActionViewServiceProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)enableUserInteraction:(_Bool)arg1;
- (void)prepareViewControllerWithCompletionHandler:(id /* block */)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
