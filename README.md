# iOS 13 Private SDK
iOS 13.3 SDK, complete with PrivateFrameworks and included headers. For use in jailbroken development.

## Installation
Copy the SDK folder(s) in `sdks` to `$THEOS/sdks` and the folder(s) in `include` to `$THEOS/include`.

## Creating your own patched SDK

Run the included `create_patched_sdk.sh` script and let `tbd` do its magic.  
To generate the required headers, run `generate_headers.sh` and specify the output directory using `-o OUTDIR`.

NOTE: For some reason, IOSurface headers must not be inside the SDK itself, but in one of Theos' Header Search Paths outside the SDK (such as `$THEOS/include`). As the included scripts to not handle that by themselves, you must move `/System/Library/Frameworks/IOSurface.framework/Headers/` in the SDK to `$THEOS/include/IOSurface`.

## iOS 13 "Hybrid" SDK

If you're still using an older Xcode version (such as 8.3.3, as I did when I created this approach) but you are intending to use iOS 13 features in your project, you can use the hybrid SDK. This SDK uses a few libraries from the iOS 11.2 SDK (the last SDK to work with Xcode 8), but Frameworks and PrivateFrameworks from iOS 13.3, so you can use modern features with legacy Xcode.

Only downside seems to be that you cannot use `@available` properly, but Theos should provide CoreFoundation versions, somewhere... (or use the CoreFoundation version table over on the [iPhoneDevWiki](https://iphonedevwiki.net/index.php/CoreFoundation.framework))

## Credits

+ LeoNatan (LeoNatan/Apple-Runtime-Headers): For the original `generate_headers.sh` script  
+ kirb, inoahdev (theos/sdks, inoahdev/tbd): For the original `create_patched_sdk.sh` script and the `tbd` binary
