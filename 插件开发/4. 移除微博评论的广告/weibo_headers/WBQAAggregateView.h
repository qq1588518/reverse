//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBQABaseView.h"

@class WBQuestionStateValueView;

@interface WBQAAggregateView : WBQABaseView
{
    double aggregateContentViewTopMargin;
    Class currentViewTypeClass;
    WBQuestionStateValueView *_questionStateValueView;
    WBQABaseView *_aggregateContentView;
}

@property(retain, nonatomic) WBQABaseView *aggregateContentView; // @synthesize aggregateContentView=_aggregateContentView;
@property(retain, nonatomic) WBQuestionStateValueView *questionStateValueView; // @synthesize questionStateValueView=_questionStateValueView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)refreshViewsOnArticleChanged:(id)arg1;
- (void)setQaArticle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

