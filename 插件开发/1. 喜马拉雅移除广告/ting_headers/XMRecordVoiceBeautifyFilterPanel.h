//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMRecordFloatPanel.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView;
@protocol XMRecordVoiceBeautifyFilterPanelDelegate;

@interface XMRecordVoiceBeautifyFilterPanel : XMRecordFloatPanel <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <XMRecordVoiceBeautifyFilterPanelDelegate> _delegate;
    UICollectionView *_collectionView;
    NSArray *_imageArray;
    NSArray *_titleArray;
    NSString *_selectedTitle;
}

@property(retain, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <XMRecordVoiceBeautifyFilterPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showOnView:(id)arg1;
- (void)hide;
- (void)setCurrentSelectItemWithTitle:(id)arg1 on:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onEarStatuChanged;
- (void)loadData;
- (void)setupViews;
- (id)init;
- (id)initWithSelectTitle:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

