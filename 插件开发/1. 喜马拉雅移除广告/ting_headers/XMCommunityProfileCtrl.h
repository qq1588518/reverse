//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMChatBaseScrollVC.h"

#import "CDZTableViewCellDelegate-Protocol.h"
#import "XMChatSlideViewDelegate-Protocol.h"

@class CDZTableViewCell, NSArray, NSString, XMBBSCommunity, XMChatSlideView, XMCommunityProfileHeaderView, XMCommunityProfileTeamView, XMMCommunityTheme;

@interface XMCommunityProfileCtrl : XMChatBaseScrollVC <CDZTableViewCellDelegate, XMChatSlideViewDelegate>
{
    _Bool _isWhiteBackButton;
    _Bool _showMyArticles;
    _Bool _showFeedBackEntrance;
    _Bool _showWxNoticeEntrance;
    _Bool _showEditEntrance;
    _Bool _showManagerConfigEntrance;
    _Bool _showBannedMsgEntrance;
    _Bool _showReportEntrance;
    _Bool _showReportRedPoint;
    _Bool _showCommunityIndexEntrance;
    _Bool _showRenewConfigEntrance;
    _Bool _showRefundManagerEntrance;
    _Bool _showQuestionRuleEntrance;
    _Bool _showCategoryEntrance;
    _Bool _showTopicManagerEntrance;
    _Bool _showVipAlbumEntrance;
    _Bool _showPublishManagerEntrance;
    _Bool _showCommentManagerEntrance;
    _Bool _canMemberCommented;
    _Bool _showPublishAlbumAndTrackEntrance;
    _Bool _canPublishAlbumAndTrack;
    _Bool _showShareReadedEntrance;
    _Bool _canShareReaded;
    _Bool _showOpenJoinEntrance;
    _Bool _openJoin;
    _Bool _showDissolveCommunityEntrance;
    _Bool _showQuitEntrance;
    _Bool _vipCanRefund;
    _Bool _showShareCommunityEntrance;
    unsigned long long _communityId;
    XMBBSCommunity *_communityInfo;
    XMMCommunityTheme *_communityTheme;
    NSString *_teamTitle;
    NSArray *_teamUserInfoArray;
    NSString *_topAreaTip;
    NSArray *_editSectionArray;
    NSString *_feedbackUrl;
    long long _wxSubscribeStatus;
    NSString *_customEditProfileUrl;
    NSString *_communityIndexUrl;
    NSString *_vipRenewConfigUrl;
    NSString *_refundManagerUrl;
    long long _refundCount;
    NSString *_questionReminder;
    NSString *_vipAlbumUrl;
    long long _articlePublishRole;
    NSString *_vipRefundTip;
    NSString *_vipRefundUrl;
    XMCommunityProfileHeaderView *_profileHeaderView;
    XMCommunityProfileTeamView *_teamView;
    XMChatSlideView *_slideView;
    CDZTableViewCell *_exitCell;
    CDZTableViewCell *_dissolveCell;
}

