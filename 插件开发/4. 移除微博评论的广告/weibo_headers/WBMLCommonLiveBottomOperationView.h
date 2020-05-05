//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBMLCommonLiveAttitudePanelViewDelegate-Protocol.h"

@class CALayer, NSArray, NSString, UIButton, UILabel, UIScrollView, WBMLCommonLiveAttitudePanelView;
@protocol WBMLCommonLiveBottomOperationViewDelegate;

@interface WBMLCommonLiveBottomOperationView : UIView <WBMLCommonLiveAttitudePanelViewDelegate>
{
    _Bool _allowComment;
    NSArray *_attitudes;
    id <WBMLCommonLiveBottomOperationViewDelegate> _delegate;
    unsigned long long _viewType;
    UIScrollView *_scrollView;
    CALayer *_lineLayer;
    UIButton *_shareButton;
    UIButton *_commentBtn;
    UILabel *_commentTextLabel;
    UIButton *_emojiBtn;
    UIButton *_likeButton;
    WBMLCommonLiveAttitudePanelView *_attitudePanel;
}

@property(retain, nonatomic) WBMLCommonLiveAttitudePanelView *attitudePanel; // @synthesize attitudePanel=_attitudePanel;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIButton *emojiBtn; // @synthesize emojiBtn=_emojiBtn;
@property(retain, nonatomic) UILabel *commentTextLabel; // @synthesize commentTextLabel=_commentTextLabel;
@property(retain, nonatomic) UIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) _Bool allowComment; // @synthesize allowComment=_allowComment;
@property(nonatomic) __weak id <WBMLCommonLiveBottomOperationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *attitudes; // @synthesize attitudes=_attitudes;
- (void).cxx_destruct;
- (void)attitudePanelView:(id)arg1 didSelectAttitude:(unsigned long long)arg2;
- (void)tapBtn:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

