//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EmoticonBoardCrossCollectionBasePageCell.h"

#import "EmoticonBoardRecommendViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"

@class NSString;
@protocol EmoticonBoardCrossCollectionRecommendPageDelegate;

@interface EmoticonBoardCrossCollectionRecommendPageCell : EmoticonBoardCrossCollectionBasePageCell <EmoticonBoardRecommendViewDelegate, UICollectionViewDataSource>
{
}

- (void)onEmoticonBoardRecommendViewTapWithPid:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)configCollectionViewWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <EmoticonBoardCrossCollectionRecommendPageDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

