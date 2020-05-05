//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XMSleepSettingCustomViewDelegate-Protocol.h"
#import "XMSleepTimerDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UITableView, XMAdSkinItem, XMSleepSettingCustomView;
@protocol XMNowPlayingSleepSettingViewDelegate;

@interface XMNowPlayingSleepSettingView : UIView <UITableViewDataSource, UITableViewDelegate, XMSleepTimerDelegate, XMSleepSettingCustomViewDelegate>
{
    UIView *_maskView;
    UITableView *_tableView;
    UIButton *_closeButton;
    UIView *_lineBottom;
    UIButton *_adSkinBtn;
    long long _selectIndex;
    _Bool _isUpdateIndexIfNeed;
    _Bool _isStartSleepTimerIfNeed;
    _Bool _isChangedPlayMode;
    _Bool _alwaysDarkMode;
    id <XMNowPlayingSleepSettingViewDelegate> _delegate;
    UIView *_topBlackView;
    NSArray *_settingTextArray;
    XMAdSkinItem *_adSkinItem;
    XMSleepSettingCustomView *_customView;
    long long _etaSeconds;
    long long _mode;
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long etaSeconds; // @synthesize etaSeconds=_etaSeconds;
@property(retain, nonatomic) XMSleepSettingCustomView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) XMAdSkinItem *adSkinItem; // @synthesize adSkinItem=_adSkinItem;
@property(retain, nonatomic) NSArray *settingTextArray; // @synthesize settingTextArray=_settingTextArray;
@property(retain, nonatomic) UIView *topBlackView; // @synthesize topBlackView=_topBlackView;
@property(nonatomic) __weak id <XMNowPlayingSleepSettingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool alwaysDarkMode; // @synthesize alwaysDarkMode=_alwaysDarkMode;
- (void).cxx_destruct;
- (void)updateTimerLabel;
- (void)sleepTimerStopped;
- (void)sleepTimerEtaSeconds:(long long)arg1;
- (void)sleepTimerStarted:(long long)arg1;
- (void)adSkinDidClick:(id)arg1;
- (void)onClose:(id)arg1;
- (void)onTap;
- (void)hiddenFromSuperViewForCustomView;
- (void)showInSuperViewForCustomView;
- (void)hiddenFromSuperView;
- (void)showInView:(id)arg1;
- (void)reloadData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didDismissWithEtaSec:(double)arg1 isChangeEtaSec:(_Bool)arg2;
- (void)layoutSubviews;
- (void)customInit;
- (_Bool)setPlayMode:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

