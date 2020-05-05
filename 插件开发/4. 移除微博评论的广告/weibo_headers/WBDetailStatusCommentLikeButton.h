//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTimelineLikeButton.h"

@class WBDetailStatusCommentLikeButtonStyleEntity;

@interface WBDetailStatusCommentLikeButton : WBTimelineLikeButton
{
    struct CGPoint oriCenter;
    _Bool _isOnLayoutSubViewsAllowed;
    _Bool _isUsedForSubComment;
    long long _prevTitleLabelLeft;
    long long _nowTitleLabelLeft;
    long long _prevLikeCount;
    long long _disPlace;
    WBDetailStatusCommentLikeButtonStyleEntity *_styleEntity;
    struct CGPoint _imageButtonOffset;
}

@property(retain, nonatomic) WBDetailStatusCommentLikeButtonStyleEntity *styleEntity; // @synthesize styleEntity=_styleEntity;
@property(nonatomic) _Bool isUsedForSubComment; // @synthesize isUsedForSubComment=_isUsedForSubComment;
@property(nonatomic) struct CGPoint imageButtonOffset; // @synthesize imageButtonOffset=_imageButtonOffset;
@property(nonatomic) long long disPlace; // @synthesize disPlace=_disPlace;
@property(nonatomic) long long prevLikeCount; // @synthesize prevLikeCount=_prevLikeCount;
@property(nonatomic) long long nowTitleLabelLeft; // @synthesize nowTitleLabelLeft=_nowTitleLabelLeft;
@property(nonatomic) long long prevTitleLabelLeft; // @synthesize prevTitleLabelLeft=_prevTitleLabelLeft;
@property(nonatomic) _Bool isOnLayoutSubViewsAllowed; // @synthesize isOnLayoutSubViewsAllowed=_isOnLayoutSubViewsAllowed;
- (void).cxx_destruct;
- (void)onLayoutSubviews;
- (double)contentWidthWithSpecialStrategy:(CDUnknownBlockType)arg1;
- (double)contentWidth;
- (void)beginLikeAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)goBackToTheStateBeforeDoFirstAnimation;
- (void)doSecondAnimation;
- (void)doFirstAnimation;
- (void)setLikeCount:(long long)arg1 changeDuringAnimation:(_Bool)arg2 specialStrategy:(CDUnknownBlockType)arg3;
- (void)setLikeCount:(long long)arg1 changeDuringAnimation:(_Bool)arg2;
- (void)_updateTitleColor;
- (void)resetHeartSkinImages;
- (void)_setTitleWithCount:(long long)arg1 specialStrategy:(CDUnknownBlockType)arg2;
- (id)defaultTitle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

