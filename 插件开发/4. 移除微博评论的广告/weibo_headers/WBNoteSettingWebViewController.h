//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTopNavigationWebViewController.h"

@protocol WBNoteSettingWebViewControllerDelegate;

@interface WBNoteSettingWebViewController : WBTopNavigationWebViewController
{
    _Bool _isPaySetting;
    _Bool _isRewardSetting;
    id <WBNoteSettingWebViewControllerDelegate> _delegate;
}

@property(nonatomic) _Bool isRewardSetting; // @synthesize isRewardSetting=_isRewardSetting;
@property(nonatomic) _Bool isPaySetting; // @synthesize isPaySetting=_isPaySetting;
@property(nonatomic) __weak id <WBNoteSettingWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;

@end

