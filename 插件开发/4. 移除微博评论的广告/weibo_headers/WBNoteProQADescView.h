//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, WBContactAvatarView, WBGuideView, WBUserScreenNameLabelControl;

@interface WBNoteProQADescView : UIView
{
    NSString *_featureKey;
    NSString *_imageName;
    WBContactAvatarView *_avatarView;
    WBUserScreenNameLabelControl *_screenNameLabel;
    UIImageView *_guideButton;
    WBGuideView *_guideView;
    UIButton *_backButton;
}

@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) WBGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) UIImageView *guideButton; // @synthesize guideButton=_guideButton;
@property(retain, nonatomic) WBUserScreenNameLabelControl *screenNameLabel; // @synthesize screenNameLabel=_screenNameLabel;
@property(retain, nonatomic) WBContactAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *featureKey; // @synthesize featureKey=_featureKey;
- (void).cxx_destruct;
- (void)dealloc;
- (void)backButtonPressed:(id)arg1;
- (void)guideButtonPressed:(id)arg1;
- (void)setupGuideViewWithFeatureKey:(id)arg1 andImageName:(id)arg2;
- (void)setGuideButtonVisibility:(_Bool)arg1;
- (void)setGuideViewVisibility:(_Bool)arg1;
- (void)updateQADescViewWithUser:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

