//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIControl, UIImageView, WBMLVideoModalsContainerView;

@interface WBMLVideoSnapshotView : UIView
{
    WBMLVideoModalsContainerView *_containerView;
    UIImageView *_snapshotView;
    UIImageView *_closeView;
    UIControl *_backgroundControl;
}

@property(retain, nonatomic) UIControl *backgroundControl; // @synthesize backgroundControl=_backgroundControl;
@property(retain, nonatomic) UIImageView *closeView; // @synthesize closeView=_closeView;
@property(retain, nonatomic) UIImageView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(nonatomic) __weak WBMLVideoModalsContainerView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)dismiss;
- (void)setImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

