//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIStackView;
@protocol HKInteractiveChartAnnotationViewDataSource;

@interface HKInteractiveChartAnnotationView : UIView
{
    id <HKInteractiveChartAnnotationViewDataSource> _dataSource;
    UIStackView *_columnStack;
    UIStackView *_containerStack;
    UIStackView *_marginStack;
    long long _context;
}

@property(nonatomic) long long context; // @synthesize context=_context;
@property(retain, nonatomic) UIStackView *marginStack; // @synthesize marginStack=_marginStack;
@property(retain, nonatomic) UIStackView *containerStack; // @synthesize containerStack=_containerStack;
@property(retain, nonatomic) UIStackView *columnStack; // @synthesize columnStack=_columnStack;
@property(nonatomic) __weak id <HKInteractiveChartAnnotationViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (id)_createSeparatorView;
- (void)reloadData;
- (void)lowerPriorityConstraint:(id)arg1;
- (void)_configureStacks;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(long long)arg1;

@end
