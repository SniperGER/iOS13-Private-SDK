//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/IDSServiceDelegate-Protocol.h>

@class ACRemoteCommandHandler, IDSService, NSLock, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ACRemoteDeviceProxy : NSObject <IDSServiceDelegate>
{
    IDSService *_messageSendingService;
    NSObject<OS_dispatch_queue> *_messageSendingQueue;
    NSObject<OS_dispatch_queue> *_commandProcessingQueue;
    ACRemoteCommandHandler *_remoteCommandHandler;
    NSMutableDictionary *_completionHandlersByInternalMessageID;
    NSMutableDictionary *_internalMessageIDsByTransportID;
    NSLock *_completionHandlersLock;
}

- (long long)_priorityForMessageCarryingCommand:(id)arg1;
- (_Bool)_isValidCommandForOutgoingMessage:(id)arg1;
- (void)_dequeueCompletionHandlersForMessageWithTransportID:(id)arg1 success:(_Bool)arg2 result:(id)arg3 error:(id)arg4;
- (void)_dequeueCompletionHandlersForMessageWithInternalID:(id)arg1 success:(_Bool)arg2 result:(id)arg3 error:(id)arg4;
- (void)_enqueueCompletionHandler:(id /* block */)arg1 forMessageWithInternalID:(id)arg2 transportID:(id)arg3;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)_sendReplyForMessage:(id)arg1 withSuccess:(_Bool)arg2 result:(id)arg3 error:(id)arg4;
- (_Bool)_sendMessageData:(id)arg1 toDestination:(id)arg2 withPriority:(long long)arg3 bypassDuet:(_Bool)arg4 transportID:(id *)arg5 error:(id *)arg6;
- (void)sendCommand:(id)arg1 withAccount:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)sendCommand:(id)arg1 withAccount:(id)arg2 completion:(id /* block */)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
