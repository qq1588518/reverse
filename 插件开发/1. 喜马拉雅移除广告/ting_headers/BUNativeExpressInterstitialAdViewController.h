//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class BUDislikeButton, BUNativeExpressAdView, BUNativeExpressInterstitialAd;

@interface BUNativeExpressInterstitialAdViewController : UIViewController
{
    BUNativeExpressInterstitialAd *_interstitialAd;
    BUNativeExpressAdView *_interstitialAdView;
    BUDislikeButton *_closeButton;
    struct CGSize _adSize;
}

@property(nonatomic) struct CGSize adSize; // @synthesize adSize=_adSize;
@property(retain, nonatomic) BUDislikeButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) BUNativeExpressAdView *interstitialAdView; // @synthesize interstitialAdView=_interstitialAdView;
@property(retain, nonatomic) BUNativeExpressInterstitialAd *interstitialAd; // @synthesize interstitialAd=_interstitialAd;
- (void).cxx_destruct;
- (id)c_xyDict;
- (void)closeButtonTapped:(id)arg1;
- (void)buidupViews;
- (void)viewDidLoad;
- (id)initViewControllerWithExpressAdView:(id)arg1 adSize:(struct CGSize)arg2;

@end

