//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "XMConfigFileDelegate-Protocol.h"

@class MBProgressHUD, NSArray, NSMutableArray, NSString, UIAlertView, UISwitch, XMServerRequest;

@interface XMSettingViewController : XMSubLevelViewController <XMConfigFileDelegate, UIAlertViewDelegate, UIActionSheetDelegate>
{
    _Bool isShowOrderChinaUnion;
    NSMutableArray *dataArray;
    NSString *totalSize;
    UIAlertView *myAlertView;
    NSArray *donateProducts;
    XMServerRequest *checkUpdateRequest;
    NSString *downloadUrl;
    UISwitch *_networkSwitch;
    MBProgressHUD *_hud;
}

@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) UISwitch *networkSwitch; // @synthesize networkSwitch=_networkSwitch;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl;
@property(retain, nonatomic) XMServerRequest *checkUpdateRequest; // @synthesize checkUpdateRequest;
@property(retain, nonatomic) NSArray *donateProducts; // @synthesize donateProducts;
@property(retain, nonatomic) UIAlertView *myAlertView; // @synthesize myAlertView;
@property(retain, nonatomic) NSString *totalSize; // @synthesize totalSize;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray;
- (void).cxx_destruct;
- (void)didQueryConfigFileOk;
- (void)pushMenuVC;
- (void)checkConfigFile;
- (id)xmSpecialFunctionUrl;
- (id)xmNewFunctionUrl;
- (void)onSwitchChanged:(id)arg1;
- (void)writeLetter;
- (void)checkForUpdate;
- (void)getSettingInfoWithBusinessType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getChildrenModeSetting;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLogin:(id)arg1;
- (void)onSwitch:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)reloadData;
- (void)reloadDataFromThread;
- (void)sizeForCache;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)removeItemForKey:(id)arg1;
- (void)setupSettingData;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

