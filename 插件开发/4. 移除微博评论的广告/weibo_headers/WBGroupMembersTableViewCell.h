//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

#import "MMGroupMemberRankTagViewDataSource-Protocol.h"
#import "MMGroupMemberRankTagViewDelegate-Protocol.h"

@class MMGroupMemberRankTagView, NSMutableArray, NSString, UIImageView, UIView, WBContactAvatarView, WBDirectionalGroupUser;

@interface WBGroupMembersTableViewCell : WBTableViewCell <MMGroupMemberRankTagViewDataSource, MMGroupMemberRankTagViewDelegate>
{
    _Bool _selectUI;
    _Bool _isChoosed;
    _Bool _isAffi;
    _Bool _isLoyalFans;
    WBDirectionalGroupUser *_groupUser;
    unsigned long long _memberRoleType;
    unsigned long long _roleType;
    WBContactAvatarView *_avatarView;
    UIImageView *_roleMarkImageView;
    UIImageView *_affiImageView;
    UIImageView *_selectedImageView;
    UIView *_bottomLine;
    MMGroupMemberRankTagView *_memberRankTagView;
    NSMutableArray *_tagModelMArray;
}

@property(retain, nonatomic) NSMutableArray *tagModelMArray; // @synthesize tagModelMArray=_tagModelMArray;
@property(retain, nonatomic) MMGroupMemberRankTagView *memberRankTagView; // @synthesize memberRankTagView=_memberRankTagView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UIImageView *affiImageView; // @synthesize affiImageView=_affiImageView;
@property(retain, nonatomic) UIImageView *roleMarkImageView; // @synthesize roleMarkImageView=_roleMarkImageView;
@property(retain, nonatomic) WBContactAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool isLoyalFans; // @synthesize isLoyalFans=_isLoyalFans;
@property(nonatomic) _Bool isAffi; // @synthesize isAffi=_isAffi;
@property(nonatomic) unsigned long long roleType; // @synthesize roleType=_roleType;
@property(nonatomic) unsigned long long memberRoleType; // @synthesize memberRoleType=_memberRoleType;
@property(nonatomic) _Bool isChoosed; // @synthesize isChoosed=_isChoosed;
@property(nonatomic) _Bool selectUI; // @synthesize selectUI=_selectUI;
@property(retain, nonatomic) WBDirectionalGroupUser *groupUser; // @synthesize groupUser=_groupUser;
- (void).cxx_destruct;
- (void)didLayoutForTagView:(id)arg1;
- (id)tagModelsForTagView:(id)arg1;
- (void)prepareForReuse;
- (id)displayName:(id)arg1 withMaxWidth:(double)arg2;
- (void)layoutSubviews;
- (void)setMemberInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

