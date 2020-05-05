//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView;
@protocol XMNoDataTableViewCellDelegate;

@interface XMNoDataTableViewCell : UITableViewCell
{
    _Bool _isActionButtonStyleForSoundFeed;
    id <XMNoDataTableViewCellDelegate> _delegate;
    UIButton *_actionButton;
    UIImageView *_noDataImageView;
    double _imageTopSpace;
    double _actionTopSpace;
    double _loginTopSpace;
    UIButton *_loginButton;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
+ (double)getCellHeight;
@property(nonatomic) _Bool isActionButtonStyleForSoundFeed; // @synthesize isActionButtonStyleForSoundFeed=_isActionButtonStyleForSoundFeed;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(nonatomic) double loginTopSpace; // @synthesize loginTopSpace=_loginTopSpace;
@property(nonatomic) double actionTopSpace; // @synthesize actionTopSpace=_actionTopSpace;
@property(nonatomic) double imageTopSpace; // @synthesize imageTopSpace=_imageTopSpace;
@property(retain, nonatomic) UIImageView *noDataImageView; // @synthesize noDataImageView=_noDataImageView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak id <XMNoDataTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)updateLoginButtonForSoundFeed;
- (void)showLoginButton:(_Bool)arg1;
- (void)onLoginButtonClicked;
- (double)getDefaultImageTopSpce;
- (void)setNoDataLoginButtonTopSpace:(double)arg1;
- (void)setNoDataActionButtonTopSpace:(double)arg1;
- (void)setNoDataImageTopSpace:(double)arg1;
- (void)onActionButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)setButtonStyleForSoundFeed;
- (void)setButtonColor:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setButtonImage:(id)arg1;
- (void)setNoDataImage:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

