//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveDraggablePopView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UICollectionView, UILabel, UITableView, XMEmptyView;
@protocol XMLiveEntRadioAudienceMicListViewDelegate;

@interface XMLiveEntRadioAudienceMicListView : XMLiveDraggablePopView <UITableViewDelegate, UITableViewDataSource, UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <XMLiveEntRadioAudienceMicListViewDelegate> _delegate;
    UILabel *_micTitleLabel;
    UIButton *_greatGrdCommitBtn;
    UIButton *_grdCommitBtn;
    UITableView *_grdTableView;
    UICollectionView *_greatGrdCollectionView;
    UILabel *_grdCountLabel;
    UILabel *_greatGrdCountLabel;
    NSMutableArray *_grdDataSource;
    NSMutableArray *_greateGrdDataSource;
    XMEmptyView *_emptyView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSMutableArray *greateGrdDataSource; // @synthesize greateGrdDataSource=_greateGrdDataSource;
@property(retain, nonatomic) NSMutableArray *grdDataSource; // @synthesize grdDataSource=_grdDataSource;
@property(retain, nonatomic) UILabel *greatGrdCountLabel; // @synthesize greatGrdCountLabel=_greatGrdCountLabel;
@property(retain, nonatomic) UILabel *grdCountLabel; // @synthesize grdCountLabel=_grdCountLabel;
@property(retain, nonatomic) UICollectionView *greatGrdCollectionView; // @synthesize greatGrdCollectionView=_greatGrdCollectionView;
@property(retain, nonatomic) UITableView *grdTableView; // @synthesize grdTableView=_grdTableView;
@property(retain, nonatomic) UIButton *grdCommitBtn; // @synthesize grdCommitBtn=_grdCommitBtn;
@property(retain, nonatomic) UIButton *greatGrdCommitBtn; // @synthesize greatGrdCommitBtn=_greatGrdCommitBtn;
@property(retain, nonatomic) UILabel *micTitleLabel; // @synthesize micTitleLabel=_micTitleLabel;
@property(nonatomic) __weak id <XMLiveEntRadioAudienceMicListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onNormal:(id)arg1;
- (void)onGreat:(id)arg1;
- (double)customedViewHeight;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)synchronizeMicList:(id)arg1;
- (void)showWithAnimate:(_Bool)arg1;
- (void)initBase;
- (id)initPopFromView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

