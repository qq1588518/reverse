//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

@class WBSTVideoCelloctionCardItem, WBStatus;

@interface WBSTSmallVideoCelloctionCell : WBTableViewCell
{
    WBStatus *_cardStatus;
    WBSTVideoCelloctionCardItem *_cardItem;
}

@property(retain, nonatomic) WBSTVideoCelloctionCardItem *cardItem; // @synthesize cardItem=_cardItem;
@property(retain, nonatomic) WBStatus *cardStatus; // @synthesize cardStatus=_cardStatus;
- (void).cxx_destruct;
- (id)viewWrappers;
- (_Bool)usesCustomSelectedBackgroundView;
- (void)resetCardStatus:(id)arg1 storeData:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 userInfo:(id)arg3;

@end

