//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UITapGestureRecognizer, XMLiveRoomDressModel, XMWebImageView;

@interface XMLiveUsedMedalCell : UICollectionViewCell
{
    XMLiveRoomDressModel *_dress;
    CDUnknownBlockType _deleteDressBlock;
    XMWebImageView *_medalImgView;
    UIImageView *_removeImgView;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIImageView *removeImgView; // @synthesize removeImgView=_removeImgView;
@property(retain, nonatomic) XMWebImageView *medalImgView; // @synthesize medalImgView=_medalImgView;
@property(copy, nonatomic) CDUnknownBlockType deleteDressBlock; // @synthesize deleteDressBlock=_deleteDressBlock;
@property(retain, nonatomic) XMLiveRoomDressModel *dress; // @synthesize dress=_dress;
- (void)onClickBtn:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

