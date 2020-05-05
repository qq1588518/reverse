//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "WCBizTipViewDelegate-Protocol.h"
#import "WCPayCardNumberScanDelegate-Protocol.h"

@class NSString, RichTextView, UIButton, UILabel, WCBaseControlLogic, WCBaseTextFieldItem, WCBizInfoGroup, WCBizTipView, WCPayTenpaySecureCtrlItem;
@protocol WCPayFillCardNumberViewControllerDelegate;

@interface WCPayFillCardNumberViewController : WCPayBaseViewController <WCPayCardNumberScanDelegate, MMWebViewDelegate, ILinkEventExt, WCBizTipViewDelegate>
{
    UIButton *m_footerButton;
    WCBizInfoGroup *m_group;
    WCPayTenpaySecureCtrlItem *m_textFieldItem;
    WCBaseTextFieldItem *m_textAutoFilledCardNumberItem;
    RichTextView *richTextView;
    id <WCPayFillCardNumberViewControllerDelegate> m_delegate;
    WCBizTipView *introView;
    _Bool m_bAutoFilledCardNumber;
    _Bool m_bShowedFavorInfo;
    NSString *m_headerTitle;
    UILabel *autoFilledNumberLabel;
    NSString *m_viewTitle;
    RichTextView *realnameRichTextView;
    UIButton *_scanButton;
    WCBaseControlLogic *_fromControlLogic;
}

@property(retain, nonatomic) WCBaseControlLogic *fromControlLogic; // @synthesize fromControlLogic=_fromControlLogic;
@property(readonly, nonatomic) _Bool m_bAutoFilledCardNumber; // @synthesize m_bAutoFilledCardNumber;
- (void).cxx_destruct;
- (unsigned int)regFlag;
- (void)webViewReturn:(id)arg1;
- (void)changeRealName;
- (void)footerTipAction:(id)arg1;
- (unsigned int)onWCPayCardNumberScanViewControllerSource;
- (void)didFindCardNumber:(id)arg1 cardImage:(id)arg2 scanResult:(id)arg3;
- (void)setAutoFilledCardNumber;
- (void)OnWCBizTipViewClosed;
- (void)showDetailTip;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)stopLogicLoading;
- (void)startLogicLoading;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)OnClearAutoFilledCardNumber;
- (void)onNext;
- (void)scanAction:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)makeInfoCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)reloadTableView;
- (id)getFirstUserTipViewInIOS7;
- (id)getFirstUserTipView;
- (void)initNavigationBar;
- (void)FillCardNumberCancel;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)setShowedFavorInfo;
- (void)initFooterView;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)setHeaderTip:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

