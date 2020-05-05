//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSMutableDictionary, NSString, UAAPIManager, UABottomBtn, UACustomModel, UASDKServerConfig, UAServiceLabelView, UIButton, UIImageView, UILabel;

@interface UAAuthViewController : UIViewController
{
    _Bool _needUpload;
    _Bool _confirmProtocol;
    _Bool _tokenGetSucess;
    CDUnknownBlockType _completion;
    UAAPIManager *_apiManager;
    UASDKServerConfig *_serverConfig;
    NSMutableDictionary *_sdkData;
    UIButton *_loginButton;
    UIImageView *_contentLogoImageView;
    UILabel *_numberLabel;
    UIButton *_switchAccountButton;
    UAServiceLabelView *_serviceLabel;
    UABottomBtn *_bottomButton;
    UILabel *_logoLabel;
    NSMutableDictionary *_eventTrackingDic;
    double _navHigh;
    double _statusHigh;
    long long _logBtnClickCount;
    NSString *_interfaceType;
    NSString *_interfaceCode;
    NSString *_interfaceElasped;
    NSString *_loginType;
    double _startTime;
    double _scaleW;
    double _scaleH;
    UACustomModel *_model;
    long long _statusBarOrientation;
}

@property(nonatomic) long long statusBarOrientation; // @synthesize statusBarOrientation=_statusBarOrientation;
@property(retain, nonatomic) UACustomModel *model; // @synthesize model=_model;
@property(nonatomic) double scaleH; // @synthesize scaleH=_scaleH;
@property(nonatomic) double scaleW; // @synthesize scaleW=_scaleW;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *loginType; // @synthesize loginType=_loginType;
@property(copy, nonatomic) NSString *interfaceElasped; // @synthesize interfaceElasped=_interfaceElasped;
@property(copy, nonatomic) NSString *interfaceCode; // @synthesize interfaceCode=_interfaceCode;
@property(copy, nonatomic) NSString *interfaceType; // @synthesize interfaceType=_interfaceType;
@property(nonatomic) _Bool tokenGetSucess; // @synthesize tokenGetSucess=_tokenGetSucess;
@property(nonatomic) long long logBtnClickCount; // @synthesize logBtnClickCount=_logBtnClickCount;
@property(nonatomic) double statusHigh; // @synthesize statusHigh=_statusHigh;
@property(nonatomic) double navHigh; // @synthesize navHigh=_navHigh;
@property(retain, nonatomic) NSMutableDictionary *eventTrackingDic; // @synthesize eventTrackingDic=_eventTrackingDic;
@property(nonatomic) _Bool confirmProtocol; // @synthesize confirmProtocol=_confirmProtocol;
@property(retain, nonatomic) UILabel *logoLabel; // @synthesize logoLabel=_logoLabel;
@property(nonatomic) _Bool needUpload; // @synthesize needUpload=_needUpload;
@property(retain, nonatomic) UABottomBtn *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UAServiceLabelView *serviceLabel; // @synthesize serviceLabel=_serviceLabel;
@property(retain, nonatomic) UIButton *switchAccountButton; // @synthesize switchAccountButton=_switchAccountButton;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UIImageView *contentLogoImageView; // @synthesize contentLogoImageView=_contentLogoImageView;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) NSMutableDictionary *sdkData; // @synthesize sdkData=_sdkData;
@property(retain, nonatomic) UASDKServerConfig *serverConfig; // @synthesize serverConfig=_serverConfig;
@property(retain, nonatomic) UAAPIManager *apiManager; // @synthesize apiManager=_apiManager;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)allEventClickFieldSuperposition;
- (void)allEventClickSuccessSuperposition;
- (void)completionUpdateWithResult:(id)arg1;
- (void)updateInterfaceInfoParamsResult:(id)arg1;
- (_Bool)isOutofBoundsWithView:(id)arg1;
- (void)confirmCMCCProtocol:(id)arg1;
- (void)configPrivacy;
- (void)switchAccountAction:(id)arg1;
- (void)setSwitchBtn;
- (void)prepareRequestData;
- (id)diagnoseGettingPhonenumberCondition;
- (void)secondGetPhoneAndTokenWithButton:(id)arg1 BgView:(id)arg2 Activity:(id)arg3;
- (void)loginButtonAction:(id)arg1;
- (void)configLoginBtn;
- (void)configSloganLabel;
- (void)configContentPhoneAreaView;
- (void)configContentLogoImage;
- (void)navBackItemAction:(id)arg1;
- (void)configNavBar;
- (void)configCustomArea;
- (void)hiddenNavigationBarSeparatorLine;
- (void)customDidss:(id)arg1;
- (void)initAllRelatedClass;
- (void)setBackImage;
- (void)viewDidLoad;
- (void)setWindowStyle;
- (void)viewWillLayoutSubviews;
- (void)setUpadateFrame;
- (void)handleDeviceOrientationDidChange;
- (_Bool)shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)layoutControllerSubViews:(id)arg1;
- (id)initWithModel:(id)arg1;
- (void)dealloc;

@end

