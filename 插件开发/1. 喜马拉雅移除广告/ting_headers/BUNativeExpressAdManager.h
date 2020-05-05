//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUNativeAdsManagerDelegate-Protocol.h"

@class BUAdSlot, BUNativeAdsManager, NSArray, NSMutableArray, NSString;
@protocol BUNativeExpressAdViewDelegate;

@interface BUNativeExpressAdManager : NSObject <BUNativeAdsManagerDelegate>
{
    _Bool _isLoading;
    BUAdSlot *_adslot;
    id <BUNativeExpressAdViewDelegate> _delegate;
    BUNativeAdsManager *_adManager;
    NSMutableArray *_views;
    CDUnknownBlockType _dismissBlock;
    CDUnknownBlockType _videoCachedSuccess;
    double _tolerateTimeout;
    NSArray *_nativeAdDataArray;
    struct CGSize _adSize;
}

@property(retain, nonatomic) NSArray *nativeAdDataArray; // @synthesize nativeAdDataArray=_nativeAdDataArray;
@property(nonatomic) double tolerateTimeout; // @synthesize tolerateTimeout=_tolerateTimeout;
@property(copy, nonatomic) CDUnknownBlockType videoCachedSuccess; // @synthesize videoCachedSuccess=_videoCachedSuccess;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSMutableArray *views; // @synthesize views=_views;
@property(retain, nonatomic) BUNativeAdsManager *adManager; // @synthesize adManager=_adManager;
@property(nonatomic) __weak id <BUNativeExpressAdViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize adSize; // @synthesize adSize=_adSize;
@property(retain, nonatomic) BUAdSlot *adslot; // @synthesize adslot=_adslot;
- (void).cxx_destruct;
- (_Bool)splashMaterialCanUse:(id)arg1;
- (void)handleError:(id)arg1;
- (_Bool)checkTemplateValid;
- (void)setViewsSize;
- (void)handleFailureLoadWithError:(id)arg1;
- (void)handleSuccessLoadWithNativeAds:(id)arg1;
- (void)nativeAdsManager:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeAdsManagerSuccessToLoad:(id)arg1 nativeAds:(id)arg2;
- (void)loadAd:(long long)arg1;
- (void)registURLProtocal;
- (id)initWithSlot:(id)arg1 adSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

