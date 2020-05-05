//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIControl, UILabel, WBContactAvatarView, WBUser;
@protocol WBPageInterestCardUserViewProtocol;

@interface WBPageInterestCardUserView : UIView
{
    WBContactAvatarView *_avatarView;
    UILabel *_nameLabel;
    WBUser *_user;
    UIControl *_pressedControll;
    id <WBPageInterestCardUserViewProtocol> _delegate;
}

@property(nonatomic) __weak id <WBPageInterestCardUserViewProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIControl *pressedControll; // @synthesize pressedControll=_pressedControll;
@property(retain, nonatomic) WBUser *user; // @synthesize user=_user;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WBContactAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)avatarPressed;
- (void)layoutSubviews;
- (void)reloadUIElements;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