@property(retain, nonatomic) CDZTableViewCell *dissolveCell; // @synthesize dissolveCell=_dissolveCell;
@property(retain, nonatomic) CDZTableViewCell *exitCell; // @synthesize exitCell=_exitCell;
@property(retain, nonatomic) XMChatSlideView *slideView; // @synthesize slideView=_slideView;
@property(retain, nonatomic) XMCommunityProfileTeamView *teamView; // @synthesize teamView=_teamView;
@property(retain, nonatomic) XMCommunityProfileHeaderView *profileHeaderView; // @synthesize profileHeaderView=_profileHeaderView;
@property(nonatomic) _Bool showShareCommunityEntrance; // @synthesize showShareCommunityEntrance=_showShareCommunityEntrance;
@property(retain, nonatomic) NSString *vipRefundUrl; // @synthesize vipRefundUrl=_vipRefundUrl;
@property(retain, nonatomic) NSString *vipRefundTip; // @synthesize vipRefundTip=_vipRefundTip;
@property(nonatomic) _Bool vipCanRefund; // @synthesize vipCanRefund=_vipCanRefund;
@property(nonatomic) _Bool showQuitEntrance; // @synthesize showQuitEntrance=_showQuitEntrance;
@property(nonatomic) _Bool showDissolveCommunityEntrance; // @synthesize showDissolveCommunityEntrance=_showDissolveCommunityEntrance;
@property(nonatomic) _Bool openJoin; // @synthesize openJoin=_openJoin;
@property(nonatomic) _Bool showOpenJoinEntrance; // @synthesize showOpenJoinEntrance=_showOpenJoinEntrance;
@property(nonatomic) _Bool canShareReaded; // @synthesize canShareReaded=_canShareReaded;
@property(nonatomic) _Bool showShareReadedEntrance; // @synthesize showShareReadedEntrance=_showShareReadedEntrance;
@property(nonatomic) _Bool canPublishAlbumAndTrack; // @synthesize canPublishAlbumAndTrack=_canPublishAlbumAndTrack;
@property(nonatomic) _Bool showPublishAlbumAndTrackEntrance; // @synthesize showPublishAlbumAndTrackEntrance=_showPublishAlbumAndTrackEntrance;
@property(nonatomic) _Bool canMemberCommented; // @synthesize canMemberCommented=_canMemberCommented;
@property(nonatomic) _Bool showCommentManagerEntrance; // @synthesize showCommentManagerEntrance=_showCommentManagerEntrance;
@property(nonatomic) long long articlePublishRole; // @synthesize articlePublishRole=_articlePublishRole;
@property(nonatomic) _Bool showPublishManagerEntrance; // @synthesize showPublishManagerEntrance=_showPublishManagerEntrance;
@property(retain, nonatomic) NSString *vipAlbumUrl; // @synthesize vipAlbumUrl=_vipAlbumUrl;
@property(nonatomic) _Bool showVipAlbumEntrance; // @synthesize showVipAlbumEntrance=_showVipAlbumEntrance;
@property(nonatomic) _Bool showTopicManagerEntrance; // @synthesize showTopicManagerEntrance=_showTopicManagerEntrance;
@property(nonatomic) _Bool showCategoryEntrance; // @synthesize showCategoryEntrance=_showCategoryEntrance;
@property(retain, nonatomic) NSString *questionReminder; // @synthesize questionReminder=_questionReminder;
@property(nonatomic) _Bool showQuestionRuleEntrance; // @synthesize showQuestionRuleEntrance=_showQuestionRuleEntrance;
@property(nonatomic) long long refundCount; // @synthesize refundCount=_refundCount;
@property(retain, nonatomic) NSString *refundManagerUrl; // @synthesize refundManagerUrl=_refundManagerUrl;
@property(nonatomic) _Bool showRefundManagerEntrance; // @synthesize showRefundManagerEntrance=_showRefundManagerEntrance;
@property(retain, nonatomic) NSString *vipRenewConfigUrl; // @synthesize vipRenewConfigUrl=_vipRenewConfigUrl;
@property(nonatomic) _Bool showRenewConfigEntrance; // @synthesize showRenewConfigEntrance=_showRenewConfigEntrance;
@property(retain, nonatomic) NSString *communityIndexUrl; // @synthesize communityIndexUrl=_communityIndexUrl;
@property(nonatomic) _Bool showCommunityIndexEntrance; // @synthesize showCommunityIndexEntrance=_showCommunityIndexEntrance;
@property(nonatomic) _Bool showReportRedPoint; // @synthesize showReportRedPoint=_showReportRedPoint;
@property(nonatomic) _Bool showReportEntrance; // @synthesize showReportEntrance=_showReportEntrance;
@property(nonatomic) _Bool showBannedMsgEntrance; // @synthesize showBannedMsgEntrance=_showBannedMsgEntrance;
@property(nonatomic) _Bool showManagerConfigEntrance; // @synthesize showManagerConfigEntrance=_showManagerConfigEntrance;
@property(retain, nonatomic) NSString *customEditProfileUrl; // @synthesize customEditProfileUrl=_customEditProfileUrl;
@property(nonatomic) _Bool showEditEntrance; // @synthesize showEditEntrance=_showEditEntrance;
@property(nonatomic) long long wxSubscribeStatus; // @synthesize wxSubscribeStatus=_wxSubscribeStatus;
@property(nonatomic) _Bool showWxNoticeEntrance; // @synthesize showWxNoticeEntrance=_showWxNoticeEntrance;
@property(retain, nonatomic) NSString *feedbackUrl; // @synthesize feedbackUrl=_feedbackUrl;
@property(nonatomic) _Bool showFeedBackEntrance; // @synthesize showFeedBackEntrance=_showFeedBackEntrance;
@property(nonatomic) _Bool showMyArticles; // @synthesize showMyArticles=_showMyArticles;
@property(retain, nonatomic) NSArray *editSectionArray; // @synthesize editSectionArray=_editSectionArray;
@property(retain, nonatomic) NSString *topAreaTip; // @synthesize topAreaTip=_topAreaTip;
@property(retain, nonatomic) NSArray *teamUserInfoArray; // @synthesize teamUserInfoArray=_teamUserInfoArray;
@property(retain, nonatomic) NSString *teamTitle; // @synthesize teamTitle=_teamTitle;
@property(retain, nonatomic) XMMCommunityTheme *communityTheme; // @synthesize communityTheme=_communityTheme;
@property(retain, nonatomic) XMBBSCommunity *communityInfo; // @synthesize communityInfo=_communityInfo;
@property(nonatomic) unsigned long long communityId; // @synthesize communityId=_communityId;
- (void).cxx_destruct;
- (id)xmubt_model;
- (_Bool)shouldShowEmptyView;
- (void)doExit;
- (void)doDissolve;
- (void)doOpenWeiXin;
- (void)reloadData;
- (void)updateMyNavigationBar:(_Bool)arg1;
- (void)requestMoreData:(_Bool)arg1 showLoadingHud:(_Bool)arg2;
- (id)slideView:(id)arg1 scrollViewAtPage:(long long)arg2;
- (long long)numberOfScrollViewInSlideView:(id)arg1;
- (void)tableViewCellMoreSwitchValueChanged:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clickRightButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

