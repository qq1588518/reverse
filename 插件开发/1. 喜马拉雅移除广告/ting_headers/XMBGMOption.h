//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, XMBackgroundMusicItem;

@interface XMBGMOption : UIView
{
    XMBackgroundMusicItem *_dataSourceItem;
    UIImageView *_icon;
    UILabel *_musicName;
    UIView *_line;
    UILabel *_musician;
}

@property(retain, nonatomic) UILabel *musician; // @synthesize musician=_musician;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *musicName; // @synthesize musicName=_musicName;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) XMBackgroundMusicItem *dataSourceItem; // @synthesize dataSourceItem=_dataSourceItem;
- (void).cxx_destruct;
- (void)setDataSource:(id)arg1;
- (id)init;

@end

