//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBStoryMediaPlayerViewType-Protocol.h"

@class NSString, NSTimer, UIImageView, UILabel;
@protocol WBStoryMediaPlayerViewDelegate;

@interface WBStoryExpireView : UIView <WBStoryMediaPlayerViewType>
{
    double _passedTime;
    struct {
        unsigned int playing:1;
        unsigned int firstFrameRendered:1;
    } _flags;
    UILabel *_label1;
    UILabel *_label2;
    UIImageView *_imageView;
    id <WBStoryMediaPlayerViewDelegate> _delegate;
    NSString *_title;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WBStoryMediaPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifiFirstFrameRendered;
- (void)configureWithItem:(id)arg1 delegate:(id)arg2;
- (id)item;
- (void)setAudioEnabled:(_Bool)arg1;
- (struct CGSize)mediaSize;
- (double)mediaDuration;
- (double)mediaCurrentTime;
- (void)seekToBeginning;
- (void)stop;
- (void)pause;
- (void)_play;
- (void)play;
- (void)prepareForReuse;
- (void)timerTrigger:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

