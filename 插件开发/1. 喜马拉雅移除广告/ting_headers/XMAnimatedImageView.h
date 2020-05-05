//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FLAnimatedImageView.h"

@class UITapGestureRecognizer;

@interface XMAnimatedImageView : FLAnimatedImageView
{
    id _target;
    SEL _eventSel;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)setImageWithURL:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)dealloc;
- (void)didInitialize;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

