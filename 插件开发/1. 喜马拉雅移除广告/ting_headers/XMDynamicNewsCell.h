//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, XMDynamicItem;

@interface XMDynamicNewsCell : XMTableViewCell <UIScrollViewDelegate>
{
    UIImageView *_coverBg;
    UIImageView *_coverImageView;
    UILabel *_albumTitle;
    UILabel *_subTitle;
    UILabel *_creatTime;
    UILabel *_updateLabel;
    XMDynamicItem *dynamicItem;
}

+ (double)heightForItem:(id)arg1;
+ (double)cellHeight;
@property(retain, nonatomic) XMDynamicItem *dynamicItem; // @synthesize dynamicItem;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)customInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

