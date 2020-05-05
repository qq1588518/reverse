//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UICollectionView, UITextField;

@interface XMSocialCommunitySearchAuxView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UITextFieldDelegate, UICollectionViewDelegateFlowLayout>
{
    CDUnknownBlockType _clickCancel;
    CDUnknownBlockType _clickSearch;
    NSMutableArray *_model;
    NSString *_searchKey;
    NSString *_placeholder;
    long long _searchKeyId;
    UIView *_maskView;
    UITextField *_searchTextFiled;
    UIButton *_searchButton;
    UICollectionView *_collectionView;
    UIView *_lineV;
    double _originHeight;
}

@property(nonatomic) double originHeight; // @synthesize originHeight=_originHeight;
@property(retain, nonatomic) UIView *lineV; // @synthesize lineV=_lineV;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UITextField *searchTextFiled; // @synthesize searchTextFiled=_searchTextFiled;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) long long searchKeyId; // @synthesize searchKeyId=_searchKeyId;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(retain, nonatomic) NSMutableArray *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType clickSearch; // @synthesize clickSearch=_clickSearch;
@property(copy, nonatomic) CDUnknownBlockType clickCancel; // @synthesize clickCancel=_clickCancel;
- (void).cxx_destruct;
- (void)resignFirstResponder;
- (void)handleCancel;
- (void)searchTextChanged;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

