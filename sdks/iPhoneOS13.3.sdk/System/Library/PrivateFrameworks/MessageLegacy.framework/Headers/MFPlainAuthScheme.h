//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageLegacy/MFAuthScheme.h>

@interface MFPlainAuthScheme : MFAuthScheme
{
}

- (id)humanReadableName;
- (id)name;
- (BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (Class)authenticatorClass;

@end
