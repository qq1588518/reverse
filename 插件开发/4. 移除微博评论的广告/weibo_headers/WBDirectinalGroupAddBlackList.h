//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBDirectionalGroupMessageViewController.h"

#import "WBDirectionalGroupMessageViewControllerDelegate-Protocol.h"

@class NSArray, NSString, WBDirectionalGroupAffiliatedInfo;

@interface WBDirectinalGroupAddBlackList : WBDirectionalGroupMessageViewController <WBDirectionalGroupMessageViewControllerDelegate>
{
    id _loadingOperationHandle;
    WBDirectionalGroupAffiliatedInfo *_affiliatedInfo;
    NSArray *_cachedGroups;
    NSString *_classify;
    unsigned long long _groupCount;
}

+ (Class)groupMessageTableViewCellClass;
@property(nonatomic) unsigned long long groupCount; // @synthesize groupCount=_groupCount;
@property(retain, nonatomic) NSString *classify; // @synthesize classify=_classify;
- (void).cxx_destruct;
- (void)navigationBarRightButtonPressed;
- (void)groupMessageViewDidTriggerPullRefresh:(id)arg1 withCompleteBlock:(CDUnknownBlockType)arg2;
- (void)groupMessageViewDidTriggerLoadMore:(id)arg1 withCompleteBlock:(CDUnknownBlockType)arg2;
- (void)groupMessageView:(id)arg1 didPressButtonWithGroup:(id)arg2 andCompleteBlock:(CDUnknownBlockType)arg3;
- (void)reloadGroupsWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)reloadGroupsFromCacheWithCompleteBlock:(CDUnknownBlockType)arg1;
- (id)initWithCachedGroups:(id)arg1;
- (void)dealloc;
- (void)setAdditionalInfo:(id)arg1;
- (void)updateNavigationTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

