//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UICollectionView, XMEmptyView;
@protocol XMTrackbuyRecommendAlbumViewDelegate;

@interface XMTrackbuyRecommendAlbumView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _requestSuccess;
    long long _albumId;
    id <XMTrackbuyRecommendAlbumViewDelegate> _delegate;
    double _displayHeight;
    NSArray *_albumLayouts;
    UIView *_mask;
    UIButton *_backButton;
    XMEmptyView *_noNetView;
    UICollectionView *_collectionView;
}

+ (double)heightForCollectionViewIsEmpty:(_Bool)arg1;
+ (struct CGSize)itemSize;
+ (id)albumLayoutWithAlbum:(id)arg1;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) XMEmptyView *noNetView; // @synthesize noNetView=_noNetView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) NSArray *albumLayouts; // @synthesize albumLayouts=_albumLayouts;
@property(nonatomic) double displayHeight; // @synthesize displayHeight=_displayHeight;
@property(nonatomic) __weak id <XMTrackbuyRecommendAlbumViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long albumId; // @synthesize albumId=_albumId;
- (void).cxx_destruct;
- (id)parseRespons:(id)arg1;
- (void)requestAlbumWithComplete:(CDUnknownBlockType)arg1;
- (void)reportCurrentAblumsInDisplay;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)tap:(id)arg1;
- (void)back:(id)arg1;
- (void)showView:(_Bool)arg1 withAnimation:(_Bool)arg2;
- (void)reloadAlbumIfNeeded;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

