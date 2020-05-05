//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface WBMLVideoResumeLiveTipView : UIView
{
    _Bool _tipViewVisiable;
    UIView *_bgView;
    UIView *_tipView;
    UIImageView *_resumeLiveVideoImage;
    UILabel *_tipLabel;
    UILabel *_messageLabel;
    UIButton *_cancelButton;
    UIButton *_okButton;
    CDUnknownBlockType _okBlock;
    CDUnknownBlockType _cancelBlock;
}

+ (id)showResumeLiveVideoView:(id)arg1 okBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool tipViewVisiable; // @synthesize tipViewVisiable=_tipViewVisiable;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType okBlock; // @synthesize okBlock=_okBlock;
@property(nonatomic) __weak UIButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak UIImageView *resumeLiveVideoImage; // @synthesize resumeLiveVideoImage=_resumeLiveVideoImage;
@property(nonatomic) __weak UIView *tipView; // @synthesize tipView=_tipView;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)cancel;
- (void)ok;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

