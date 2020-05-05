//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMDraggableCardView.h"

@class XMDSICardCommentView, XMDSICardCoverView, XMDSICardSentenceView;

@interface XMDailySignInCardView : XMDraggableCardView
{
    long long _dailySignId;
    unsigned long long _cardType;
    XMDSICardCoverView *_coverView;
    XMDSICardSentenceView *_sentenceView;
    XMDSICardCommentView *_commentView;
}

@property(retain, nonatomic) XMDSICardCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) XMDSICardSentenceView *sentenceView; // @synthesize sentenceView=_sentenceView;
@property(retain, nonatomic) XMDSICardCoverView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) unsigned long long cardType; // @synthesize cardType=_cardType;
@property(nonatomic) long long dailySignId; // @synthesize dailySignId=_dailySignId;
- (void).cxx_destruct;
- (void)installData:(id)arg1;
- (void)dc_layoutSubviews;
- (void)loadComponent;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

