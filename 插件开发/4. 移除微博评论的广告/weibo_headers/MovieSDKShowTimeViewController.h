//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKTableViewController.h"

#import "MovieSDKMovieSelectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class MovieSDKCinema, MovieSDKCinemaShowTime, MovieSDKCinemaShowTimeMovieListInfo, MovieSDKCinemaShowTimeSchedule, MovieSDKCinemaShowTimeScheduleEmpty, MovieSDKCinemaShowTimeShows, MovieSDKGetShowTimeRequest, MovieSDKMovieSelectionView, MovieSDKNavigationBar, MovieSDKRefreshTableView, NSMutableArray, NSString, UIButton, UIView;

@interface MovieSDKShowTimeViewController : MovieSDKTableViewController <MovieSDKMovieSelectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _isShowAllActivitys;
    _Bool _isFirstLoad;
    _Bool _isFilmSelected;
    MovieSDKNavigationBar *_navigationBar;
    MovieSDKRefreshTableView *_tableView;
    UIView *_tableFooterView;
    UIButton *_favoriteButton;
    UIView *_sectionHeader;
    MovieSDKMovieSelectionView *_selectionView;
    MovieSDKCinema *_cinema;
    NSMutableArray *_showTimes;
    MovieSDKGetShowTimeRequest *_request;
    MovieSDKCinemaShowTime *_showTime;
    MovieSDKCinemaShowTimeSchedule *_showTimeSchedule;
    MovieSDKCinemaShowTimeShows *_showTimeShows;
    unsigned long long _selectedMovieIndex;
    unsigned long long _selectedDateIndex;
    NSString *_filmID;
    MovieSDKCinemaShowTimeScheduleEmpty *_emptyData;
    MovieSDKCinemaShowTimeMovieListInfo *_movieListInfo;
    unsigned long long _acitivySectionItemCount;
    unsigned long long _acitivyCount;
}

@property(nonatomic) _Bool isFilmSelected; // @synthesize isFilmSelected=_isFilmSelected;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(nonatomic) unsigned long long acitivyCount; // @synthesize acitivyCount=_acitivyCount;
@property(nonatomic) unsigned long long acitivySectionItemCount; // @synthesize acitivySectionItemCount=_acitivySectionItemCount;
@property(nonatomic) _Bool isShowAllActivitys; // @synthesize isShowAllActivitys=_isShowAllActivitys;
@property(retain, nonatomic) MovieSDKCinemaShowTimeMovieListInfo *movieListInfo; // @synthesize movieListInfo=_movieListInfo;
@property(retain, nonatomic) MovieSDKCinemaShowTimeScheduleEmpty *emptyData; // @synthesize emptyData=_emptyData;
@property(retain, nonatomic) NSString *filmID; // @synthesize filmID=_filmID;
@property(nonatomic) unsigned long long selectedDateIndex; // @synthesize selectedDateIndex=_selectedDateIndex;
@property(nonatomic) unsigned long long selectedMovieIndex; // @synthesize selectedMovieIndex=_selectedMovieIndex;
@property(retain, nonatomic) MovieSDKCinemaShowTimeShows *showTimeShows; // @synthesize showTimeShows=_showTimeShows;
@property(retain, nonatomic) MovieSDKCinemaShowTimeSchedule *showTimeSchedule; // @synthesize showTimeSchedule=_showTimeSchedule;
@property(retain, nonatomic) MovieSDKCinemaShowTime *showTime; // @synthesize showTime=_showTime;
@property(retain, nonatomic) MovieSDKGetShowTimeRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSMutableArray *showTimes; // @synthesize showTimes=_showTimes;
@property(retain, nonatomic) MovieSDKCinema *cinema; // @synthesize cinema=_cinema;
@property(retain, nonatomic) MovieSDKMovieSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) UIView *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
@property(retain, nonatomic) UIButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) MovieSDKRefreshTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MovieSDKNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)didClearButtonTouched:(unsigned long long)arg1;
- (void)refreshTableView:(unsigned long long)arg1;
- (void)configureData;
- (void)onSelectedMovieChanged:(id)arg1;
- (void)refreshDataSource:(id)arg1;
- (void)requestCinemaShowTime;
- (void)movieSelectionView:(id)arg1 itemDidSelected:(id)arg2 data:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)tableViewCell:(id)arg1 action:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)sdkTableView:(id)arg1 extraInfoForRowAtIndexPath:(id)arg2 data:(id)arg3;
- (Class)sdkTableView:(id)arg1 classForRowAtIndexPath:(id)arg2 data:(id)arg3;
- (id)sdkTableView:(id)arg1 dataForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didStartRefreshData:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCinema:(id)arg1 withFilmID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

