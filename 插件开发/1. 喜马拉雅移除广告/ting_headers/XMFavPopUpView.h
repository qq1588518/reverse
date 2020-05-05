//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, UIButton, UICollectionView, UIImageView, UILabel, XMAlbumItem, XMFavPopUpBackView, XMPopUpFavData, XMWebImageView;

@interface XMFavPopUpView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, CAAnimationDelegate, UIScrollViewDelegate>
{
    _Bool _isNewUser;
    id _manager;
    XMFavPopUpBackView *_bgView;
    UIView *_containView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UICollectionView *_collectionView;
    UIButton *_confirmButton;
    UIButton *_closeButton;
    XMPopUpFavData *_data;
    XMAlbumItem *_animationItem;
    XMWebImageView *_animationView;
    UIImageView *_headImageView;
    unsigned long long _uiStyle;
    NSIndexPath *_needAnimationIndexPath;
    NSIndexPath *_cacheAnimationIndexPath;
    NSMutableArray *_relatedArray;
}

+ (double)viewWidth;
+ (double)viewHeight;
@property(nonatomic) _Bool isNewUser; // @synthesize isNewUser=_isNewUser;
@property(retain, nonatomic) NSMutableArray *relatedArray; // @synthesize relatedArray=_relatedArray;
@property(retain, nonatomic) NSIndexPath *cacheAnimationIndexPath; // @synthesize cacheAnimationIndexPath=_cacheAnimationIndexPath;
@property(retain, nonatomic) NSIndexPath *needAnimationIndexPath; // @synthesize needAnimationIndexPath=_needAnimationIndexPath;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) XMWebImageView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) XMAlbumItem *animationItem; // @synthesize animationItem=_animationItem;
@property(retain, nonatomic) XMPopUpFavData *data; // @synthesize data=_data;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containView; // @synthesize containView=_containView;
@property(retain, nonatomic) XMFavPopUpBackView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)setSubTitle:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setContentWithModel:(id)arg1;
- (void)zoomLayout:(double)arg1;
- (void)onChangeFavStateFail:(id)arg1;
- (void)onChangeFavStateSuccess:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)requestRelated:(long long)arg1;
- (void)reloadData;
- (void)routerEventWithName:(id)arg1 userInfo:(id)arg2;
- (void)close;
- (void)startUse;
- (void)moveAnimation;
- (void)confirm;
- (void)animationWithItem:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (_Bool)checkIsNewUser;
- (id)initWithFrame:(struct CGRect)arg1 andFavData:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

