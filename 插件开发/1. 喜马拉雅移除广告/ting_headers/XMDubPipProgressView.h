//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, XMDubPipCircleView;

@interface XMDubPipProgressView : UIView
{
    UILabel *_bizLabel;
    double _progress;
    UIView *_contentView;
    XMDubPipCircleView *_progressView;
}

@property(retain, nonatomic) XMDubPipCircleView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UILabel *bizLabel; // @synthesize bizLabel=_bizLabel;
- (void).cxx_destruct;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

