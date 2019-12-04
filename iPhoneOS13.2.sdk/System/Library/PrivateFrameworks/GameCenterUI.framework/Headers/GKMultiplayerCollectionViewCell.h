//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class GKDashboardPlayerPhotoView, GKMultiplayerParticipant, NSLayoutConstraint, UILabel, UIView;

@interface GKMultiplayerCollectionViewCell : UICollectionViewCell
{
    _Bool _removable;
    GKMultiplayerParticipant *_participant;
    long long _number;
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    UIView *_accessoryContainerView;
    GKDashboardPlayerPhotoView *_iconView;
    NSLayoutConstraint *_cellLeadingConstraint;
    NSLayoutConstraint *_nameLabelBaselineConstraintToCenterLine;
    NSLayoutConstraint *_statusLabelTopConstraintToNameBaseline;
    NSLayoutConstraint *_statusLabelBaselineConstraintToNameBaseline;
    NSLayoutConstraint *_nameLabelCenterlineConstraintToCenterline;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) NSLayoutConstraint *nameLabelCenterlineConstraintToCenterline; // @synthesize nameLabelCenterlineConstraintToCenterline=_nameLabelCenterlineConstraintToCenterline;
@property(retain, nonatomic) NSLayoutConstraint *statusLabelBaselineConstraintToNameBaseline; // @synthesize statusLabelBaselineConstraintToNameBaseline=_statusLabelBaselineConstraintToNameBaseline;
@property(retain, nonatomic) NSLayoutConstraint *statusLabelTopConstraintToNameBaseline; // @synthesize statusLabelTopConstraintToNameBaseline=_statusLabelTopConstraintToNameBaseline;
@property(retain, nonatomic) NSLayoutConstraint *nameLabelBaselineConstraintToCenterLine; // @synthesize nameLabelBaselineConstraintToCenterLine=_nameLabelBaselineConstraintToCenterLine;
@property(retain, nonatomic) NSLayoutConstraint *cellLeadingConstraint; // @synthesize cellLeadingConstraint=_cellLeadingConstraint;
@property(retain, nonatomic) GKDashboardPlayerPhotoView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *accessoryContainerView; // @synthesize accessoryContainerView=_accessoryContainerView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) long long number; // @synthesize number=_number;
@property(nonatomic) _Bool removable; // @synthesize removable=_removable;
@property(copy, nonatomic) GKMultiplayerParticipant *participant; // @synthesize participant=_participant;
- (void)prepareForReuse;
- (id)description;
- (void)updateAccessoryViewForType:(long long)arg1;
- (void)removeAccessorySubviews;
- (void)participantChanged;
- (void)configureConstraintsForCurrentTraitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end
