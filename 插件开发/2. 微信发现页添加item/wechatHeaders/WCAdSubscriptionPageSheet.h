//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPageSheet.h"

@class MMUILabel, MMWebImageView, NSDictionary, UIButton, WASubscriptionMessagePageSheetViewModel;
@protocol WCAdSubscriptionPageSheetDelegate;

@interface WCAdSubscriptionPageSheet : WAPageSheet
{
    id <WCAdSubscriptionPageSheetDelegate> _subscriptionDelegate;
    WASubscriptionMessagePageSheetViewModel *_viewModel;
    NSDictionary *_adContentInfo;
    UIButton *_closeBtn;
    UIButton *_submitBtn;
    MMUILabel *_title;
    MMUILabel *_content;
    MMWebImageView *_head;
    MMUILabel *_name;
}

@property(retain, nonatomic) MMUILabel *name; // @synthesize name=_name;
@property(retain, nonatomic) MMWebImageView *head; // @synthesize head=_head;
@property(retain, nonatomic) MMUILabel *content; // @synthesize content=_content;
@property(retain, nonatomic) MMUILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(readonly, nonatomic) NSDictionary *adContentInfo; // @synthesize adContentInfo=_adContentInfo;
@property(readonly, nonatomic) WASubscriptionMessagePageSheetViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WCAdSubscriptionPageSheetDelegate> subscriptionDelegate; // @synthesize subscriptionDelegate=_subscriptionDelegate;
- (void).cxx_destruct;
- (double)contentHeight;
- (void)onClickToSubmit;
- (void)onClickToClose;
- (id)genLabel:(id)arg1;
- (id)fetchFont:(id)arg1;
- (double)fetchLabelMaxWidth:(id)arg1;
- (id)fetchAdContent:(id)arg1;
- (void)layoutSubViews;
- (void)initSubViews;
- (id)initWithViewModel:(id)arg1 adContentInfo:(id)arg2;

@end

