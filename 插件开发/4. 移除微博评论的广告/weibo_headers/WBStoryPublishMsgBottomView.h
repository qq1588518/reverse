//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBStoryPublishBottomViewTypeProtocol-Protocol.h"

@class NSString, UIButton, WBStoryPublishSendButton;
@protocol WBStoryPublishBottomViewDelegate;

@interface WBStoryPublishMsgBottomView : UIView <WBStoryPublishBottomViewTypeProtocol>
{
    id <WBStoryPublishBottomViewDelegate> _delegate;
    UIButton *_saveButton;
    WBStoryPublishSendButton *_sendButton;
}

@property(retain, nonatomic) WBStoryPublishSendButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) __weak id <WBStoryPublishBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)saveButtonClick:(id)arg1;
- (void)sendButtonClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

