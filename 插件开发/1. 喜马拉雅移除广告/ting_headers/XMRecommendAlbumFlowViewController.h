//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

@class NSMutableArray, UIButton, UILabel, XMRecommendAlbumFlowPresenter, XMRecommendGenderView, XMSegmentControl, XMVXPageViewController;

@interface XMRecommendAlbumFlowViewController : XMBaseVC
{
    _Bool _isNovel;
    NSMutableArray *_tabDatas;
    long long _categoryId;
    UIButton *_backButton;
    UILabel *_titleLabel;
    XMRecommendGenderView *_recommendGenderView;
    XMRecommendAlbumFlowPresenter *_presenter;
    XMSegmentControl *_segmentControl;
    XMVXPageViewController *_pageViewController;
}

@property(retain, nonatomic) XMVXPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) XMSegmentControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) XMRecommendAlbumFlowPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) XMRecommendGenderView *recommendGenderView; // @synthesize recommendGenderView=_recommendGenderView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSMutableArray *tabDatas; // @synthesize tabDatas=_tabDatas;
@property(nonatomic) _Bool isNovel; // @synthesize isNovel=_isNovel;
- (void).cxx_destruct;
- (void)p_updatePresenter;
- (void)p_setUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithCategoryId:(long long)arg1;
- (void)setTitle:(id)arg1;
- (_Bool)hiddenTab;

@end

