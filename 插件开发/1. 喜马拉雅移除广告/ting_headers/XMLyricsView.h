//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UILabel, UITableView, XMLyricControlView, XMSoundItem;

@interface XMLyricsView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _lyricsWithOutTime;
    _Bool _isBilingual;
    _Bool _autoScorll;
    XMSoundItem *_sound;
    NSArray *_lyricsModels;
    unsigned long long _loadState;
    unsigned long long _viewType;
    NSMutableArray *_shareLyrics;
    NSMutableArray *_shareStrings;
    NSString *_musicLyricUrl;
    UITableView *_lrcTableView;
    UILabel *_infoLabel;
    double _historyY;
    XMLyricControlView *_controlView;
}

@property(retain, nonatomic) XMLyricControlView *controlView; // @synthesize controlView=_controlView;
@property(nonatomic) double historyY; // @synthesize historyY=_historyY;
@property(nonatomic) _Bool autoScorll; // @synthesize autoScorll=_autoScorll;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UITableView *lrcTableView; // @synthesize lrcTableView=_lrcTableView;
@property(copy, nonatomic) NSString *musicLyricUrl; // @synthesize musicLyricUrl=_musicLyricUrl;
@property(retain, nonatomic) NSMutableArray *shareStrings; // @synthesize shareStrings=_shareStrings;
@property(retain, nonatomic) NSMutableArray *shareLyrics; // @synthesize shareLyrics=_shareLyrics;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) _Bool isBilingual; // @synthesize isBilingual=_isBilingual;
@property(nonatomic) _Bool lyricsWithOutTime; // @synthesize lyricsWithOutTime=_lyricsWithOutTime;
@property(nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
@property(retain, nonatomic) NSArray *lyricsModels; // @synthesize lyricsModels=_lyricsModels;
@property(retain, nonatomic) XMSoundItem *sound; // @synthesize sound=_sound;
- (void).cxx_destruct;
- (void)refreshLyricPositionWithTime:(double)arg1;
- (void)refreshLyricPosition;
- (void)updateShareLyricsDataSource;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setScrollState;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hideControl;
- (void)showControl;
- (void)controlPlayClick;
- (void)locationSelectIndex;
- (void)p_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

