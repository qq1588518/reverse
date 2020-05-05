//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WBDatePickerViewDelegate-Protocol.h"
#import "WBLoginManagerProtocol-Protocol.h"

@class NSString, SNHTTPRequestOperationWrapper, UIButton, UIImageView, UILabel, UIScrollView, UIView, WBDatePickerView, WBNewVerficationDataModel, WBProfileTextField, WBStyleButton;

@interface WBCompleteProfileViewController : WBViewController <WBLoginManagerProtocol, WBDatePickerViewDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    SNHTTPRequestOperationWrapper *fetchRequestOperationWrapper;
    _Bool _hasShowKeyBoard;
    double _scrollViewHeight;
    UIScrollView *_backgroundScrollView;
    WBProfileTextField *_birthField;
    WBDatePickerView *_datePickerView;
    WBStyleButton *_nextButton;
    _Bool isInLoginManager;
    _Bool _needUploadContacts;
    _Bool _pushFromHB;
    NSString *_verificationCode;
    WBNewVerficationDataModel *_dataModel;
    UIButton *_genderMaleButton;
    UIButton *_genderFemaleButton;
    UIImageView *_maleIcon;
    UIImageView *_femaleIcon;
    UILabel *_maleLabel;
    UILabel *_femaleLabel;
    UIImageView *_arrowImageView;
    NSString *_gender;
    NSString *_touristID;
    UIView *_birthBgView;
}

@property(retain, nonatomic) UIView *birthBgView; // @synthesize birthBgView=_birthBgView;
@property(retain, nonatomic) NSString *touristID; // @synthesize touristID=_touristID;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *femaleLabel; // @synthesize femaleLabel=_femaleLabel;
@property(retain, nonatomic) UILabel *maleLabel; // @synthesize maleLabel=_maleLabel;
@property(retain, nonatomic) UIImageView *femaleIcon; // @synthesize femaleIcon=_femaleIcon;
@property(retain, nonatomic) UIImageView *maleIcon; // @synthesize maleIcon=_maleIcon;
@property(retain, nonatomic) UIButton *genderFemaleButton; // @synthesize genderFemaleButton=_genderFemaleButton;
@property(retain, nonatomic) UIButton *genderMaleButton; // @synthesize genderMaleButton=_genderMaleButton;
@property(nonatomic) _Bool pushFromHB; // @synthesize pushFromHB=_pushFromHB;
@property(copy, nonatomic) WBNewVerficationDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(copy, nonatomic) NSString *verificationCode; // @synthesize verificationCode=_verificationCode;
@property(nonatomic) _Bool needUploadContacts; // @synthesize needUploadContacts=_needUploadContacts;
@property(nonatomic) _Bool isInLoginManager; // @synthesize isInLoginManager;
- (void).cxx_destruct;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)createActionLog;
- (void)handleError:(id)arg1;
- (void)nextButtonClick:(id)arg1;
- (void)femaleButtonTouchDown:(id)arg1;
- (void)maleButtonTouchDown:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)datePickFinished:(id)arg1 withDate:(id)arg2;
- (void)updateNextButtonState;
- (void)configSubviewsFrame;
- (void)setupSubviews;
- (void)initNextButton;
- (void)initBirthdayInputView;
- (void)initGenderSelectView;
- (void)initBackgroundScrollView;
- (void)dismissSelf;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)moduleID;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

