//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBIntegrateViewController.h"

#import "MovieSDKTabBarControllerDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class MovieSDKInstanceSharedData, MovieSDKStartupData, MovieSDKTabBarController, NSArray, NSDictionary, NSString, UIImageView, UIViewController;

@interface MovieSDKRootViewController : WBIntegrateViewController <UITabBarControllerDelegate, MovieSDKTabBarControllerDelegate>
{
    _Bool _adHasShowed;
    _Bool _redirectSecondView;
    MovieSDKInstanceSharedData *_sharedData;
    NSArray *_viewControllers;
    MovieSDKTabBarController *_childTabBarController;
    UIViewController *_secondViewController;
    NSDictionary *_schemeInfo;
    UIImageView *_cacheImageView;
    long long _adFrom;
    NSString *_fromUIcode;
    NSString *_fromFid;
    MovieSDKStartupData *_startupData;
    NSString *_pageScheme;
}

@property(retain, nonatomic) NSString *pageScheme; // @synthesize pageScheme=_pageScheme;
@property(retain, nonatomic) MovieSDKStartupData *startupData; // @synthesize startupData=_startupData;
@property(copy, nonatomic) NSString *fromFid; // @synthesize fromFid=_fromFid;
@property(copy, nonatomic) NSString *fromUIcode; // @synthesize fromUIcode=_fromUIcode;
@property(nonatomic) _Bool redirectSecondView; // @synthesize redirectSecondView=_redirectSecondView;
@property(nonatomic) _Bool adHasShowed; // @synthesize adHasShowed=_adHasShowed;
@property(nonatomic) long long adFrom; // @synthesize adFrom=_adFrom;
@property(retain, nonatomic) UIImageView *cacheImageView; // @synthesize cacheImageView=_cacheImageView;
@property(retain, nonatomic) NSDictionary *schemeInfo; // @synthesize schemeInfo=_schemeInfo;
@property(retain, nonatomic) UIViewController *secondViewController; // @synthesize secondViewController=_secondViewController;
@property(retain, nonatomic) MovieSDKTabBarController *childTabBarController; // @synthesize childTabBarController=_childTabBarController;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) MovieSDKInstanceSharedData *sharedData; // @synthesize sharedData=_sharedData;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)parseScheme:(id)arg1;
- (id)getSupportedSchemeWithLink:(id)arg1;
- (void)resetViewFrame;
- (void)downloadAdImage:(id)arg1;
- (void)processStartupInfo:(id)arg1;
- (_Bool)isNeedRequest;
- (_Bool)is4GOrWifi;
- (void)requestStartupInfo;
- (void)checkRtUICodeAndRtFId;
- (void)initSchemeInfoWithLink:(id)arg1;
- (void)tabBarControllerDidSelectPublish:(id)arg1;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)dismiss;
- (void)handleViewDidAppearEventAfterOpenScheme;
- (id)selectedViewController;
- (unsigned long long)selectedIndex;
- (void)openWithSchemeInfo:(id)arg1;
- (void)openScheme:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)checkAdFrom;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

