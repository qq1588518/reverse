//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStartGroupChatCell.h"

@class UIButton;

@interface WBContactsFansGroupTableViewCell : WBStartGroupChatCell
{
    CDUnknownBlockType _clickBlock;
    UIButton *_lookUpButton;
}

@property(retain, nonatomic) UIButton *lookUpButton; // @synthesize lookUpButton=_lookUpButton;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void).cxx_destruct;
- (void)onLookUp:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

