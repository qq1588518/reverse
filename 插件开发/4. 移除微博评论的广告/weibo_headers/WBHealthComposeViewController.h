//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStatusComposeViewController.h"

@class NSDictionary;

@interface WBHealthComposeViewController : WBStatusComposeViewController
{
    NSDictionary *_customStickerData;
}

@property(retain, nonatomic) NSDictionary *customStickerData; // @synthesize customStickerData=_customStickerData;
- (void).cxx_destruct;
- (unsigned long long)characterCount;
- (_Bool)showsToolBar;
- (_Bool)showsStatusBar;
- (unsigned long long)composeToolbarType;
- (void)setDefaultTextForStickers;
- (void)moveStickersToJob:(id)arg1;
- (void)viewDidLoad;
- (id)moduleID;
- (void)dealloc;
- (void)initComposeDatas;

@end

