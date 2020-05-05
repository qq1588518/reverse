//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton, XMBaseLayout, XMVipCBookCellLayout;
@protocol XMVipCBookCellDelegate;

@interface XMVipCBookCell : UICollectionViewCell
{
    id <XMVipCBookCellDelegate> _delegate;
    XMBaseLayout *_layout;
    XMVipCBookCellLayout *_myLayout;
    UIButton *_playButton;
    long long _status;
}

+ (id)layoutWithTrack:(id)arg1;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) XMVipCBookCellLayout *myLayout; // @synthesize myLayout=_myLayout;
@property(retain, nonatomic) XMBaseLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <XMVipCBookCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (void)endPlayLoading;
- (void)startPlayLoading;
- (void)playerStatusChange:(long long)arg1 andCurrentTrack:(id)arg2;
- (void)dealloc;

@end

