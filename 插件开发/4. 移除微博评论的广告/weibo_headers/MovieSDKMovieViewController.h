//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKTableViewController.h"

#import "MovieSDKDTImageViewDelegate-Protocol.h"
#import "MovieSDKMovieTipProtocol-Protocol.h"
#import "MovieSDKNavigationBarSegmentControlDelegate-Protocol.h"
#import "MovieSDKTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MovieSDKCityBarView, MovieSDKHttpRequestHandler, MovieSDKMovieTipView, MovieSDKNavigationBar, MovieSDKNavigationBarSegmentControl, MovieSDKRefreshTableView, MovieSDKTableViewCellExtraInfo, NSMutableArray, NSString, UIButton, UIView;

@interface MovieSDKMovieViewController : MovieSDKTableViewController <UITableViewDataSource, UITableViewDelegate, MovieSDKNavigationBarSegmentControlDelegate, MovieSDKTableViewCellDelegate, MovieSDKDTImageViewDelegate, MovieSDKMovieTipProtocol>
{
    _Bool _locationDidChangeHotShouldRequest;
    _Bool _locationDidChangeComingShouldRequest;
    _Bool _hotRequestDidReturn;
    _Bool _comingRequestDidReturn;
    _Bool _comingLoaded;
    _Bool _userActionRequest;
    MovieSDKRefreshTableView *_hotTableView;
    MovieSDKRefreshTableView *_comingTableView;
    NSMutableArray *_hotDataSources;
    NSMutableArray *_comingDataSources;
    MovieSDKTableViewCellExtraInfo *_splitLineInfo;
    MovieSDKTableViewCellExtraInfo *_withoutSplitLineInfo;
    MovieSDKNavigationBarSegmentControl *_segControl;
    MovieSDKNavigationBar *_navigationBar;
    MovieSDKCityBarView *_cityBar;
    UIButton *_searchBtn;
    UIView *_hotFooterView;
    UIView *_comingFooterView;
    MovieSDKHttpRequestHandler *_hotHandler;
    MovieSDKHttpRequestHandler *_comingHandler;
    double _latitude;
    double _longitude;
    MovieSDKMovieTipView *_tipView;
}

@property(retain, nonatomic) MovieSDKMovieTipView *tipView; // @synthesize tipView=_tipView;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) _Bool userActionRequest; // @synthesize userActionRequest=_userActionRequest;
@property(nonatomic) _Bool comingLoaded; // @synthesize comingLoaded=_comingLoaded;
@property(nonatomic) _Bool comingRequestDidReturn; // @synthesize comingRequestDidReturn=_comingRequestDidReturn;
@property(nonatomic) _Bool hotRequestDidReturn; // @synthesize hotRequestDidReturn=_hotRequestDidReturn;
@property(nonatomic) _Bool locationDidChangeComingShouldRequest; // @synthesize locationDidChangeComingShouldRequest=_locationDidChangeComingShouldRequest;
@property(nonatomic) _Bool locationDidChangeHotShouldRequest; // @synthesize locationDidChangeHotShouldRequest=_locationDidChangeHotShouldRequest;
@property(retain, nonatomic) MovieSDKHttpRequestHandler *comingHandler; // @synthesize comingHandler=_comingHandler;
@property(retain, nonatomic) MovieSDKHttpRequestHandler *hotHandler; // @synthesize hotHandler=_hotHandler;
@property(retain, nonatomic) UIView *comingFooterView; // @synthesize comingFooterView=_comingFooterView;
@property(retain, nonatomic) UIView *hotFooterView; // @synthesize hotFooterView=_hotFooterView;
@property(retain, nonatomic) UIButton *searchBtn; // @synthesize searchBtn=_searchBtn;
@property(retain, nonatomic) MovieSDKCityBarView *cityBar; // @synthesize cityBar=_cityBar;
@property(retain, nonatomic) MovieSDKNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) MovieSDKNavigationBarSegmentControl *segControl; // @synthesize segControl=_segControl;
@property(retain, nonatomic) MovieSDKTableViewCellExtraInfo *withoutSplitLineInfo; // @synthesize withoutSplitLineInfo=_withoutSplitLineInfo;
@property(retain, nonatomic) MovieSDKTableViewCellExtraInfo *splitLineInfo; // @synthesize splitLineInfo=_splitLineInfo;
@property(retain, nonatomic) NSMutableArray *comingDataSources; // @synthesize comingDataSources=_comingDataSources;
@property(retain, nonatomic) NSMutableArray *hotDataSources; // @synthesize hotDataSources=_hotDataSources;
@property(retain, nonatomic) MovieSDKRefreshTableView *comingTableView; // @synthesize comingTableView=_comingTableView;
@property(retain, nonatomic) MovieSDKRefreshTableView *hotTableView; // @synthesize hotTableView=_hotTableView;
- (void).cxx_destruct;
- (void)didTouchMovieTipView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)segmentItemDidSelect:(long long)arg1;
- (_Bool)tableViewCell:(id)arg1 action:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)sdkTableView:(id)arg1 extraInfoForRowAtIndexPath:(id)arg2 data:(id)arg3;
- (Class)sdkTableView:(id)arg1 classForRowAtIndexPath:(id)arg2 data:(id)arg3;
- (id)sdkTableView:(id)arg1 dataForRowAtIndexPath:(id)arg2;
- (void)loadTabbarItem;
- (void)tableView:(id)arg1 didStartRefreshData:(long long)arg2;
- (void)requestDataWithTableView:(id)arg1;
- (void)setCityName:(id)arg1;
- (void)requestData;
- (void)clickCity:(id)arg1;
- (void)clickSearchBtn:(id)arg1;
- (void)setItemIndex:(long long)arg1;
- (void)internalActionWithParam:(id)arg1;
- (void)actionWithParam:(id)arg1;
- (void)enterBackground:(id)arg1;
- (void)enterForeground:(id)arg1;
- (void)checkComingRequest;
- (void)checkHotRequest;
- (_Bool)locationDidChangeShouldRequest;
- (void)locationDidChange:(id)arg1;
- (_Bool)userDidSelectShouldRequest;
- (void)userDidSelectCity:(id)arg1;
- (id)getFooterView;
- (void)viewWillLayoutSubviews;
- (void)viewControllerWillBeSelected;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

