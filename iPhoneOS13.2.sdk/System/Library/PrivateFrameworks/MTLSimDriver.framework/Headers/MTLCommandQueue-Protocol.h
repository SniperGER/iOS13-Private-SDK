//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString;
@protocol MTLCommandBuffer, MTLDevice;

@protocol MTLCommandQueue 
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
- (void)insertDebugCaptureBoundary;
- (id <MTLCommandBuffer>)commandBufferWithUnretainedReferences;
- (id <MTLCommandBuffer>)commandBuffer;
@end
