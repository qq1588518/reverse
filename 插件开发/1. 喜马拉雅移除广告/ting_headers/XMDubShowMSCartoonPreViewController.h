//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class CDZButton, MBProgressHUD, NSString, UIButton, UICollectionView, UILabel, UISwitch, XMAEAudioPlayer, XMDubPipProgressView, XMDubShowMSCartoonPerViewModel, XMDubShowMSCartoonProgressView, XMDubShowMSCartoonRecordManager, XMDubShowMSCartoonViewModel, XMTimer, XMWebImageView;

@interface XMDubShowMSCartoonPreViewController : XMBaseVC <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _needPlayForSeek;
    XMDubShowMSCartoonViewModel *_cartoonModel;
    XMDubShowMSCartoonRecordManager *_recordManager;
    UIButton *_backButton;
    UILabel *_titleLabel;
    XMWebImageView *_pictureView;
    UIButton *_playpauseButton;
    XMDubShowMSCartoonProgressView *_progressView;
    UISwitch *_swButton;
    UICollectionView *_collectionView;
    CDZButton *_btnDraft;
    UIButton *_btnPublish;
    XMTimer *_timer;
    XMTimer *_progressTimer;
    unsigned long long _startContinuPlayPageNo;
    XMDubPipProgressView *_pipProgressView;
    MBProgressHUD *_hud;
    XMDubShowMSCartoonPerViewModel *_model;
    NSString *_oldDirectory;
    double _allDuration;
    double _currentPlayTime;
    XMAEAudioPlayer *_voicePlayer;
    unsigned long long _currentNo;
}

@property(nonatomic) unsigned long long currentNo; // @synthesize currentNo=_currentNo;
@property(retain, nonatomic) XMAEAudioPlayer *voicePlayer; // @synthesize voicePlayer=_voicePlayer;
@property(nonatomic) double currentPlayTime; // @synthesize currentPlayTime=_currentPlayTime;
@property(nonatomic) _Bool needPlayForSeek; // @synthesize needPlayForSeek=_needPlayForSeek;
@property(nonatomic) double allDuration; // @synthesize allDuration=_allDuration;
@property(retain, nonatomic) NSString *oldDirectory; // @synthesize oldDirectory=_oldDirectory;
@property(retain, nonatomic) XMDubShowMSCartoonPerViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) XMDubPipProgressView *pipProgressView; // @synthesize pipProgressView=_pipProgressView;
@property(nonatomic) unsigned long long startContinuPlayPageNo; // @synthesize startContinuPlayPageNo=_startContinuPlayPageNo;
@property(retain, nonatomic) XMTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) XMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIButton *btnPublish; // @synthesize btnPublish=_btnPublish;
@property(retain, nonatomic) CDZButton *btnDraft; // @synthesize btnDraft=_btnDraft;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UISwitch *swButton; // @synthesize swButton=_swButton;
@property(retain, nonatomic) XMDubShowMSCartoonProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *playpauseButton; // @synthesize playpauseButton=_playpauseButton;
@property(retain, nonatomic) XMWebImageView *pictureView; // @synthesize pictureView=_pictureView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) XMDubShowMSCartoonRecordManager *recordManager; // @synthesize recordManager=_recordManager;
@property(retain, nonatomic) XMDubShowMSCartoonViewModel *cartoonModel; // @synthesize cartoonModel=_cartoonModel;
- (void).cxx_destruct;
- (void)mergeFailed;
- (void)p_updateProgressUI:(double)arg1;
- (void)mergeVideoWithAudio;
- (void)mergeRecordFiles;
- (void)mergePicturesToVideo;
- (void)downloadImages;
- (void)scrollToPageNo:(long long)arg1;
- (void)scrollToTimestamp:(double)arg1;
- (void)p_handleProgressAction;
- (void)stopPlay;
- (void)startPlay;
- (void)seekRecordAndBGMToTime:(double)arg1 play:(_Bool)arg2;
- (void)onLoginSuccessNotification;
- (void)stopTimer;
- (void)p_handleTimerAction;
- (void)startTimer;
- (void)p_pictureTapAction;
- (void)p_toPublish;
- (void)p_onPublish;
- (void)p_saveData;
- (void)p_onDraft;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)p_hideActionButtons;
- (void)p_showActionButtons;
- (void)p_switchAction;
- (void)doPlayAction;
- (void)p_handlePlayAction;
- (void)customInit;
- (void)p_back;
- (_Bool)shouldTriggerBackPan:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (long long)overrideUserInterfaceStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

