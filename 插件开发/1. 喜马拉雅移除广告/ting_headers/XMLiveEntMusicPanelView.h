//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveEntCentralBasePanelView.h"

@class XMLiveEntMusicLyricsStageView, XMLiveEntMusicMicStageView;
@protocol XMLiveEntLyricsStageViewDelegate;

@interface XMLiveEntMusicPanelView : XMLiveEntCentralBasePanelView
{
    XMLiveEntMusicMicStageView *_micStageView;
    XMLiveEntMusicLyricsStageView *_lyricsStageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMLiveEntMusicLyricsStageView *lyricsStageView; // @synthesize lyricsStageView=_lyricsStageView;
@property(retain, nonatomic) XMLiveEntMusicMicStageView *micStageView; // @synthesize micStageView=_micStageView;
- (_Bool)isInMicEmoticonAnimation;
- (void)synchronizeSideInfo:(id)arg1;
- (void)synchronizeInfoWithData:(id)arg1;
- (void)synchronizeBattleCountDown:(long long)arg1;
- (void)dismiss;
@property(nonatomic) __weak id <XMLiveEntLyricsStageViewDelegate> delegate; // @dynamic delegate;
- (void)addCustomView;
- (id)init;

@end

