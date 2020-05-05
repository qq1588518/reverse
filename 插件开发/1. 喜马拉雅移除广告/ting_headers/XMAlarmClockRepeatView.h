//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UITableView, XMAlarmClockModel;

@interface XMAlarmClockRepeatView : UIView <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _showTypeBack;
    CDUnknownBlockType _setRingdaysActionBlock;
    UIView *_typeBackView;
    UIView *_weekdaysBackView;
    UITableView *_typeTableView;
    UITableView *_weekdaysTableView;
    UIButton *_commitButton;
    XMAlarmClockModel *_model;
    NSMutableArray *_days;
}

@property(nonatomic) _Bool showTypeBack; // @synthesize showTypeBack=_showTypeBack;
@property(retain, nonatomic) NSMutableArray *days; // @synthesize days=_days;
@property(retain, nonatomic) XMAlarmClockModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *commitButton; // @synthesize commitButton=_commitButton;
@property(retain, nonatomic) UITableView *weekdaysTableView; // @synthesize weekdaysTableView=_weekdaysTableView;
@property(retain, nonatomic) UITableView *typeTableView; // @synthesize typeTableView=_typeTableView;
@property(retain, nonatomic) UIView *weekdaysBackView; // @synthesize weekdaysBackView=_weekdaysBackView;
@property(retain, nonatomic) UIView *typeBackView; // @synthesize typeBackView=_typeBackView;
@property(copy, nonatomic) CDUnknownBlockType setRingdaysActionBlock; // @synthesize setRingdaysActionBlock=_setRingdaysActionBlock;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateWith:(id)arg1;
- (void)hide;
- (void)showIn:(id)arg1;
- (void)p_commitAction:(id)arg1;
- (void)p_popView:(id)arg1;
- (void)p_setUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

