//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XMUserViewController;

@interface XMUserNotificationPresenter : NSObject
{
    XMUserViewController *_viewController;
}

@property(nonatomic) __weak XMUserViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)refreshUI;
- (void)hotlinePayDidSuccess;
- (void)didChangeFollowStateNotification:(id)arg1;
- (void)onWeiboInfoUnOpen;
- (void)onWeiboInfoOpen;
- (void)onSubscribeUnOpen;
- (void)groupStatusDidChanged:(id)arg1;
- (void)receiveListenlistCollectionDidChangeNotification:(id)arg1;
- (void)receiveAlbumSubscriptionDidChangeNotification:(id)arg1;
- (void)receiveJoinCommunityNotification:(id)arg1;
- (void)receiveSynchronizationNotification:(id)arg1;
- (void)receiveLoginSuccessNotification:(id)arg1;
- (void)reloadDataFromDownloadNotification:(id)arg1;
- (void)onVoiceSignatureInfoChanged:(id)arg1;
- (void)onMeInfoChanged:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadFailed:(id)arg1;
- (void)onDownloadStart:(id)arg1;
- (void)onTrackBuyAlbumSuccess:(id)arg1;
- (void)onTrackBuySuccess:(id)arg1;
- (void)onPlayingTrackPaused;
- (void)onPlayingTrackChanged;
- (void)onPlayerStopped;
- (void)removeNotification;
- (void)addNotification;
- (id)homepagePerson;
- (id)personItem;
- (id)tableView;

@end

