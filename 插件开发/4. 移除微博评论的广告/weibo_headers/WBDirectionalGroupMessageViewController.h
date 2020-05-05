//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "WBDirectionalGroupMessageViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIBarButtonItem, WBDirectionalGroupMessageView, WBProgressHUD;
@protocol WBDirectionalGroupMessageViewControllerDelegate;

@interface WBDirectionalGroupMessageViewController : WBViewController <WBDirectionalGroupMessageViewDelegate>
{
    NSMutableArray *_groupsArray;
    WBDirectionalGroupMessageView *_groupMessageView;
    UIBarButtonItem *_navigationBarRightButton;
    UIBarButtonItem *_navigationBarLeftButton;
    NSMutableArray *_searchCacheArray;
    _Bool _isNavigationBarRightButtonHidden;
    _Bool _cachedSearchResult;
    id <WBDirectionalGroupMessageViewControllerDelegate> _delegate;
    WBProgressHUD *_progressHUD;
}

+ (Class)groupMessageTableViewCellClass;
+ (Class)groupMessageViewClass;
@property(retain, nonatomic) WBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(nonatomic) _Bool cachedSearchResult; // @synthesize cachedSearchResult=_cachedSearchResult;
@property(nonatomic) id <WBDirectionalGroupMessageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)currentUserGroupCounts;
- (id)currentAffilicatedInfo;
- (id)searchingResultWithKeyword:(id)arg1;
- (void)cacheSearchingResult:(id)arg1 WithKeywork:(id)arg2;
- (void)reloadGroupsWithCachedFlag:(_Bool)arg1;
- (void)navigationLeftButtonPressed:(id)arg1;
- (void)navigationRightButtonPressed:(id)arg1;
- (void)groupMessageViewToCreateFansGroup:(id)arg1;
- (void)groupMessageView:(id)arg1 didPressHeaderTableItem:(id)arg2;
- (void)groupMessageView:(id)arg1 didSelectGroup:(id)arg2;
- (void)groupMessageView:(id)arg1 searchStringDidChanged:(id)arg2;
- (void)searchFromGroups:(id)arg1 withKeyWords:(id)arg2 andCompleteBlock:(CDUnknownBlockType)arg3;
- (void)reloadGroupsWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)reloadGroupsFromCacheWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)resetNavigationBarButtonItems;
- (void)setNavigationBarLeftButtonWithImage:(id)arg1 andHighlightedImage:(id)arg2;
- (void)setNavigationBarLeftButtonWithText:(id)arg1;
- (void)setNavigationBarRightButtonWithImage:(id)arg1 andHighlightedImage:(id)arg2;
- (void)setNavigationBarRightButtonWithText:(id)arg1;
- (void)setNavigationBarRightButtonHidden:(_Bool)arg1;
- (void)setNavigationBarTitle:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithStyle:(int)arg1;
- (void)setGroups:(id)arg1;
- (void)deleteGroup:(id)arg1;
- (id)messageView;
- (id)allGroups;
@property(nonatomic) _Bool autoHideNavigationBar;
- (id)moduleID;
- (void)createNewFansGroup;
- (void)createFansGroupForCurrentGroup;
- (void)showCreateGroupActionSheet;
- (void)judgeEnableCreateFansGroup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

