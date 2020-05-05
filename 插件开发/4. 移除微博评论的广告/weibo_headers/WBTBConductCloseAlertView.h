//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WBNLConductCountdownCollectionViewCellDelegate-Protocol.h"

@class NSArray, NSString, UIActivityIndicatorView, UIButton, UICollectionView, UIImageView, UILabel, UITapGestureRecognizer, WBNLConductGuideListModel, WBTBLineLabelView, WBTBLiveRoomCoreController, YXLiveUserView;
@protocol WBTBConductCloseAlertViewDelegate, WBTBConductViewControllerProtocol;

@interface WBTBConductCloseAlertView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, WBNLConductCountdownCollectionViewCellDelegate>
{
    NSString *titleColor;
    NSString *titleFontName;
    double titleFontSize;
    struct CGSize itemSize;
    double margin;
    _Bool _vStarLive;
    _Bool _isCanRefresh;
    _Bool _isRunAniming;
    _Bool _isHorizontalScreen;
    long long _type;
    id <WBTBConductCloseAlertViewDelegate> _delegate;
    CDUnknownBlockType _hideBlock;
    NSString *_desContent;
    NSString *_titleContent;
    UIView *_superView;
    UIView *_bgView;
    UIView *_contentView;
    UIView *_emptyView;
    YXLiveUserView *_avatorView;
    UIButton *_avatorButton;
    UILabel *_titleLabel;
    UIButton *_followButton;
    UIButton *_loveButton;
    UIButton *_havedFollowButton;
    WBTBLineLabelView *_lineLabelView;
    UICollectionView *_collectionView;
    UIButton *_exitButton;
    UIButton *_moreButton;
    UITapGestureRecognizer *_tapGestureRecognizer;
    double _alertHeight;
    NSArray *_dataSource;
    UIButton *_closeButton;
    UIImageView *_closeImageView;
    UIActivityIndicatorView *_indicatorView;
    WBTBLiveRoomCoreController<WBTBConductViewControllerProtocol> *_liveViewController;
    long long _index;
    long long _loadImageCount;
    UILabel *_vPlusTitleLabel;
    UIImageView *_bigCoverImageView;
    UIView *_playerMaskView;
    WBNLConductGuideListModel *_model;
}

+ (void)showWithSuperVC:(id)arg1 type:(long long)arg2 delegate:(id)arg3;
@property(retain, nonatomic) WBNLConductGuideListModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *playerMaskView; // @synthesize playerMaskView=_playerMaskView;
@property(retain, nonatomic) UIImageView *bigCoverImageView; // @synthesize bigCoverImageView=_bigCoverImageView;
@property(retain, nonatomic) UILabel *vPlusTitleLabel; // @synthesize vPlusTitleLabel=_vPlusTitleLabel;
@property(nonatomic) _Bool isHorizontalScreen; // @synthesize isHorizontalScreen=_isHorizontalScreen;
@property(nonatomic) long long loadImageCount; // @synthesize loadImageCount=_loadImageCount;
@property(nonatomic) _Bool isRunAniming; // @synthesize isRunAniming=_isRunAniming;
@property(nonatomic) _Bool isCanRefresh; // @synthesize isCanRefresh=_isCanRefresh;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) __weak WBTBLiveRoomCoreController<WBTBConductViewControllerProtocol> *liveViewController; // @synthesize liveViewController=_liveViewController;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIImageView *closeImageView; // @synthesize closeImageView=_closeImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double alertHeight; // @synthesize alertHeight=_alertHeight;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WBTBLineLabelView *lineLabelView; // @synthesize lineLabelView=_lineLabelView;
@property(retain, nonatomic) UIButton *havedFollowButton; // @synthesize havedFollowButton=_havedFollowButton;
@property(retain, nonatomic) UIButton *loveButton; // @synthesize loveButton=_loveButton;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *avatorButton; // @synthesize avatorButton=_avatorButton;
@property(retain, nonatomic) YXLiveUserView *avatorView; // @synthesize avatorView=_avatorView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
@property(nonatomic) _Bool vStarLive; // @synthesize vStarLive=_vStarLive;
@property(copy, nonatomic) NSString *titleContent; // @synthesize titleContent=_titleContent;
@property(copy, nonatomic) NSString *desContent; // @synthesize desContent=_desContent;
@property(copy, nonatomic) CDUnknownBlockType hideBlock; // @synthesize hideBlock=_hideBlock;
@property(nonatomic) __weak id <WBTBConductCloseAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isVPlusType;
- (void)cellDidLoadImageFinish:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)getMoreScheme;
- (id)vstarScheme;
- (void)moreButtonClick:(id)arg1;
- (void)exitButtonClick:(id)arg1;
- (void)followButtonClick:(id)arg1;
- (void)loveButtonClick:(id)arg1;
- (void)closeHandle:(id)arg1;
- (void)setBgViewHidden:(_Bool)arg1;
- (void)headClick;
- (void)setExitButtonColor:(id)arg1;
- (void)setMoreButtonTitle:(id)arg1;
- (void)setExitButtonTitle:(id)arg1;
- (void)delegateDidHideView;
- (void)collectionReloadData;
- (void)checkImageLoadFinish;
- (void)startDownCountTime;
- (void)bigCoverUpdated:(id)arg1;
- (void)topInfoAvatarUpdated:(id)arg1;
- (void)followStateDidChangeHandle:(id)arg1;
- (void)addObservers;
- (void)initView;
- (void)initData;
- (void)resetDataSource:(id)arg1;
- (void)showContentView;
- (void)showEmptyView;
- (void)resetVStarUI:(id)arg1;
- (void)requestConductInfo;
- (long long)formatRequestPlatformWithType:(long long)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithSuperVC:(id)arg1 type:(long long)arg2;
- (void)hide;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

