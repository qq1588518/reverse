//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface GDTMaskViewController : UIViewController
{
    _Bool _isPortrait;
    _Bool _blankViewClickable;
    UIView *_contentView;
    CDUnknownBlockType _blankViewClickedCallback;
}

@property(nonatomic) _Bool blankViewClickable; // @synthesize blankViewClickable=_blankViewClickable;
@property(nonatomic) _Bool isPortrait; // @synthesize isPortrait=_isPortrait;
@property(copy, nonatomic) CDUnknownBlockType blankViewClickedCallback; // @synthesize blankViewClickedCallback=_blankViewClickedCallback;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (void)rotateForIOS8:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateUI;
- (void)blankViewTapped;
- (void)addGestureForClickingBlankView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

