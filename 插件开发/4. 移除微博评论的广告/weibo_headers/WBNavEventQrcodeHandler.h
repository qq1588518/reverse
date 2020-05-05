//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FeedNavHandleProtocol-Protocol.h"
#import "SNPopoverWindowDismissDelegate-Protocol.h"
#import "WBSearchTypeMenuDelegate-Protocol.h"

@class NSArray, NSString, WBViewController;
@protocol FeedNavEventMangerProtocol, FeedNavMangerOwnerCtrProtocol;

@interface WBNavEventQrcodeHandler : NSObject <WBSearchTypeMenuDelegate, SNPopoverWindowDismissDelegate, FeedNavHandleProtocol>
{
    WBViewController<FeedNavMangerOwnerCtrProtocol> *baseHomeVC;
    id <FeedNavEventMangerProtocol> _navManager;
    NSArray *_addonArray;
}

@property(copy, nonatomic) NSArray *addonArray; // @synthesize addonArray=_addonArray;
@property(nonatomic) __weak id <FeedNavEventMangerProtocol> navManager; // @synthesize navManager=_navManager;
- (void).cxx_destruct;
- (id)createSearchTypeWithAddon:(id)arg1 needSeparator:(_Bool)arg2;
- (id)createSearchTypeWithComposeType:(unsigned long long)arg1 description:(id)arg2 image:(id)arg3 needSeparator:(_Bool)arg4;
- (void)showComposeOptionsMenu;
- (void)enterQRCodeViewController;
- (void)searchTypeMenu:(id)arg1 didSelectType:(id)arg2;
- (void)searchTypeMenu:(id)arg1 didSelectTypeAtIndex:(long long)arg2;
- (void)accessibilityShowOptionsActionSheetWithOptions:(id)arg1;
- (void)showOptionsMenu;
- (void)composeButtonPressed:(id)arg1;
- (void)searchButtonPressed:(id)arg1;
- (void)qrcodeButtonPressed;
- (_Bool)handleEventsAlone:(id)arg1;
- (_Bool)responseEvents:(id)arg1;
- (CDStruct_0a4d7299)buttonItemConfig;
- (id)buttonItemObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

