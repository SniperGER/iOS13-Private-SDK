//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVPlayerViewControllerDelegate_WebKitOnly-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebAVPlayerViewControllerDelegate : NSObject <AVPlayerViewControllerDelegate_WebKitOnly>
{
    struct RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::DumbPtrTraits<WebCore::VideoFullscreenInterfaceAVKit>> _fullscreenInterface;
}

- (id).cxx_construct;
- (_Bool)playerViewControllerShouldStartPictureInPictureFromInlineWhenEnteringBackground:(id)arg1;
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (_Bool)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (_Bool)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;
- (void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;
// Error parsing type for property fullscreenInterface:
// Property attributes: T^{VideoFullscreenInterfaceAVKit=^^?^^?{atomic<unsigned int>=AI}{Mode=I}{Mode=I}{Ref<WebCore::PlaybackSessionInterfaceAVKit, WTF::DumbPtrTraits<WebCore::PlaybackSessionInterfaceAVKit> >=^{PlaybackSessionInterfaceAVKit}}{RetainPtr<WebAVPlayerViewControllerDelegate>=^v}{RetainPtr<WebAVPlayerViewController>=^v}^{VideoFullscreenModel}^{VideoFullscreenChangeObserver}{RetainPtr<UIWindow>=^v}{RetainPtr<UIViewController>=^v}{RetainPtr<UIView>=^v}{RetainPtr<UIView>=^v}{RetainPtr<UIWindow>=^v}{RetainPtr<WebAVPlayerLayerView>=^v}{Function<void (bool)>={unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > >=^{CallableWrapperBase<void, bool>}}}}{Timer<WebCore::VideoFullscreenInterfaceAVKit>=^^?{Ref<WTF::RunLoop, WTF::DumbPtrTraits<WTF::RunLoop> >=^{RunLoop}}{RetainPtr<__CFRunLoopTimer *>=^v}^{VideoFullscreenInterfaceAVKit}}{FloatRect={FloatPoint=ff}{FloatSize=ff}}C{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}BBBBBBBBBBBBBBBBBBBBBBB}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
