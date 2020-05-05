//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WCFinderFeedContentHeaderActionDelegate-Protocol.h"
#import "WCFinderFeedContentMediaActionProtocol-Protocol.h"
#import "WCFinderFeedContentVMExt-Protocol.h"

@class NSString, WCFinderFeedContentHeaderView, WCFinderFeedContentVM, WCFinderNewMultiMediaView;
@protocol WCFinderMulitMediaTableViewCellDelegate;

@interface WCFinderMulitMediaTableViewCell : UITableViewCell <WCFinderFeedContentMediaActionProtocol, WCFinderFeedContentHeaderActionDelegate, WCFinderFeedContentVMExt>
{
    _Bool _isHeaderNickNameLinkColor;
    _Bool _isForceDisableLikeAction;
    _Bool _isEnableMediaHeaderFollowAction;
    _Bool _isEnableMediaHeaderShowFollowTips;
    id <WCFinderMulitMediaTableViewCellDelegate> _delegate;
    long long _dataPos;
    WCFinderFeedContentHeaderView *_headerView;
    WCFinderNewMultiMediaView *_mediaView;
    WCFinderFeedContentVM *_contentVM;
}

+ (double)cellHeightWith:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderNewMultiMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) WCFinderFeedContentHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) long long dataPos; // @synthesize dataPos=_dataPos;
@property(nonatomic) __weak id <WCFinderMulitMediaTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isEnableMediaHeaderShowFollowTips; // @synthesize isEnableMediaHeaderShowFollowTips=_isEnableMediaHeaderShowFollowTips;
@property(nonatomic) _Bool isEnableMediaHeaderFollowAction; // @synthesize isEnableMediaHeaderFollowAction=_isEnableMediaHeaderFollowAction;
@property(nonatomic) _Bool isForceDisableLikeAction; // @synthesize isForceDisableLikeAction=_isForceDisableLikeAction;
@property(nonatomic) _Bool isHeaderNickNameLinkColor; // @synthesize isHeaderNickNameLinkColor=_isHeaderNickNameLinkColor;
- (void).cxx_destruct;
- (void)showSpamTipsWithString:(id)arg1;
- (void)startLikeAnimation;
- (void)onFeedContentLikedDataUpdateByUserAction:(id)arg1 isLike:(_Bool)arg2;
- (void)onHeaderMoreClickAction;
- (void)onVideoSeekActionWithDirection:(_Bool)arg1;
- (void)followStatueChanged:(id)arg1 isFollow:(_Bool)arg2;
- (void)clickAvatar:(id)arg1;
- (void)stopVideoPlayerWithReport:(id)arg1 mediaWrap:(id)arg2 currentIndex:(unsigned long long)arg3;
- (void)onVideoStopPlay;
- (void)contentMediaDidEndPlay;
- (_Bool)isEnableDoubleLikeAction;
- (void)didFeedDoubleTapAction;
- (void)didSelectVideoMediaMuteChanged:(_Bool)arg1;
- (void)retryLoadingVideoResource:(_Bool)arg1;
- (void)retryLoadingCoverImg;
- (void)photoContentPageTurning:(unsigned long long)arg1 lastIndex:(unsigned long long)arg2;
- (void)updateCurrentVideoThumb;
- (void)resetCurrentVideoThumb;
- (double)getPlayVideoTotalTime;
- (double)getCurrentPlayVideoTime;
- (void)changeVideoSilenceStatue:(_Bool)arg1;
- (void)stopVideoIfSupport;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2;
- (_Bool)isSupportVideoProcess;
- (void)resetMediaIconVisibleIfNeeded;
- (void)trigerMediaIconHiddenAnimationIfSupport;
- (void)hideFollowViewIfNeeded;
- (struct CGRect)convertMediaViewRectTo:(id)arg1;
- (void)updateMediaWith:(id)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

