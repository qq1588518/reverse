//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer, UIButton, UILabel, UISlider, UITableView, UIViewController;
@protocol XMLiveBGMControlPanelDelegate;

@interface XMLiveBGMControlPanel : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _singleLoop;
    id <XMLiveBGMControlPanelDelegate> _delegate;
    UIViewController *_viewController;
    long long _liveId;
    UIView *_emptyView;
    UIButton *_emptyAddBGMButton;
    UILabel *_emptyBGMTipsLabel;
    UIView *_visiableView;
    UISlider *_volumeProgressView;
    UIView *_bottomContainer;
    UIButton *_addBGMButton;
    UIButton *_playPreButton;
    UIButton *_playButton;
    UIButton *_playNextButton;
    UIButton *_loopBGMButton;
    UITableView *_tableView;
    NSMutableArray *_musicList;
    id _selectedSoundItem;
    NSTimer *_bgmTimer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool singleLoop; // @synthesize singleLoop=_singleLoop;
@property(retain, nonatomic) NSTimer *bgmTimer; // @synthesize bgmTimer=_bgmTimer;
@property(retain, nonatomic) id selectedSoundItem; // @synthesize selectedSoundItem=_selectedSoundItem;
@property(retain, nonatomic) NSMutableArray *musicList; // @synthesize musicList=_musicList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *loopBGMButton; // @synthesize loopBGMButton=_loopBGMButton;
@property(retain, nonatomic) UIButton *playNextButton; // @synthesize playNextButton=_playNextButton;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIButton *playPreButton; // @synthesize playPreButton=_playPreButton;
@property(retain, nonatomic) UIButton *addBGMButton; // @synthesize addBGMButton=_addBGMButton;
@property(retain, nonatomic) UIView *bottomContainer; // @synthesize bottomContainer=_bottomContainer;
@property(retain, nonatomic) UISlider *volumeProgressView; // @synthesize volumeProgressView=_volumeProgressView;
@property(retain, nonatomic) UIView *visiableView; // @synthesize visiableView=_visiableView;
@property(retain, nonatomic) UILabel *emptyBGMTipsLabel; // @synthesize emptyBGMTipsLabel=_emptyBGMTipsLabel;
@property(retain, nonatomic) UIButton *emptyAddBGMButton; // @synthesize emptyAddBGMButton=_emptyAddBGMButton;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <XMLiveBGMControlPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)removeNetSound:(id)arg1;
- (void)selectSounds:(id)arg1;
- (void)addNetSound:(id)arg1;
- (void)deleteSongWithSongId:(id)arg1;
- (void)reset;
- (void)updateUI;
- (void)pauseTimer;
- (void)timerUpdateBGMProgress;
- (void)startTimer;
- (void)resume;
- (void)pause;
- (void)play;
- (void)updateBGMProgress:(double)arg1;
- (void)playBGM:(id)arg1;
- (void)pickFirstBGM;
- (void)deleteMusicItem:(id)arg1;
- (void)playDidTap:(id)arg1;
- (void)volumeSliderChanged:(id)arg1;
- (void)loopBGMButtonDidTap:(id)arg1;
- (void)addBGMButtonDidTap:(id)arg1;
- (void)playNextDidTap:(id)arg1;
- (void)playPreDidTap:(id)arg1;
- (void)onReceiveAccompanyPrelistenStart:(id)arg1;
- (void)addNotificationObserver;
- (void)addSubviewConstrants;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

