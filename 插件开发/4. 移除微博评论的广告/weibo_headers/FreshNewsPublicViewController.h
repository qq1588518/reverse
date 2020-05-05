//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "FreshNewsCreateHeadViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "WBALAssetPickerContextManagerDelegate-Protocol.h"
#import "WBComposerTopicSortViewControllerDelegate-Protocol.h"
#import "WBListPickerViewDelegate-Protocol.h"
#import "WBTopicPickerControllerDelegate-Protocol.h"
#import "WBTopicSortViewControllerDelegate-Protocol.h"

@class FreshNewsCreateHeadView, NSMutableArray, NSString, UIButton, UILabel, UIView, WBALAssetPickerContextManager, WBEmotionListPickerView, WBFreshNewsCreateData, WBFreshNewsEngine, WBProgressHUD;

@interface FreshNewsPublicViewController : WBTableViewController <FreshNewsCreateHeadViewDelegate, UITextViewDelegate, WBALAssetPickerContextManagerDelegate, WBTopicPickerControllerDelegate, WBListPickerViewDelegate, WBTopicSortViewControllerDelegate, WBComposerTopicSortViewControllerDelegate>
{
    double descCellHeightCache;
    UIButton *hintBtn;
    _Bool _canPublish;
    UIButton *_rightBarButton;
    UIView *_contentWarningView;
    UILabel *_contentWarningLabel;
    FreshNewsCreateHeadView *_headerView;
    WBProgressHUD *_newsPostingProgress;
    UIView *_footView;
    unsigned long long _state;
    WBFreshNewsEngine *_engine;
    WBALAssetPickerContextManager *_imageManager;
    WBFreshNewsCreateData *_createData;
    NSString *_topicStr;
    WBEmotionListPickerView *_filedPicker;
    NSMutableArray *_filedArr;
    NSString *_fieldId;
    long long _cardID;
    NSString *_fieldName;
    NSString *_errMsg;
}

@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) _Bool canPublish; // @synthesize canPublish=_canPublish;
@property(copy, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property(nonatomic) long long cardID; // @synthesize cardID=_cardID;
@property(copy, nonatomic) NSString *fieldId; // @synthesize fieldId=_fieldId;
@property(retain, nonatomic) NSMutableArray *filedArr; // @synthesize filedArr=_filedArr;
@property(retain, nonatomic) WBEmotionListPickerView *filedPicker; // @synthesize filedPicker=_filedPicker;
@property(copy, nonatomic) NSString *topicStr; // @synthesize topicStr=_topicStr;
@property(retain, nonatomic) WBFreshNewsCreateData *createData; // @synthesize createData=_createData;
@property(retain, nonatomic) WBALAssetPickerContextManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) WBFreshNewsEngine *engine; // @synthesize engine=_engine;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) WBProgressHUD *newsPostingProgress; // @synthesize newsPostingProgress=_newsPostingProgress;
@property(retain, nonatomic) FreshNewsCreateHeadView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UILabel *contentWarningLabel; // @synthesize contentWarningLabel=_contentWarningLabel;
@property(retain, nonatomic) UIView *contentWarningView; // @synthesize contentWarningView=_contentWarningView;
@property(retain, nonatomic) UIButton *rightBarButton; // @synthesize rightBarButton=_rightBarButton;
- (void).cxx_destruct;
- (void)updateBtnEdgeInsets;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)dealWithData:(id)arg1;
- (void)getFiledData:(_Bool)arg1;
- (void)listPickFinished:(id)arg1 withItemsDic:(id)arg2;
- (void)topicPickerControllerDidCancel:(id)arg1;
- (void)topicPickerController:(id)arg1 didFinishPickingTopic:(id)arg2;
- (void)clickField;
- (void)clickTopic;
- (void)keyboardWillBeHidden:(id)arg1;
- (unsigned long long)animationCurveOptionFromKeyboardFrameChangeNotification:(id)arg1;
- (void)keyboardWillShown:(id)arg1;
- (void)openScheme:(id)arg1;
- (void)hintClick:(id)arg1;
- (void)rightBarButtonPressed:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)composerHeaderViewSizeDidChange:(id)arg1;
- (void)WBALAssetPickerContextManagerCanceled:(id)arg1;
- (void)WBALAssetPickerContextManager:(id)arg1 finishedPickImageAttachments:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)placeholderForFreshNewsDesc;
- (id)placeholderForFreshNewsTitle;
- (void)showConfirmAlert;
- (void)presentAlertWithText:(id)arg1;
- (void)presentErrorViewWithError:(id)arg1;
- (void)dismissSelf;
- (void)dismissSelfAnimated:(_Bool)arg1;
- (void)scrollTableViewRectToVisible:(id)arg1;
- (void)updateFootView;
- (void)updateContentWarningLabel:(id)arg1;
- (void)_updateContentWarningLabelWithString:(id)arg1 maxLength:(long long)arg2;
- (void)updateCoverImageViewWithCurrentQuesion;
- (void)updateRightBarButtonState;
- (void)_updateDescCellHeightCacheWithCurrentFreshNews;
- (void)updateTableViewContentWithAnimationHandler:(CDUnknownBlockType)arg1;
- (void)setupHeaderViews;
- (void)_updateHeaderViewWithCurrentModel;
- (void)_setupTitleViewForHeaderView;
- (void)_setupCoverImageViewForHeaderView;
- (void)setupContentViews;
- (void)setupNavigationItem;
- (id)navigationTitle;
- (id)bottomLabelText;
- (void)backToNormal;
- (void)goToFreshNewsPosting;
- (id)coverImageCache;
- (void)setupFootView;
- (void)viewDidLoad;
- (void)_registerForKeyboardNotifications;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

