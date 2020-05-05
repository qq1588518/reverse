//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

#import "WBCommonButtonViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIImageView, UILabel, WBCommonButtonCard16View, WBContentImageView;

@interface WBPageSquareDoubleButtonView : WBPageCardViewBase <WBCommonButtonViewDelegate>
{
    NSArray *groupsArray;
    UIButton *leftButton_Background_Button;
    WBContentImageView *leftButton_Icon_ImageView;
    UILabel *leftButton_Label;
    UIButton *rightButton_Background_Button;
    WBContentImageView *rightButton_Icon_ImageView;
    UILabel *rightButton_Label;
    UIImageView *_leftButton_Background_ImageView;
    UIImageView *_rightButton_Background_ImageView;
    WBCommonButtonCard16View *leftButton;
    WBCommonButtonCard16View *rightButton;
    UIImageView *_leftButton_unreadIndicator;
    UIImageView *_rightButton_unreadIndicator;
    UIImageView *_separatorLine;
    long long _cardStyle;
}

+ (_Bool)allowBubble;
+ (double)heightOfDataObject:(id)arg1;
@property(nonatomic) long long cardStyle; // @synthesize cardStyle=_cardStyle;
@property(retain, nonatomic) UIImageView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIImageView *rightButton_unreadIndicator; // @synthesize rightButton_unreadIndicator=_rightButton_unreadIndicator;
@property(retain, nonatomic) UIImageView *leftButton_unreadIndicator; // @synthesize leftButton_unreadIndicator=_leftButton_unreadIndicator;
@property(retain, nonatomic) WBCommonButtonCard16View *rightButton; // @synthesize rightButton;
@property(retain, nonatomic) WBCommonButtonCard16View *leftButton; // @synthesize leftButton;
@property(retain, nonatomic) UIImageView *rightButton_Background_ImageView; // @synthesize rightButton_Background_ImageView=_rightButton_Background_ImageView;
@property(retain, nonatomic) UIImageView *leftButton_Background_ImageView; // @synthesize leftButton_Background_ImageView=_leftButton_Background_ImageView;
@property(retain, nonatomic) UILabel *rightButton_Label; // @synthesize rightButton_Label;
@property(retain, nonatomic) WBContentImageView *rightButton_Icon_ImageView; // @synthesize rightButton_Icon_ImageView;
@property(retain, nonatomic) UIButton *rightButton_Background_Button; // @synthesize rightButton_Background_Button;
@property(retain, nonatomic) UILabel *leftButton_Label; // @synthesize leftButton_Label;
@property(retain, nonatomic) WBContentImageView *leftButton_Icon_ImageView; // @synthesize leftButton_Icon_ImageView;
@property(retain, nonatomic) UIButton *leftButton_Background_Button; // @synthesize leftButton_Background_Button;
- (void).cxx_destruct;
- (void)rightButtonClick;
- (void)leftButtonClick;
- (_Bool)commonButtonView:(id)arg1 handleCommonButtonPressedWithModel:(id)arg2;
- (void)commonButtonView:(id)arg1 handleCommonButtonModelMayBeChanged:(id)arg2;
- (void)reloadUnreadStates;
- (void)setPageCard:(id)arg1;
- (void)hideLocalRightButtons;
- (void)hideLocalLeftButtons;
- (void)reloadRightUIElements;
- (void)reloadLeftUIElements;
- (void)reloadUIElements;
- (void)resetSubviewRects;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

