//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XMCategoryFilterTableViewCellDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UITableView;
@protocol XMFilterTagViewDelegate;

@interface XMCategoryFilterTagView : UIView <UITableViewDataSource, UITableViewDelegate, XMCategoryFilterTableViewCellDelegate>
{
    _Bool _hindConditon;
    unsigned long long _type;
    NSMutableArray *_filterRows;
    NSArray *_conditionTitles;
    NSArray *_conditions;
    long long _conditionIndex;
    id <XMFilterTagViewDelegate> _delegate;
    UITableView *_filterTable;
    NSMutableArray *_filterTableViewDatas;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) NSMutableArray *filterTableViewDatas; // @synthesize filterTableViewDatas=_filterTableViewDatas;
@property(retain, nonatomic) UITableView *filterTable; // @synthesize filterTable=_filterTable;
@property(nonatomic) _Bool hindConditon; // @synthesize hindConditon=_hindConditon;
@property(nonatomic) __weak id <XMFilterTagViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long conditionIndex; // @synthesize conditionIndex=_conditionIndex;
@property(retain, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
@property(retain, nonatomic) NSArray *conditionTitles; // @synthesize conditionTitles=_conditionTitles;
@property(retain, nonatomic) NSMutableArray *filterRows; // @synthesize filterRows=_filterRows;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)resetViewHeight:(double)arg1;
- (double)getTotalNeedHeight;
- (void)setTableViewScrollEnable:(_Bool)arg1;
- (void)updateFilterTableViewData;
- (void)renewTagViewHeight;
- (void)onSelectConditionIndex:(long long)arg1;
- (void)onSelectButtonClicked;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

