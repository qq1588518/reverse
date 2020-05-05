//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MMLoadImagePieProgressView, UIImageView, UILabel;

@interface MMVideoMessageButton : UIButton
{
    _Bool _uploading;
    _Bool _sentByMe;
    UIImageView *_progressBgView;
    MMLoadImagePieProgressView *_progressView;
    UIImageView *_playView;
    UIImageView *_bottomView;
    UILabel *_timeLabel;
}

@property(nonatomic) _Bool sentByMe; // @synthesize sentByMe=_sentByMe;
@property(nonatomic, getter=isUploading) _Bool uploading; // @synthesize uploading=_uploading;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *playView; // @synthesize playView=_playView;
@property(retain, nonatomic) MMLoadImagePieProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *progressBgView; // @synthesize progressBgView=_progressBgView;
- (void).cxx_destruct;
- (void)showProgress:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

