//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class XMActionSheet;

@interface XMActionSheetViewController : UIViewController
{
    XMActionSheet *_actionSheet;
}

@property(retain, nonatomic) XMActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)presentActionSheetAnimated:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

