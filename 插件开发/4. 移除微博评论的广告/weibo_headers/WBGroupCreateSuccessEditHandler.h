//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBGroupCreateSuccessViewController;

@interface WBGroupCreateSuccessEditHandler : NSObject
{
    id loadOperationHandle;
    WBGroupCreateSuccessViewController *_controller;
}

@property(nonatomic) __weak WBGroupCreateSuccessViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)changedGroupReviewStatus:(_Bool)arg1 groupSettingItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancleNetworkOperationHandler;
- (void)showGroupMemebersGroupSettingItem:(id)arg1;
- (void)addGroupMemebersGroupSettingItem:(id)arg1;
- (void)handleCellSelected:(id)arg1 atIndexPath:(id)arg2 rowItem:(id)arg3;
- (id)createTableViewDataSourceWithGroup:(id)arg1 syncSwitch:(_Bool)arg2 syncAll:(_Bool)arg3;

@end

