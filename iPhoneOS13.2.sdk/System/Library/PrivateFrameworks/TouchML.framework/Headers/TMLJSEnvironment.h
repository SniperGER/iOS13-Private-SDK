//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TMLJSEnvironment : NSObject
{
}

+ (id)normalizeValue:(id)arg1 toType:(unsigned long long)arg2;
+ (id)convertJsValue:(id)arg1 toType:(unsigned long long)arg2;
+ (id)convertTmlValue:(id)arg1;
+ (void)initializeJSContext:(id)arg1;
+ (id)defaultModules;
+ (void)addToDefaultModules:(id)arg1;
+ (void)requireModule:(id)arg1 forJSContext:(id)arg2;
+ (void)addGCCallback:(id /* block */)arg1;
+ (void)forceGC;
+ (id)validCurrentContext;
+ (id)currentContext;
+ (void)runInContext:(id)arg1 block:(id /* block */)arg2;
+ (id)createJSContextWithRuntimeContext:(id)arg1;
+ (id)protoJSContext;
+ (void)applicationDidReceiveMemoryWarningNotification:(id)arg1;
+ (id)sharedVM;
+ (id)allocWithZone:(struct _NSZone *)arg1;

@end
