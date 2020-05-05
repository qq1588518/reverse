//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeiboContentBaseViewController.h"

#import "WBLikeAttitudeViewDelegate-Protocol.h"
#import "WBStoryCommentContentViewController-Protocol.h"

@class NSString, UIView, WBMessageViewContentLikeButton;
@protocol WBStoryCommentContentViewControllerContainer;

@interface WeiboContentStoryViewController : WeiboContentBaseViewController <WBLikeAttitudeViewDelegate, WBStoryCommentContentViewController>
{
    _Bool isHavNum;
    _Bool loadingCRNum;
    _Bool allowComment;
    _Bool allowMediaComment;
    UIView *footerToolbar;
    _Bool comeFromProductsMore;
    _Bool hasLoadedStatusExtend;
    NSString *commentExt;
    WBMessageViewContentLikeButton *likeButton;
    _Bool _scrolledOnTop;
    int _commentPrivilege;
    id <WBStoryCommentContentViewControllerContainer> _container;
}

@property(nonatomic, getter=isScrolledOnTop) _Bool scrolledOnTop; // @synthesize scrolledOnTop=_scrolledOnTop;
@property(nonatomic) int commentPrivilege; // @synthesize commentPrivilege=_commentPrivilege;
@property(nonatomic) __weak id <WBStoryCommentContentViewControllerContainer> container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)uiCode;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)likeAttitudeView:(id)arg1 selectedOptionIndex:(unsigned long long)arg2 optionEntity:(id)arg3;
- (void)shareItemAction:(id)arg1;
- (void)likeButtonLongGesture:(id)arg1;
- (id)likedStatisticsWithParameters:(id)arg1;
- (void)responseLikeActionAttitudeType:(long long)arg1 isClickAction:(_Bool)arg2;
- (void)likeItemAction:(id)arg1;
- (void)commentItemAction:(id)arg1;
- (long long)needPhoneBinded;
- (void)replayItemAction:(id)arg1;
- (id)extraParamsForItemClick;
- (void)resetToolbar;
- (void)likeStateDidChangeNotification:(id)arg1;
- (void)refreshStatusExtend;
- (void)refreshStatus:(CDUnknownBlockType)arg1;
- (void)configUserRelation:(long long)arg1;
- (_Bool)retweetable;
- (_Bool)forwardEnable;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)adjustHoveringSegment:(_Bool)arg1;
- (_Bool)customSegmentPosition;
- (void)configTableViewInsets;
- (void)prepareForDismiss;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

