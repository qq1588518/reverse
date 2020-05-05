//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMTableViewDelegateProtocol-Protocol.h"

@class NSMutableArray, NSString, UIButton, UIColor, UILabel, UIView, XMNRequest, XMTableViewDataSource, XMWebImageView;

@interface XMNewerRecTrackViewController : XMSubLevelViewController <XMTableViewDelegateProtocol>
{
    long long _cardId;
    XMTableViewDataSource *_tableDataSource;
    XMWebImageView *_bgView;
    UIColor *_bgColor;
    UIView *_navView;
    UILabel *_titleLabel;
    XMNRequest *_req;
    long long _nextPageId;
    long long _maxPageId;
    UIButton *_headPlayAllButton;
    UIButton *_navPlayAllButton;
    NSString *_itingURL;
    UIView *_footerMoreView;
    NSMutableArray *_soundList;
}

@property(retain, nonatomic) NSMutableArray *soundList; // @synthesize soundList=_soundList;
@property(retain, nonatomic) UIView *footerMoreView; // @synthesize footerMoreView=_footerMoreView;
@property(copy, nonatomic) NSString *itingURL; // @synthesize itingURL=_itingURL;
@property(retain, nonatomic) UIButton *navPlayAllButton; // @synthesize navPlayAllButton=_navPlayAllButton;
@property(retain, nonatomic) UIButton *headPlayAllButton; // @synthesize headPlayAllButton=_headPlayAllButton;
@property(nonatomic) long long maxPageId; // @synthesize maxPageId=_maxPageId;
@property(nonatomic) long long nextPageId; // @synthesize nextPageId=_nextPageId;
@property(retain, nonatomic) XMNRequest *req; // @synthesize req=_req;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *navView; // @synthesize navView=_navView;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) XMWebImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) XMTableViewDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(nonatomic) long long cardId; // @synthesize cardId=_cardId;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)playListSound:(id)arg1 showNowPlaying:(_Bool)arg2;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (void)newerRecTrackCellDidClickDownload:(id)arg1;
- (void)newerRecTrackCellDidClickPlay:(id)arg1;
- (void)checkPlayAllStatus;
- (void)playAllButtonDidClick;
- (void)itingButtonDidClick;
- (void)triggerLoadMore;
- (_Bool)isLoadMoreViewNeeded;
- (void)backDidClick;
- (void)setupNav;
- (id)createHeaderViewWithTitle:(id)arg1 recReason:(id)arg2;
- (void)setupNavPlayButton;
- (void)parseResponseJSON:(id)arg1;
- (void)fetchRecList;
- (void)triggerPullToRefresh;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCardId:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

