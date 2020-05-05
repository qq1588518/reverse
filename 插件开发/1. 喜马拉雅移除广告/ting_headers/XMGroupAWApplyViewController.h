//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

@class NSArray, NSDictionary, NSMutableArray, UIButton, XMGroupTalkingItem;

@interface XMGroupAWApplyViewController : XMBaseTabelVC
{
    NSDictionary *_infoDict;
    NSArray *_titleArr;
    NSArray *_maxLengthArr;
    NSArray *_keyboardTypeArr;
    _Bool _reqFinished;
    UIButton *_applyBtn;
    long long _btnEnable;
    XMGroupTalkingItem *_groupItem;
    NSMutableArray *_ansArr;
}

@property(retain, nonatomic) NSMutableArray *ansArr; // @synthesize ansArr=_ansArr;
@property(retain, nonatomic) XMGroupTalkingItem *groupItem; // @synthesize groupItem=_groupItem;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)p_checkBtnEnable;
- (void)p_changeApplyBtn:(_Bool)arg1;
- (void)p_applyAction:(id)arg1;
- (_Bool)p_checkInput;
- (id)p_processAnswer;
- (void)p_setupUnits;
- (void)p_requestRecruit;
- (void)p_createTableHeaderView;
- (double)contentBottomOffset;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)p_setConstObject;
- (void)dealloc;
- (void)viewDidLoad;

@end

