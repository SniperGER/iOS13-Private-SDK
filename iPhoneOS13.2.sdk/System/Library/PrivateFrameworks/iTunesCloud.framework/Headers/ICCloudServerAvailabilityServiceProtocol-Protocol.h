//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@protocol ICCloudServerAvailabilityServiceProtocol 
- (void)canShowCloudVideoWithCompletion:(void (^)(_Bool))arg1;
- (void)canShowCloudMusicWithCompletion:(void (^)(_Bool))arg1;
- (void)canShowCloudDownloadButtonsWithCompletion:(void (^)(_Bool))arg1;
- (void)shouldProhibitStoreAppsActionForCurrentNetworkConditionsWithCompletion:(void (^)(_Bool))arg1;
- (void)isCellularDataRestrictedForStoreAppsWithCompletion:(void (^)(_Bool))arg1;
- (void)shouldProhibitVideosActionForCurrentNetworkConditionsWithCompletion:(void (^)(_Bool))arg1;
- (void)isCellularDataRestrictedForVideosWithCompletion:(void (^)(_Bool))arg1;
- (void)shouldProhibitMusicActionForCurrentNetworkConditionsWithCompletion:(void (^)(_Bool))arg1;
- (void)isCellularDataRestrictedForMusicWithCompletion:(void (^)(_Bool))arg1;
- (void)hasProperNetworkConditionsToShowCloudMediaWithCompletion:(void (^)(_Bool))arg1;
- (void)hasProperNetworkConditionsToPlayMediaWithCompletion:(void (^)(_Bool))arg1;
@end
