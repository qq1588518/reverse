//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

#import "WBVideoAlbumInfoViewDelegate-Protocol.h"

@class NSString, WBVideoAlbumInfoView, WBVideoAlbumInfoViewModel;
@protocol WBVideoAlbumListTableViewCellDelegate;

@interface WBVideoAlbumListTableViewCell : WBTableViewCell <WBVideoAlbumInfoViewDelegate>
{
    id <WBVideoAlbumListTableViewCellDelegate> _delegate;
    WBVideoAlbumInfoViewModel *_cellModel;
    WBVideoAlbumInfoView *_albumView;
}

@property(retain, nonatomic) WBVideoAlbumInfoView *albumView; // @synthesize albumView=_albumView;
@property(retain, nonatomic) WBVideoAlbumInfoViewModel *cellModel; // @synthesize cellModel=_cellModel;
@property(nonatomic) __weak id <WBVideoAlbumListTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)albumInfoView:(id)arg1 didPressMoreButton:(id)arg2;
- (void)updateWithAlbumModel:(id)arg1;
- (_Bool)usesCustomSelectedBackgroundView;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

