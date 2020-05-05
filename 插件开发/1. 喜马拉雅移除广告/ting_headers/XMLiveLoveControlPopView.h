//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveDraggablePopView.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XMLiveGPFightInfoViewDelegate-Protocol.h"
#import "XMLiveMarryInfoViewDelegate-Protocol.h"
#import "XMPopSubviewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UIScrollView, UITableView, UIView, XMLiveGPControlHelpView, XMLiveGPFightInfoView, XMLiveGamePlayControlBaseView, XMLiveLoveMarryInfoCard, XMLiveRoomApproachInfo, XMNoSliderScrollView, XMNoviceTipView, YYThreadSafeArray;
@protocol XMLiveLoveMicListDelegate;

@interface XMLiveLoveControlPopView : XMLiveDraggablePopView <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, XMPopSubviewDelegate, XMLiveGPFightInfoViewDelegate, XMLiveMarryInfoViewDelegate>
{
    XMNoSliderScrollView *_scrollView;
    UITableView *_micListView;
    UITableView *_favorListView;
    UIView *_cardBaseView;
    UIScrollView *_cardIndexView;
    UIButton *_favorActionBtn;
    UIButton *_settingBtn;
    YYThreadSafeArray *_micListArray;
    NSMutableArray *_favorTimeArray;
    NSMutableArray *_pairStatusArray;
    UIView *_noNetMaskView;
    long long _currentType;
    long long _selectedIndex;
    XMLiveRoomApproachInfo *_liveItem;
    id <XMLiveLoveMicListDelegate> _delegate;
    CDUnknownBlockType _dismissCallback;
    NSMutableArray *_actionBtnArray;
    XMLiveGamePlayControlBaseView *_favorTimeInfoCard;
    XMLiveGamePlayControlBaseView *_favorTimeMaskCard;
    XMLiveGPControlHelpView *_modeHelpMaskCard;
    XMLiveGPFightInfoView *_clanFightInfoCard;
    XMLiveLoveMarryInfoCard *_marryInfoCard;
    XMNoviceTipView *_tips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMNoviceTipView *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) XMLiveLoveMarryInfoCard *marryInfoCard; // @synthesize marryInfoCard=_marryInfoCard;
@property(retain, nonatomic) XMLiveGPFightInfoView *clanFightInfoCard; // @synthesize clanFightInfoCard=_clanFightInfoCard;
@property(retain, nonatomic) XMLiveGPControlHelpView *modeHelpMaskCard; // @synthesize modeHelpMaskCard=_modeHelpMaskCard;
@property(retain, nonatomic) XMLiveGamePlayControlBaseView *favorTimeMaskCard; // @synthesize favorTimeMaskCard=_favorTimeMaskCard;
@property(retain, nonatomic) XMLiveGamePlayControlBaseView *favorTimeInfoCard; // @synthesize favorTimeInfoCard=_favorTimeInfoCard;
@property(retain, nonatomic) NSMutableArray *actionBtnArray; // @synthesize actionBtnArray=_actionBtnArray;
@property(copy, nonatomic) CDUnknownBlockType dismissCallback; // @synthesize dismissCallback=_dismissCallback;
@property(nonatomic) __weak id <XMLiveLoveMicListDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMLiveRoomApproachInfo *liveItem; // @synthesize liveItem=_liveItem;
- (void)marryInfoViewDidClickHelpBtn;
- (void)marryInfoViewDidClickActionBtn;
- (void)clanFightViewDidClickStopFight;
- (void)clanFightViewDidClickStartFight;
- (void)clanFightViewDidClickHelp;
- (void)clanFightViewDidClickPlusTime;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateCountDownTime:(long long)arg1;
- (void)resetFavorTime;
- (void)synchronizeData:(id)arg1;
- (void)favorStartAction:(id)arg1;
- (void)favorStopAction:(id)arg1;
- (void)clearAllCharmValues:(id)arg1;
- (void)noNetAction:(id)arg1;
- (void)onHelpBackAction;
- (void)onHelpAction;
- (void)onCardIndex:(id)arg1;
- (void)evaluateScrollPage;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)draggableSegmentTabs;
- (void)segmentSelectedIndexChanged:(long long)arg1;
- (void)onPopViewDidHide;
- (void)onPopViewDidShow;
- (void)layoutSubviews;
- (void)showControlCard:(long long)arg1;
- (void)observePlayModeDidChange;
- (void)addKVO;
- (void)initNoNetMaskView;
- (void)initCardBase;
- (void)setupUnits;
- (id)initPopFromView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

