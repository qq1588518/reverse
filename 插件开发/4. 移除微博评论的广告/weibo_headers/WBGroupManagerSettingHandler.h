//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBContactDirectionalGroupMemberViewControllerDelegate-Protocol.h"
#import "WBGroupManagerSettingProtocol-Protocol.h"
#import "WBGroupMemberViewControllerDelegate-Protocol.h"

@class NSString, WBGroupManagerSettingViewController;

@interface WBGroupManagerSettingHandler : NSObject <WBGroupManagerSettingProtocol, WBContactDirectionalGroupMemberViewControllerDelegate, WBGroupMemberViewControllerDelegate>
{
    WBGroupManagerSettingViewController *iGroupManagerSettingVC;
    id loadOperationHandle;
}

@property(nonatomic) __weak WBGroupManagerSettingViewController *iGroupManagerSettingVC; // @synthesize iGroupManagerSettingVC;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancleNetworkOperationHandler;
- (void)updateGroupSizeNotifactoinAction:(id)arg1;
- (id)existedManagerIDArray;
- (void)addGroupManagerToServerAction:(id)arg1 contact:(id)arg2;
- (void)didSelectContact:(id)arg1 indexPath:(id)arg2;
- (void)contactDirectionalGroupMemberViewController:(id)arg1 didSelectContact:(id)arg2;
- (void)addGroupManagerAction:(id)arg1;
- (void)deleteGroupManagerAction:(id)arg1 indexPath:(id)arg2;
- (void)editGroupManager:(id)arg1;
- (void)loadNicknameInGroupForContacts:(id)arg1;
- (void)fetchManagerInfoFromServer;
- (void)loadManagerInfoFromLocal;
- (id)navStatusTitle;
- (void)adaptNavigationItem:(id)arg1 barItems:(id)arg2 title:(id)arg3;
- (void)freshNavStatusBar;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addUIObserverAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

