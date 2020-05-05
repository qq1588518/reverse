//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MBProgressHUD, NSMutableArray, NSString, UIButton, UIScrollView, UITableView, UIView;

@interface XMDiscoverConnectDevicesViewController : XMBaseVC <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _selected;
    _Bool _isfirstIn;
    unsigned long long _type;
    unsigned long long _state;
    UIScrollView *_scrollView;
    UIView *_containerView;
    UITableView *_tableView;
    NSString *_connectImageName;
    NSString *_connectLableText;
    MBProgressHUD *_hudView;
    NSMutableArray *_deviceItems;
    long long _playingIndex;
    UIButton *_buttonConnect;
}

@property(nonatomic) _Bool isfirstIn; // @synthesize isfirstIn=_isfirstIn;
@property(retain, nonatomic) UIButton *buttonConnect; // @synthesize buttonConnect=_buttonConnect;
@property(nonatomic) long long playingIndex; // @synthesize playingIndex=_playingIndex;
@property(retain, nonatomic) NSMutableArray *deviceItems; // @synthesize deviceItems=_deviceItems;
@property(retain, nonatomic) MBProgressHUD *hudView; // @synthesize hudView=_hudView;
@property(copy, nonatomic) NSString *connectLableText; // @synthesize connectLableText=_connectLableText;
@property(copy, nonatomic) NSString *connectImageName; // @synthesize connectImageName=_connectImageName;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onWiFiDeviceFoundNotification;
- (_Bool)discoverWifiDevice;
- (_Bool)discoverXiaoYaDevice;
- (id)currentDevice;
- (void)checkDeviceConnectState;
- (_Bool)isShowNoWifi;
- (id)itemName;
- (id)headerView;
- (void)setupRightButton;
- (void)setupDeviceConnectView;
- (id)XIAOYABodyView;
- (id)WIFIBodyView:(id)arg1 tip:(id)arg2 image:(id)arg3;
- (id)headTopView:(id)arg1;
- (void)setupDevicedisconnectView;
- (void)setupNoWifiView;
- (void)resetSubviews;
- (void)resetViewState;
- (void)updateList;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)buynow;
- (void)connectSure;
- (void)connect;
- (void)discoverDevices;
- (void)refresh;
- (void)deviceDisconnect;
- (void)refreshNetwork;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

