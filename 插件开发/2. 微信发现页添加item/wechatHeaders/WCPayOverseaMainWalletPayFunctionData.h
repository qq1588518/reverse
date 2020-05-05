//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayOverseaMainWalletData.h"

@class NSArray, WCPayOverseaReadActivityList, WCPayOverseaTypeInfoObject;

@interface WCPayOverseaMainWalletPayFunctionData : WCPayOverseaMainWalletData
{
    _Bool _m_hasFooterView;
    NSArray *_m_functionList;
    WCPayOverseaTypeInfoObject *_m_typeInfo;
    WCPayOverseaReadActivityList *_m_readList;
    NSArray *_m_walletRegionDescArray;
    double _m_currentTotalHeight;
}

@property(nonatomic) double m_currentTotalHeight; // @synthesize m_currentTotalHeight=_m_currentTotalHeight;
@property(nonatomic) _Bool m_hasFooterView; // @synthesize m_hasFooterView=_m_hasFooterView;
@property(retain, nonatomic) NSArray *m_walletRegionDescArray; // @synthesize m_walletRegionDescArray=_m_walletRegionDescArray;
@property(retain, nonatomic) WCPayOverseaReadActivityList *m_readList; // @synthesize m_readList=_m_readList;
@property(retain, nonatomic) WCPayOverseaTypeInfoObject *m_typeInfo; // @synthesize m_typeInfo=_m_typeInfo;
@property(retain, nonatomic) NSArray *m_functionList; // @synthesize m_functionList=_m_functionList;
- (void).cxx_destruct;
- (double)totalHeight;
- (unsigned long long)rowCount;
- (id)totalRegionDesc;
- (double)footerViewHeight;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)caluateDynamicCellHeight:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;

@end

