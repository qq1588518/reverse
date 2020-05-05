//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, XMBBSCreateToolBar;

@protocol XMBBSCreateToolBarDelegate <NSObject>

@optional
- (void)toolBarClickDelete:(XMBBSCreateToolBar *)arg1;
- (void)toolBar:(XMBBSCreateToolBar *)arg1 didRecordToFile:(NSString *)arg2 duration:(double)arg3;
- (void)toolBar:(XMBBSCreateToolBar *)arg1 statusDidChange:(long long)arg2;
- (void)toolBarClickListenlistButton:(XMBBSCreateToolBar *)arg1;
- (void)toolBarClickTopicButton:(XMBBSCreateToolBar *)arg1;
- (void)toolBarClickVideoButton:(XMBBSCreateToolBar *)arg1;
- (void)toolBarClickVoteButton:(XMBBSCreateToolBar *)arg1;
- (void)toolBarClickRecordButton:(XMBBSCreateToolBar *)arg1;
- (void)toolBarClickAlbumButton:(XMBBSCreateToolBar *)arg1;
- (void)toolBarClickTrackButton:(XMBBSCreateToolBar *)arg1;
- (void)toolBarClickLinkButton:(XMBBSCreateToolBar *)arg1;
- (void)toolBarClickPictureButton:(XMBBSCreateToolBar *)arg1;
- (void)toolBarContentSizeDidChange:(XMBBSCreateToolBar *)arg1;
@end

