//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UISEGestureFeature.h>

#import <UIKitCore/_UISETouchedEdgesProvider-Protocol.h>

@protocol _UISEGestureFeatureSettings, _UISETouchedEdgesProvider;

__attribute__((visibility("hidden")))
@interface _UISEVelocityDirectionEdgesGestureFeature : _UISEGestureFeature <_UISETouchedEdgesProvider>
{
    id <_UISEGestureFeatureSettings> _settings;
    id <_UISETouchedEdgesProvider> _provider;
    BOOL _exactMatchEdges;
    CGPoint _initialLocation;
    NSUInteger _touchedEdges;
}

@property(readonly, nonatomic) NSUInteger touchedEdges; // @synthesize touchedEdges=_touchedEdges;
// - (void).cxx_destruct;
- (id)debugDictionary;
// - (void)_incorporateSample:(const struct _UISEGestureFeatureSample )arg1;
- (id)initWithSettings:(id)arg1 touchedEdgesProvider:(id)arg2 exactMatchEdges:(BOOL)arg3;

@end
