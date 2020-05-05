//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

#import "MMGroupMemberRankTagViewDataSource-Protocol.h"
#import "MMGroupMemberRankTagViewDelegate-Protocol.h"
#import "WBMessageBubbleImageViewDelegate-Protocol.h"

@class MMGroupMemberRankTagView, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UIGestureRecognizer, UIImageView, UILabel, UIView, WBContactAvatarView, WBMessage, WBMessageBubbleImageView, WBMessageMoreButton, WBMessageTaskStateButton, WBTimelineAttributedTextView;
@protocol MMMessageCellDelegateT;

@interface MMMessageCell : WBTableViewCell <WBMessageBubbleImageViewDelegate, MMGroupMemberRankTagViewDataSource, MMGroupMemberRankTagViewDelegate>
{
    UIGestureRecognizer *_tagviewGesture;
    _Bool _showUserName;
    _Bool _accessibilityFocused;
    _Bool _showBiggerPadding;
    _Bool _isShowSelectedImg;
    _Bool _isMosaic;
    _Bool _isShowSearchAnimation;
    _Bool _isHighlightxed;
    int _memberTag;
    id <MMMessageCellDelegateT> _delegate;
    WBMessage *_message;
    UILabel *_readStatusLabel;
    UILabel *_userNameLabel;
    UIImageView *_groupTagView;
    WBMessageBubbleImageView *_bubbleImageView;
    WBContactAvatarView *_avatarView;
    WBMessageTaskStateButton *_taskStateButton;
    WBMessageMoreButton *_moreButton;
    UIActivityIndicatorView *_sendingActivity;
    id _moreButtonBlock;
    long long _messageState;
    WBTimelineAttributedTextView *_errorMessageView;
    UIView *_errorMessageBgView;
    UIImageView *_imgSelected;
    UIImageView *_imgMosaic;
    UIButton *_addOneButton;
    MMGroupMemberRankTagView *_memberRankTagView;
    NSMutableArray *_tagModelMArray;
}

