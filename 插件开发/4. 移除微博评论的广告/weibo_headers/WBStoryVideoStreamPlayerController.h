//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStoryVideoPlayerController.h"

@class WBStoryVideoStreamBusinessPluginViewDatasource;

@interface WBStoryVideoStreamPlayerController : WBStoryVideoPlayerController
{
    WBStoryVideoStreamBusinessPluginViewDatasource *_businessDataSource;
}

+ (Class)fullScreenViewControllerClass;
@property(retain, nonatomic) WBStoryVideoStreamBusinessPluginViewDatasource *businessDataSource; // @synthesize businessDataSource=_businessDataSource;
- (void).cxx_destruct;
- (void)notifiDidSetupOwnerShip;
- (void)notifiWillReleaseOwnerShip;
- (void)setOwner:(id)arg1;
- (_Bool)inlinePlaying;
- (_Bool)muteWhenPlaying;
- (_Bool)shouldFixStallState;
- (_Bool)shouldAddPlugin:(id)arg1;
- (id)init;

@end

