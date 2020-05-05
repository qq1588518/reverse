//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBFilterDropDownMenuDataSource-Protocol.h"
#import "WBFilterDropDownMenuDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, WBFilterDropDownMenu;
@protocol WBFilterMenuProtocol;

@interface WBFilterDropDownMenuManager : NSObject <WBFilterDropDownMenuDataSource, WBFilterDropDownMenuDelegate>
{
    NSArray *filterMenuArray;
    NSMutableArray *selectedIndexArray;
    WBFilterDropDownMenu *filterMenu;
    id loadOperationHandle;
    NSMutableDictionary *extraParamsDic;
    NSMutableArray *leftContentOffsetArray;
    NSMutableArray *rightContentOffsetArray;
    NSMutableArray *highlightIndexPathArray;
    id <WBFilterMenuProtocol> delegate;
}

@property(nonatomic) id <WBFilterMenuProtocol> delegate; // @synthesize delegate;
@property(nonatomic) WBFilterDropDownMenu *filterMenu; // @synthesize filterMenu;
@property(retain, nonatomic) NSMutableArray *highlightIndexPathArray; // @synthesize highlightIndexPathArray;
@property(retain, nonatomic) NSMutableArray *rightContentOffsetArray; // @synthesize rightContentOffsetArray;
@property(retain, nonatomic) NSMutableArray *leftContentOffsetArray; // @synthesize leftContentOffsetArray;
@property(retain, nonatomic) NSMutableArray *selectedIndexArray; // @synthesize selectedIndexArray;
@property(copy, nonatomic) NSArray *filterMenuArray; // @synthesize filterMenuArray;
- (id)getExtraParamsWithoutIndex:(long long)arg1;
- (id)getSchemeWithIndexPath:(id)arg1;
- (id)getFilterInfoModelWithIndex:(long long)arg1;
- (void)menu:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)menu:(id)arg1 titleForRowAtIndexPath:(id)arg2;
- (id)menu:(id)arg1 titleForColumn:(long long)arg2;
- (long long)menu:(id)arg1 numberOfRowsInColumn:(long long)arg2 leftOrRight:(long long)arg3 leftRow:(long long)arg4;
- (long long)currentLeftSelectedRow:(long long)arg1;
- (double)widthRatioOfLeftColumn:(long long)arg1;
- (_Bool)haveRightTableViewInColumn:(long long)arg1;
- (long long)numberOfColumnsInMenu:(id)arg1;
- (void)cancleNetworkOperationHandler;
- (void)resetFilterDataSourceWithDic:(id)arg1;
- (void)fetchFilterMenuInfoFromServer;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

