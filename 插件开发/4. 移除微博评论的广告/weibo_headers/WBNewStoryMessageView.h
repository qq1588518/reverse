//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"
#import "WBNewEmoticonInputViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, WBGrowingTextView;
@protocol WBNewStoryMessageViewDelegate;

@interface WBNewStoryMessageView : UIView <UITextViewDelegate, WBNewEmoticonInputViewDelegate>
{
    CDStruct_e00143ed _flags;
    _Bool _pressingEmojiButton;
    WBGrowingTextView *_textView;
    id <WBNewStoryMessageViewDelegate> _messageViewDelegate;
    UILabel *_characterCountLabel;
    long long _maxCharacterCount;
    UIView *_ovalBgView;
    UILabel *_placeHolderLabel;
    UIImageView *_characterCountLabelBackGroundView;
    UIButton *_emojiToggleBtn;
}

@property(retain, nonatomic) UIButton *emojiToggleBtn; // @synthesize emojiToggleBtn=_emojiToggleBtn;
@property(retain, nonatomic) UIImageView *characterCountLabelBackGroundView; // @synthesize characterCountLabelBackGroundView=_characterCountLabelBackGroundView;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(retain, nonatomic) UIView *ovalBgView; // @synthesize ovalBgView=_ovalBgView;
@property(nonatomic) _Bool pressingEmojiButton; // @synthesize pressingEmojiButton=_pressingEmojiButton;
@property(nonatomic) long long maxCharacterCount; // @synthesize maxCharacterCount=_maxCharacterCount;
@property(retain, nonatomic) UILabel *characterCountLabel; // @synthesize characterCountLabel=_characterCountLabel;
@property(nonatomic) __weak id <WBNewStoryMessageViewDelegate> messageViewDelegate; // @synthesize messageViewDelegate=_messageViewDelegate;
@property(retain, nonatomic) WBGrowingTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)refreshUIElements;
- (void)emoticonInputViewDidSelectReturn:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)emojiBtnPressed:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

