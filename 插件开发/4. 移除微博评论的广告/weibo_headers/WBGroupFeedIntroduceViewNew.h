//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol WBGroupFeedIntroduceViewDelegateNew;

@interface WBGroupFeedIntroduceViewNew : UIView
{
    UIImageView *_groupFeedIntroduceMainView;
    UILabel *_textLabel;
    UIImageView *_groupFeedIntroduceImageView;
    UIButton *_tryButton;
    NSString *_groupOwnerName;
    id <WBGroupFeedIntroduceViewDelegateNew> _delegate;
}

@property(nonatomic) id <WBGroupFeedIntroduceViewDelegateNew> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *groupOwnerName; // @synthesize groupOwnerName=_groupOwnerName;
@property(retain, nonatomic) UIButton *tryButton; // @synthesize tryButton=_tryButton;
@property(retain, nonatomic) UIImageView *groupFeedIntroduceImageView; // @synthesize groupFeedIntroduceImageView=_groupFeedIntroduceImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *groupFeedIntroduceMainView; // @synthesize groupFeedIntroduceMainView=_groupFeedIntroduceMainView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onTryButtonClicked:(id)arg1;
- (void)reloadUIElements;
- (id)initWithFrame:(struct CGRect)arg1;

@end

