//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WBALAssetPickerContextManagerDelegate-Protocol.h"
#import "WBLoginManagerProtocol-Protocol.h"

@class NSString, SNHTTPRequestOperationWrapper, UILabel, UIScrollView, UIView, WBALAssetPickerContextManager, WBContactAvatarView, WBProfileTextField, WBProgressHUD, WBStyleButton;

@interface WBUploadAvatarViewController : WBViewController <WBLoginManagerProtocol, WBALAssetPickerContextManagerDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    UIScrollView *_backgroundScrollView;
    WBALAssetPickerContextManager *_pickerManager;
    WBProgressHUD *_hud;
    SNHTTPRequestOperationWrapper *fetchRequestOperationWrapper;
    WBProfileTextField *_userName;
    _Bool _hasShowKeyBoard;
    _Bool shouldShowUsername;
    _Bool isUserNameReady;
    _Bool isAvatarReady;
    _Bool isInLoginManager;
    UILabel *_tipsLabel;
    WBContactAvatarView *_avatarView;
    WBStyleButton *_uploadAvatarBtn;
    UIView *_inputBgView;
}

@property(retain, nonatomic) UIView *inputBgView; // @synthesize inputBgView=_inputBgView;
@property(retain, nonatomic) WBStyleButton *uploadAvatarBtn; // @synthesize uploadAvatarBtn=_uploadAvatarBtn;
@property(retain, nonatomic) WBContactAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) _Bool isInLoginManager; // @synthesize isInLoginManager;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)initBackgroundScrollView;
- (void)WBALAssetPickerContextManager:(id)arg1 finishedPickImage:(id)arg2;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setBtnState;
- (void)textFieldValueDidChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)gotoHome;
- (void)updateAvatar;
- (void)updateUserName;
- (void)uploadEvent:(id)arg1;
- (void)openAlbumEvent;
- (void)onBackgroundTapped;
- (void)skipButtonClick:(id)arg1;
- (void)dismissSelf;
- (void)configSubviewsFrame;
- (void)setupSubviews;
- (void)initUsernameInputView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updatePropertyWithPara:(id)arg1 context:(id)arg2 currentStep:(unsigned long long)arg3;
- (id)moduleID;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

