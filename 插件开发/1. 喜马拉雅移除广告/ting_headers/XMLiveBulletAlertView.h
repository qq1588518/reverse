//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveBaseCustomAlert.h"

@class UIButton, YYLabel;

@interface XMLiveBulletAlertView : XMLiveBaseCustomAlert
{
    unsigned long long _viewAction;
    YYLabel *_noticeLabel;
    UIButton *_closeBtn;
    UIButton *_actionBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) YYLabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(nonatomic) unsigned long long viewAction; // @synthesize viewAction=_viewAction;
- (void)showAlert;
- (void)actionDidClick;
- (void)closeDidClick;
- (void)addSubViewConstrants;
- (void)addCustomViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

