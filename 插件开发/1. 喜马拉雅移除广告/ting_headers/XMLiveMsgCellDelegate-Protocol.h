//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UICollectionViewCell;
@protocol XMLiveMsgCellProtocol;

@protocol XMLiveMsgCellDelegate <NSObject>

@optional
- (void)longPressAtUserNameForCell:(UICollectionViewCell<XMLiveMsgCellProtocol> *)arg1;
- (void)longPressedOnAvatorForCell:(UICollectionViewCell<XMLiveMsgCellProtocol> *)arg1;
- (void)clickSendFailBtnForCell:(UICollectionViewCell<XMLiveMsgCellProtocol> *)arg1;
- (void)tapInContentForCell:(UICollectionViewCell<XMLiveMsgCellProtocol> *)arg1;
- (void)tapOutContentForCell:(UICollectionViewCell<XMLiveMsgCellProtocol> *)arg1;
- (void)clickAtAvatorForCell:(UICollectionViewCell<XMLiveMsgCellProtocol> *)arg1;
- (void)didSelectCell:(UICollectionViewCell<XMLiveMsgCellProtocol> *)arg1;
@end

