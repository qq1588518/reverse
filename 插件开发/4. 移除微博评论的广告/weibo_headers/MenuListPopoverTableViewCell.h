//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

@class WBCommonButtonView;

@interface MenuListPopoverTableViewCell : WBTableViewCell
{
    _Bool _isFirstCell;
    _Bool _isLastCell;
    WBCommonButtonView *_commonButtonView;
}

@property(retain, nonatomic) WBCommonButtonView *commonButtonView; // @synthesize commonButtonView=_commonButtonView;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
@property(nonatomic) _Bool isFirstCell; // @synthesize isFirstCell=_isFirstCell;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 buttonModel:(id)arg3;

@end

