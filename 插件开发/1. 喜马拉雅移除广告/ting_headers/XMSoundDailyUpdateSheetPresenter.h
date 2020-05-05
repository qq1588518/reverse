//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMActionSheetViewDelegate-Protocol.h"

@class NSString, UIViewController, XMActionSheetView, XMSoundItem;

@interface XMSoundDailyUpdateSheetPresenter : NSObject <XMActionSheetViewDelegate>
{
    XMSoundItem *_track;
    unsigned long long _index;
    UIViewController *_controller;
    XMActionSheetView *_sheetView;
}

@property(retain, nonatomic) XMActionSheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)actionSheetDismiss:(id)arg1;
- (void)showWithTrack:(id)arg1 index:(unsigned long long)arg2;
- (void)p_reportTrack;
- (void)p_pushAlbumViewControllerWithItem:(id)arg1;
- (void)p_shareTrack;
- (void)p_downloadTrack;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

