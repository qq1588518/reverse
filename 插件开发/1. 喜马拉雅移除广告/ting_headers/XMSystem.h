//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString;

@interface XMSystem : NSObject <UIAlertViewDelegate>
{
    id _selfSystem;
    CDUnknownBlockType _completionBlock;
    NSString *_channel;
}

+ (_Bool)openUrl:(id)arg1;
+ (_Bool)openUrl:(id)arg1 controller:(id)arg2;
+ (_Bool)checkSleepMode;
+ (_Bool)tiemrShouldFireForView:(id)arg1;
+ (void)disabledAuthenticationInfo;
+ (void)changeShareButtonWIthShowWeChatIcon:(_Bool)arg1;
+ (void)playerWillPlaying;
+ (id)getLinesArrayOfStringInLabel:(id)arg1;
+ (_Bool)hasShowNotifyCommentAndLikeInThirtyDays;
+ (_Bool)checkDateWithMonthBeginDate:(id)arg1 endDate:(id)arg2;
+ (void)changeFollowUserWithUid:(long long)arg1 followState:(_Bool)arg2 bizType:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)fetchRelativeVideosWithAlbumId:(long long)arg1 pageIndex:(long long)arg2 isAsc:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)openFeedback;
+ (void)popToMainTabForDismissNP;
+ (void)popToMainTab:(id)arg1;
+ (void)userAllowNotificationWithComplete:(CDUnknownBlockType)arg1;
+ (double)safeAreaBottomInset;
+ (void)openVipPageWithUrlStr:(id)arg1 andAlbumId:(long long)arg2 andParams:(id)arg3;
+ (void)scrollViewAdapte:(id)arg1;
+ (id)xmBeanPriceString:(double)arg1;
+ (id)xmPriceString:(double)arg1;
+ (id)priceStringOne:(double)arg1;
+ (id)priceString:(double)arg1 andNumberOfSignificantDigits:(unsigned int)arg2;
+ (id)priceString:(double)arg1;
+ (void)handleOpenAppSettingUI;
+ (void)showOpenNotificationSettingAlertWithTitle:(id)arg1;
+ (void)showOpenNotificationSettingAlert;
+ (_Bool)notificationAvaliable;
+ (void)postBuyAlbumDataTrack:(id)arg1;
+ (void)postSoundDataTrack:(id)arg1 source:(id)arg2;
+ (void)showImageViewInKeyWindow:(id)arg1 origin:(id)arg2 defaultPage:(long long)arg3;
+ (void)showImageViewInKeyWindow:(id)arg1 defaultPage:(long long)arg2;
+ (void)releaseAlbumPaidInfoRequestWithRequestKey:(id)arg1;
+ (void)changeFavChannelState:(long long)arg1 isFav:(_Bool)arg2 loading:(_Bool)arg3;
+ (void)changeFavAlbumState:(id)arg1;
+ (void)changeFavAlbumState:(id)arg1 loading:(_Bool)arg2;
+ (void)userChangeFavAlbumState:(id)arg1 albumItem:(id)arg2 loading:(_Bool)arg3 showTag:(_Bool)arg4 postStaticBlock:(CDUnknownBlockType)arg5;
+ (void)changeFavAlbumState:(id)arg1 loading:(_Bool)arg2 showTag:(_Bool)arg3 postStaticBlock:(CDUnknownBlockType)arg4;
+ (id)getPushAlbumViewControllerFrom:(id)arg1 parentVC:(id)arg2 completed:(CDUnknownBlockType)arg3 forceCheck:(_Bool)arg4 requestKey:(id)arg5;
+ (id)getPushAlbumViewControllerFrom:(id)arg1 parentVC:(id)arg2 completed:(CDUnknownBlockType)arg3 forceCheck:(_Bool)arg4 requestKey:(id)arg5 source:(long long)arg6;
+ (id)checkRequestForAlbum:(id)arg1 parentVC:(id)arg2 completed:(CDUnknownBlockType)arg3 source:(long long)arg4;
+ (void)openAlbumWithAlbumId:(long long)arg1 andAlbumItem:(id)arg2;
+ (id)getPushAlbumViewControllerFrom:(id)arg1 parentVC:(id)arg2 completed:(CDUnknownBlockType)arg3 forceCheck:(_Bool)arg4;
+ (id)getPushAlbumViewControllerFrom:(id)arg1 parentVC:(id)arg2 completed:(CDUnknownBlockType)arg3;
+ (void)updateUIAboutNewMessageCount;
+ (int)getUnReadMessagesCount;
+ (void)shareActionStatistics:(id)arg1 useNewPath:(_Bool)arg2;
+ (void)shareActionStatistics:(id)arg1;
+ (void)uploadVisitorFavAlbums;
+ (_Bool)existInVisitorFavAlbums:(id)arg1;
+ (void)visitorChangeFavAlbum:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (id)encrypStringWithParam:(id)arg1 options:(unsigned long long)arg2;
+ (id)signTrackBuyRequestVerifyToken:(id)arg1;
+ (id)signRequestVerifyToken:(id)arg1 options:(unsigned long long)arg2;
+ (id)signRequestVerifyToken:(id)arg1;
+ (id)firstLaunchTime;
+ (void)setFirstLaunchTime;
+ (id)topWindow;
+ (id)keyWindow;
+ (long long)frequencyForRecordEvent:(id)arg1;
+ (void)recordEvent:(id)arg1 frequency:(long long)arg2;
+ (double)timeForRecordEvent:(id)arg1;
+ (void)recordEvent:(id)arg1 time:(double)arg2;
+ (void)setRequest:(id *)arg1 newValue:(id)arg2;
+ (id)thirdiOSUrl:(id)arg1;
+ (id)url:(id)arg1 addParams:(id)arg2 andOverwriteExistingValues:(_Bool)arg3;
+ (id)addWebPageUrlCommonPara:(id)arg1 sonic:(_Bool)arg2;
+ (id)addWebPageUrlCommonPara:(id)arg1;
+ (id)parametersWithSeparator:(id)arg1 delimiter:(id)arg2 url:(id)arg3 isForNativeHotline:(_Bool)arg4 andAudoDecode:(_Bool)arg5;
+ (id)parametersWithSeparator:(id)arg1 delimiter:(id)arg2 url:(id)arg3 isForNativeHotline:(_Bool)arg4;
+ (id)parametersWithSeparator:(id)arg1 delimiter:(id)arg2 url:(id)arg3;
+ (_Bool)canShowWechatShareAfterFav;
+ (id)adIdentifier;
+ (void)showInReviewMessage;
+ (id)imageName4NoData;
+ (void)showCommentListForSound:(id)arg1;
+ (id)totalDiskSizeGB;
+ (id)freeDiskSpace;
+ (unsigned long long)freeDiskSpaceInBytes;
+ (id)formatSoundImage:(id)arg1;
+ (id)defaultAvatarImage;
+ (id)defaultUserHeaderImage;
+ (id)trimmedToRoundWithAvatarImage:(id)arg1;
+ (id)formatAvatarImage:(id)arg1;
+ (id)formatUserHeaderImage:(id)arg1;
+ (id)convertEmotion4RCLabel:(id)arg1;
+ (id)convertEmotion4RCLabel:(id)arg1 imgSize:(struct CGSize)arg2;
+ (void)startTrackBuy:(id)arg1 withController:(id)arg2 source:(id)arg3;
+ (void)_showNowPlayingWithOutTrackfromViewController:(id)arg1 entryView:(id)arg2;
+ (void)removeRootViewControllerFrom:(id)arg1 ifKindOfClass:(Class)arg2;
+ (void)_PUSHMPMCtrl:(_Bool)arg1;
+ (void)showMinorProtectionModeHomePageAutoBack;
+ (void)showMinorProtectionModeHomePage;
+ (void)showMinorProtectionModeInterceptWithType:(long long)arg1;
+ (void)showMinorProtectionModeIntercept;
+ (void)showNowPlayingWithTrack:(id)arg1 playlist:(id)arg2 trackChange:(_Bool)arg3 asc:(id)arg4 fromViewController:(id)arg5 entryView:(id)arg6 showNowPlayingView:(_Bool)arg7 scrollToRegion:(long long)arg8;
+ (void)showNowPlayingWithTrack:(id)arg1 playlist:(id)arg2 trackChange:(_Bool)arg3 asc:(id)arg4 fromViewController:(id)arg5 entryView:(id)arg6 showNowPlayingView:(_Bool)arg7;
+ (void)showNowPlayingWithTrack:(id)arg1 playlist:(id)arg2 asc:(id)arg3 fromViewController:(id)arg4 entryView:(id)arg5 showNowPlayingView:(_Bool)arg6;
+ (void)showNowPlayingDefaultAacWithTrack:(id)arg1 playlist:(id)arg2 fromViewController:(id)arg3 entryView:(id)arg4 showNowPlayingView:(_Bool)arg5;
+ (id)cookieTokenKey;
+ (id)cookieDeviceKey;
+ (id)getCurrentWWanInfo;
+ (id)getCurrentIpAdress;
+ (void)configWLanIpAdress;
+ (id)deviceIpAdress;
+ (id)formatNumber:(long long)arg1;
+ (void)livePlayerRingWithLiveURL:(id)arg1;
+ (void)requestWakeupFeed;
+ (void)stopWakeupRing;
+ (void)playWakeupRingWithURL:(id)arg1;
+ (id)recordIdFor:(id)arg1;
+ (void)requestRemoteSettings;
+ (id)downloadSpeedForLLD:(unsigned long long)arg1;
+ (id)sizeForLLD:(unsigned long long)arg1;
+ (void)uploadDeviceToken:(id)arg1 openPush:(_Bool)arg2;
+ (id)recordTempNameFor:(id)arg1;
+ (id)appropriatePlayUrlFor:(id)arg1;
+ (void)stopInfinitePlay;
+ (void)startInfinitePlay;
+ (_Bool)shouldStartInfinitePlay;
+ (void)updateMediaInfoPlayBackTime:(double)arg1 withProgram:(id)arg2;
+ (void)updateMediaInfoForLiveRadioProgram:(id)arg1;
+ (void)updateMediaInfoForLiveRadio:(id)arg1;
+ (void)setMediaInfoForProgramItem:(id)arg1;
+ (void)setMediaInfoForRadioItem:(id)arg1;
+ (void)setMediaInfoWithTitle:(id)arg1 artist:(id)arg2 image:(id)arg3;
+ (void)clearNowPlayingInfo;
+ (void)updateNowPlayingInfo:(id)arg1 playBack:(double)arg2;
+ (void)resetNowPlayingInfo:(id)arg1;
+ (id)imageFromSDWebImage:(id)arg1;
+ (void)setMediaInfoWithTitle:(id)arg1 artist:(id)arg2 image:(id)arg3 duration:(unsigned long long)arg4 playBack:(double)arg5;
+ (void)updateBottomBadageValue;
+ (void)requestNoReadCount;
+ (_Bool)needAnimationOnLoginSuccess;
+ (_Bool)checkWifiOnly;
+ (void)trackEvent:(id)arg1 label:(id)arg2 parameters:(id)arg3;
+ (void)trackEvent:(id)arg1 label:(id)arg2;
+ (void)trackEvent:(id)arg1;
+ (void)endLogPageView:(id)arg1;
+ (void)beginLogPageView:(id)arg1;
+ (void)sessionStartedWithChannelId:(id)arg1;
+ (void)startAnalysis;
+ (id)wifiName;
+ (void)printReport;
+ (void)crash:(id)arg1;
+ (void)checkCrash;
+ (void)playWithTrack:(id)arg1 playlist:(id)arg2;
+ (unsigned long long)getMsgSelectedType;
+ (void)saveMsgSelectedType:(unsigned long long)arg1;
+ (id)readableStringForMoney:(double)arg1;
+ (_Bool)loginAutomatically:(_Bool)arg1;
+ (id)stringFromInterval:(double)arg1 withFormat:(int)arg2;
+ (id)stringForInterval:(double)arg1 formate:(id)arg2;
+ (id)stringFromSeconds:(unsigned long long)arg1;
+ (id)stringForSeconds4:(unsigned long long)arg1;
+ (id)stringForSeconds3:(unsigned long long)arg1;
+ (id)stringForSeconds2:(unsigned long long)arg1;
+ (id)stringForSeconds:(unsigned long long)arg1;
+ (id)stringForSecondsForQADetail:(unsigned long long)arg1;
+ (id)stringForStartInterval:(double)arg1 endInterval:(double)arg2;
+ (id)appTabCtrl;
+ (void)presentViewController:(id)arg1;
+ (id)topNavigationController;
+ (void)pushViewController:(id)arg1;
+ (id)showHalfLoginViewWithString:(id)arg1 biSource:(id)arg2;
+ (id)showLogin;
+ (void)pushGradeVCFrom:(id)arg1 URL:(id)arg2;
+ (void)postTrackDataWithRequest:(id)arg1 andErrorUrl:(id)arg2;
+ (void)checkLoginWithErrorUrl:(id)arg1 andLoginCallBack:(CDUnknownBlockType)arg2;
+ (void)pushAnchorGradeViewControllerFrom:(id)arg1;
+ (void)pushUserGradeViewControllerFrom:(id)arg1;
+ (void)logoutYouzan;
+ (void)logoutFrom:(id)arg1 animated:(_Bool)arg2;
+ (void)logoutFrom:(id)arg1;
+ (void)transitionToLogout;
+ (void)showMainFrameOnRegistSuccess;
+ (void)showMainFrameOnLoginSuccess;
+ (void)postLogoutDataTrack;
+ (void)postLoginSuccessDataTrack;
+ (void)onLoginSuccess:(_Bool)arg1;
+ (void)clearOnLogout;
+ (void)reloadDownloadData;
+ (void)reloadData;
+ (void)updateTag:(_Bool)arg1 forTab:(long long)arg2;
+ (void)setBadageValue:(id)arg1 forTab:(long long)arg2;
+ (void)selectMainTab:(int)arg1 showRootView:(_Bool)arg2;
+ (void)selectMainTab:(int)arg1;
+ (id)JSONObjectWithData:(id)arg1 error:(id *)arg2;
+ (void)showInfoMessage:(id)arg1 inView:(id)arg2 hideAfterDelay:(double)arg3;
+ (void)showInfoMessage:(id)arg1 inView:(id)arg2;
+ (void)showInfoMessage:(id)arg1 hideAfterDelay:(double)arg2;
+ (void)showInfoMessage:(id)arg1;
+ (id)copyrightString;
+ (id)bundleScheme;
+ (double)designScale;
+ (long long)systemMainVersion;
+ (_Bool)isIPhone6PlusScaleMode;
+ (_Bool)isIPhone6PlusScreen;
+ (_Bool)isIPhone6Screen;
+ (void)rateMyApp;
+ (id)iAppRateURL;
+ (id)iAppStoreURL;
+ (_Bool)iOS11OrLater;
+ (_Bool)iOS10OrLater;
+ (_Bool)iOS9OrLater;
+ (id)system;
+ (void)initialize;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (void)backgroundTaskWithBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)mainThreadCompletionBlock;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

