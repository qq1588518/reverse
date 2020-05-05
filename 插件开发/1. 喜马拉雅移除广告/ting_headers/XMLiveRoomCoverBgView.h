//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLivePageFragment.h"

#import "XMLiveSilentPlayerViewDelegate-Protocol.h"

@class NSString, UIView, XMLiveSilentPlayerView, XMNDownloader, XMWebImageView;

@interface XMLiveRoomCoverBgView : XMLivePageFragment <XMLiveSilentPlayerViewDelegate>
{
    UIView *_interimBgView;
    XMLiveSilentPlayerView *_videoPlayer;
    XMWebImageView *_imagePlayer;
    XMNDownloader *_downloader;
    unsigned long long _playerStatus;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long playerStatus; // @synthesize playerStatus=_playerStatus;
@property(retain, nonatomic) XMNDownloader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) XMWebImageView *imagePlayer; // @synthesize imagePlayer=_imagePlayer;
@property(retain, nonatomic) XMLiveSilentPlayerView *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) UIView *interimBgView; // @synthesize interimBgView=_interimBgView;
- (void)cacheResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)silentPlayerStatusDidChange:(unsigned long long)arg1;
- (void)dismiss;
- (void)updateRoomBackgroundWithUrl:(id)arg1;
- (void)updateRoomBackgroundWithImage:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)addNotify;
- (void)baseInit;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

