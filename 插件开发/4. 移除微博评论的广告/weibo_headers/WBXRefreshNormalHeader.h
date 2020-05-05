//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBXRefreshHeader.h"

@class NSMutableDictionary, UIActivityIndicatorView, UIImageView, UILabel;

@interface WBXRefreshNormalHeader : WBXRefreshHeader
{
    UILabel *_stateLabel;
    UIImageView *_arrowView;
    double _labelLeftInset;
    long long _activityIndicatorViewStyle;
    UIActivityIndicatorView *_loadingView;
    NSMutableDictionary *_stateTitles;
}

@property(retain, nonatomic) NSMutableDictionary *stateTitles; // @synthesize stateTitles=_stateTitles;
@property(nonatomic) __weak UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) long long activityIndicatorViewStyle; // @synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle;
@property(nonatomic) double labelLeftInset; // @synthesize labelLeftInset=_labelLeftInset;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIImageView *arrowView;
- (void)setState:(long long)arg1;
- (void)placeSubviews;
- (void)prepare;
- (void)setTitle:(id)arg1 forState:(long long)arg2;
@property(readonly, nonatomic) __weak UILabel *stateLabel;

@end

