//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, XMDubDotInfo;

@interface XMSelectVideoRoleCell : UITableViewCell
{
    XMDubDotInfo *_dotInfo;
    UILabel *_nameLabel;
    UILabel *_lyricsLabel;
}

@property(retain, nonatomic) UILabel *lyricsLabel; // @synthesize lyricsLabel=_lyricsLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) XMDubDotInfo *dotInfo; // @synthesize dotInfo=_dotInfo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)customInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

