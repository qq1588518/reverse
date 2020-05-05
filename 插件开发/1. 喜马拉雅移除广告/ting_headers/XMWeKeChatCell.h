//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKChatCell.h"

@class UIButton, UILabel, WKChatLayouter, WKChatStatusButton, XMWeKeMessage;

@interface XMWeKeChatCell : WKChatCell
{
    WKChatLayouter *_layouter;
    _Bool _hasInitialized;
    XMWeKeMessage *_message;
    UIButton *_headButton;
    UILabel *_titleLabel;
    UILabel *_roleLabel;
    WKChatStatusButton *_statusButton;
}

@property(retain, nonatomic) WKChatStatusButton *statusButton; // @synthesize statusButton=_statusButton;
@property(retain, nonatomic) UILabel *roleLabel; // @synthesize roleLabel=_roleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *headButton; // @synthesize headButton=_headButton;
@property(retain, nonatomic) XMWeKeMessage *message; // @synthesize message=_message;
@property(nonatomic) _Bool hasInitialized; // @synthesize hasInitialized=_hasInitialized;
- (void).cxx_destruct;
@property(retain, nonatomic) WKChatLayouter *layouter; // @dynamic layouter;
- (void)updateStatusButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