+ (double)videoBubbleHeightWithMessage:(id)arg1;
+ (struct CGSize)computeVideoViewSize:(id)arg1;
+ (double)emotionBubbleHeightWithMessage:(id)arg1;
+ (double)fileBubbleHeightWithMessage:(id)arg1;
+ (long long)errorMessageHeight:(id)arg1;
+ (double)textBubbleHeightWithMessage:(id)arg1;
+ (struct CGSize)computeImageViewSize:(id)arg1;
+ (double)photoBubbleHeightWithMessage:(id)arg1;
+ (double)audioBubbleHeightWithMessage:(id)arg1;
+ (double)mapBubbleHeightWithMessage:(id)arg1;
+ (double)cardBubbleHeightWithMessage:(id)arg1;
+ (double)enveloppeCardBubbleHeightWithMessage:(id)arg1;
+ (long long)displayType:(id)arg1;
+ (double)recommendCardBubbleHeightWithMessage:(id)arg1;
+ (Class)parsePageCardClass:(id)arg1;
+ (double)bubbleHeightWithMessage:(id)arg1;
+ (double)heightForZanMessage:(id)arg1 showBiggerPadding:(_Bool)arg2;
+ (double)heightForPageInfoWithCommentMessage:(id)arg1 showBiggerPadding:(_Bool)arg2;
+ (double)heightForFeedInfoWithCommentMessage:(id)arg1 showBiggerPadding:(_Bool)arg2;
+ (struct CGSize)convertSize:(id)arg1;
+ (_Bool)needRemodifyTopPadding:(id)arg1;
+ (double)cellHeightForMessage:(id)arg1 showUserName:(_Bool)arg2 showsMoreButton:(_Bool)arg3 showBiggerPadding:(_Bool)arg4;
+ (double)cellHeightForMessage:(id)arg1;
+ (_Bool)shouldShowBigPadding:(id)arg1 lastMessageInSection:(id)arg2;
@property(retain, nonatomic) NSMutableArray *tagModelMArray; // @synthesize tagModelMArray=_tagModelMArray;
@property(retain, nonatomic) MMGroupMemberRankTagView *memberRankTagView; // @synthesize memberRankTagView=_memberRankTagView;
@property(retain, nonatomic) UIButton *addOneButton; // @synthesize addOneButton=_addOneButton;
@property(nonatomic) int memberTag; // @synthesize memberTag=_memberTag;
@property(retain, nonatomic) UIImageView *imgMosaic; // @synthesize imgMosaic=_imgMosaic;
@property(retain, nonatomic) UIImageView *imgSelected; // @synthesize imgSelected=_imgSelected;
@property(retain, nonatomic) UIView *errorMessageBgView; // @synthesize errorMessageBgView=_errorMessageBgView;
@property(retain, nonatomic) WBTimelineAttributedTextView *errorMessageView; // @synthesize errorMessageView=_errorMessageView;
@property(nonatomic) long long messageState; // @synthesize messageState=_messageState;
@property(nonatomic) _Bool isHighlightxed; // @synthesize isHighlightxed=_isHighlightxed;
@property(nonatomic) _Bool isShowSearchAnimation; // @synthesize isShowSearchAnimation=_isShowSearchAnimation;
@property(nonatomic) _Bool isMosaic; // @synthesize isMosaic=_isMosaic;
@property(nonatomic) _Bool isShowSelectedImg; // @synthesize isShowSelectedImg=_isShowSelectedImg;
@property(copy, nonatomic) id moreButtonBlock; // @synthesize moreButtonBlock=_moreButtonBlock;
@property(retain, nonatomic) UIActivityIndicatorView *sendingActivity; // @synthesize sendingActivity=_sendingActivity;
@property(nonatomic) _Bool showBiggerPadding; // @synthesize showBiggerPadding=_showBiggerPadding;
@property(nonatomic) _Bool accessibilityFocused; // @synthesize accessibilityFocused=_accessibilityFocused;
@property(retain, nonatomic) WBMessageMoreButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) WBMessageTaskStateButton *taskStateButton; // @synthesize taskStateButton=_taskStateButton;
@property(retain, nonatomic) WBContactAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) WBMessageBubbleImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(readonly, nonatomic) UIImageView *groupTagView; // @synthesize groupTagView=_groupTagView;
@property(readonly, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UILabel *readStatusLabel; // @synthesize readStatusLabel=_readStatusLabel;
@property(retain, nonatomic) WBMessage *message; // @synthesize message=_message;
@property(nonatomic) __weak id <MMMessageCellDelegateT> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showUserName; // @synthesize showUserName=_showUserName;
- (void).cxx_destruct;
- (void)didTapTagView:(id)arg1 model:(id)arg2;
- (void)didLayoutForTagView:(id)arg1;
- (id)tagModelsForTagView:(id)arg1;
- (void)accessibilityAppendButtonsToActionSheet:(id)arg1;
- (_Bool)accessibilityElementIsFocused;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)touchWBMessageBubbleImageView;
- (void)addOneButtonPressed:(id)arg1;
- (void)moreButtonClicked:(id)arg1;
- (void)avatarViewPressed:(id)arg1;
- (void)messageViewLongPressed:(id)arg1;
- (_Bool)point:(struct CGPoint)arg1 isInsideView:(id)arg2 withExtension:(double)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)isHitMessageViewSubview:(struct CGPoint)arg1;
- (_Bool)isTouchedView:(id)arg1 touches:(id)arg2;
- (void)layoutAddoneButton;
- (id)layoutReferenceView;
- (void)layoutSecretMessageViewsFrame;
- (void)layoutMessageStateView;
- (void)layoutErrorMessageView;
- (struct CGSize)layoutMessageContentView:(_Bool)arg1;
- (double)bubbleLeftPadding;
- (void)layoutBubbleImageView;
- (void)layoutMoreButton;
- (void)layoutTagView;
- (void)layoutTitleView;
- (void)layoutSelectedImageView;
- (void)layoutAvatarView;
- (void)layoutSubviews;
- (void)configMessageTaskStateView;
- (void)configMessageSendActivity;
- (void)refreshSecretMessageView;
- (void)refreshMessageViewAfterMessageStateChange;
- (void)configMessageStateView;
- (void)configErrorMessageView;
- (void)showHighlightedAnimation;
- (void)configBubbleImageView;
- (void)configTagViewWithStatus:(int)arg1;
- (void)adjustTitleView;
- (void)configTitleView;
- (void)configSelectedImageView;
- (void)configAvatarView;
- (void)tagViewGesture;
- (void)bindGroup:(id)arg1 andGroupMemberInfo:(id)arg2;
- (void)bindMessage:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (_Bool)usesCustomSelectedBackgroundView;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)errorMessageViewTapped;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

