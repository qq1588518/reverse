//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface TBLiveAnchorResponseView : UIView
{
    UIButton *_targetButton;
    UIView *_backView;
    UILabel *_contentLabel;
    NSString *_targetUrl;
    NSString *_targetType;
}

@property(copy, nonatomic) NSString *targetType; // @synthesize targetType=_targetType;
@property(copy, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIButton *targetButton; // @synthesize targetButton=_targetButton;
- (void).cxx_destruct;
- (void)onTapButton:(id)arg1;
- (void)refreshWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

