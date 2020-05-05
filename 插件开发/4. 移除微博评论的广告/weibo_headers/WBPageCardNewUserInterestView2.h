//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardTrendView2.h"

#import "WBInternalStyleButtonViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UILabel, UIView, WBContactAvatarView, WBInternalStyleButtonView;

@interface WBPageCardNewUserInterestView2 : WBPageCardTrendView2 <WBInternalStyleButtonViewDelegate>
{
    _Bool _isNewDataVersion;
    unsigned long long _viewType;
    WBContactAvatarView *_mainUserAvatarView;
    UILabel *_mainTitleLabel;
    UILabel *_subTitleLabel;
    WBInternalStyleButtonView *_mainCommonButton;
    NSMutableArray *_recommendUsersViews;
    NSMutableArray *_recommendContentsViews;
    UIView *_topArea;
}

@property(retain, nonatomic) UIView *topArea; // @synthesize topArea=_topArea;
@property(retain, nonatomic) NSMutableArray *recommendContentsViews; // @synthesize recommendContentsViews=_recommendContentsViews;
@property(retain, nonatomic) NSMutableArray *recommendUsersViews; // @synthesize recommendUsersViews=_recommendUsersViews;
@property(retain, nonatomic) WBInternalStyleButtonView *mainCommonButton; // @synthesize mainCommonButton=_mainCommonButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) WBContactAvatarView *mainUserAvatarView; // @synthesize mainUserAvatarView=_mainUserAvatarView;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) _Bool isNewDataVersion; // @synthesize isNewDataVersion=_isNewDataVersion;
- (void).cxx_destruct;
- (_Bool)canResolveButtonStyleForCommonButtonModel:(id)arg1 withCommonButtonView:(id)arg2 outputStyle:(CDStruct_4bcfbbae *)arg3;
- (void)singleImageViewTapped:(id)arg1;
- (void)singleAvatarTapped:(id)arg1;
- (void)setTrendViewModel:(id)arg1;
- (void)_setOldVersionPageCard:(id)arg1;
- (void)_setNewVersionPageCard:(id)arg1;
- (void)topAreaDidTapped:(id)arg1;
- (void)layoutSubviews;
- (void)reloadUIElements;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

