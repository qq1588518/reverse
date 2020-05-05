//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMCouponBottomViewDelegate-Protocol.h"
#import "XMTableViewDelegateProtocol-Protocol.h"

@class NSString, UIView, XMAlbumItem, XMCoupon, XMCouponBottomView, XMServerRequest, XMTableViewDataSource;
@protocol XMCouponSelectDelegate;

@interface XMCouponSelectViewController : XMSubLevelViewController <XMTableViewDelegateProtocol, XMCouponBottomViewDelegate>
{
    _Bool _hasUnusableCodes;
    _Bool _isPresentyType;
    XMAlbumItem *_album;
    XMCoupon *_coupon;
    long long _quantity;
    id <XMCouponSelectDelegate> _delegate;
    XMServerRequest *_couponRequest;
    XMTableViewDataSource *_tableDataSource;
    XMCouponBottomView *_bottomView;
    UIView *_moreUnusedEnter;
}

@property(retain, nonatomic) UIView *moreUnusedEnter; // @synthesize moreUnusedEnter=_moreUnusedEnter;
@property(retain, nonatomic) XMCouponBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) XMTableViewDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(retain, nonatomic) XMServerRequest *couponRequest; // @synthesize couponRequest=_couponRequest;
@property(nonatomic) __weak id <XMCouponSelectDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isPresentyType; // @synthesize isPresentyType=_isPresentyType;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) XMCoupon *coupon; // @synthesize coupon=_coupon;
@property(retain, nonatomic) XMAlbumItem *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (void)onCouponBottomSelect;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (void)triggerLoadMore;
- (void)triggerPullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)onFailed:(id)arg1;
- (void)onFinished:(id)arg1;
- (void)requestRedGiftData;
- (void)unusedCoupons;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

