//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveRadioBaseViewController.h"

#import "XMLiveRadioCellDelegate-Protocol.h"

@class NSMutableArray, NSString, XMServerRequest;

@interface XMLiveRadioNetViewController : XMLiveRadioBaseViewController <XMLiveRadioCellDelegate>
{
    _Bool _hasMore;
    long long _currentPageNum;
    XMServerRequest *netRequest;
    NSMutableArray *netList;
}

@property(retain, nonatomic) NSMutableArray *netList; // @synthesize netList;
@property(retain, nonatomic) XMServerRequest *netRequest; // @synthesize netRequest;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tabbarRightView;
- (id)tabbarLeftView;
- (void)triggerLoadMore;
- (void)triggerPullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)countryRadioRequestFail:(id)arg1;
- (void)countryRadioRequestFinish:(id)arg1;
- (void)requestCountryRadioListWithIndex:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

