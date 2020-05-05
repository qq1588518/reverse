//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "XMMRecommendCommunityCellCellDelegate-Protocol.h"

@class NSString, UICollectionView, XMMRecommendCommunityCellLayout;

@interface XMMRecommendCommunityCell : XMMBaseCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, XMMRecommendCommunityCellCellDelegate>
{
    UICollectionView *_collectionView;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)recommendCommunityCellCellDidTapMoreButton:(id)arg1;
- (void)recommendCommunityCellCell:(id)arg1 didTapCommunity:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)clickMoreCell:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setTheme:(id)arg1;
@property(retain, nonatomic) XMMRecommendCommunityCellLayout *layout; // @dynamic layout;
- (void)didInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

