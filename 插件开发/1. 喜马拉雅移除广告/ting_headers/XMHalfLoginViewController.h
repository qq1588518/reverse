//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIControl, XMAirLoginView;

@interface XMHalfLoginViewController : UIViewController
{
    _Bool _firstIn;
    UIControl *_bgView;
    XMAirLoginView *_loginView;
}

@property(nonatomic) _Bool firstIn; // @synthesize firstIn=_firstIn;
@property(retain, nonatomic) XMAirLoginView *loginView; // @synthesize loginView=_loginView;
@property(retain, nonatomic) UIControl *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)cancelLogin;
- (void)p_userClose;
- (void)viewDidLoad;

@end

