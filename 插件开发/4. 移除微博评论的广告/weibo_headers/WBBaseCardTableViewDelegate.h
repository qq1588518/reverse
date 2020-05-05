//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRLMTableViewDelegate-Protocol.h"
#import "WBTableViewDelegate-Protocol.h"

@class NSString, WBBaseCardListController;

@interface WBBaseCardTableViewDelegate : NSObject <PRLMTableViewDelegate, WBTableViewDelegate>
{
    WBBaseCardListController *_owner;
}

@property(nonatomic) __weak WBBaseCardListController *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)tableViewWillReload:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didSelectCard:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)numberOfCardsBefore:(id)arg1;
- (void)openTelephoneScheme:(id)arg1;
- (id)cardForRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 setRelatedCellHighlighted:(_Bool)arg2 atIndexPath:(id)arg3;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

