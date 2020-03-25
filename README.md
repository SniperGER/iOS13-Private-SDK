# iOS 13 Private SDK
iOS 13.3 SDK, complete with PrivateFrameworks and included headers. For use in jailbroken development.

## Installation
Copy the SDK folder(s) in `sdks` to `$THEOS/sdks` and the folder(s) in `include` to `$THEOS/include`.

## Creating your own patched SDK

Run the included `create_patched_sdk.sh` script and let `tbd` do its magic.  
To generate the required headers, run `generate_headers.sh` and specify the output directory using `-o OUTDIR`.

NOTE: For some reason, IOSurface headers must not be inside the SDK itself, but in one of Theos' Header Search Paths outside the SDK (such as `$THEOS/include`). As the included scripts to not handle that by themselves, you must move `/System/Library/Frameworks/IOSurface.framework/Headers/` in the SDK to `$THEOS/include/IOSurface`.

## Credits

+ LeoNatan (LeoNatan/Apple-Runtime-Headers): For the original `generate_headers.sh` script  
+ kirb, inoahdev (theos/sdks, inoahdev/tbd): For the original `create_patched_sdk.sh` script and the `tbd` binary