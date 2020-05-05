//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UTMCLifeCycleProtocol-Protocol.h"

@class NSMutableDictionary, NSString, UTPage;

@interface UTPageEventManager : NSObject <UTMCLifeCycleProtocol>
{
    NSMutableDictionary *_pageItems;
    UTPage *_currentPage;
    UTPage *_prePage;
    NSMutableDictionary *_nextPageProperties;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
@property(retain) NSMutableDictionary *nextPageProperties; // @synthesize nextPageProperties=_nextPageProperties;
@property(retain) UTPage *prePage; // @synthesize prePage=_prePage;
@property(retain) UTPage *currentPage; // @synthesize currentPage=_currentPage;
@property(retain) NSMutableDictionary *pageItems; // @synthesize pageItems=_pageItems;
- (void).cxx_destruct;
- (void)switchBackGround;
- (void)switchForeGround;
- (id)getNextPageProperties;
- (void)updateNextPageProperties:(id)arg1;
- (_Bool)updateCurrentPageName:(id)arg1 forKey:(id)arg2;
- (_Bool)backToPrePage:(id)arg1;
- (id)ifH5currentPageKey;
- (id)currentPageKey;
- (id)currentPageName;
- (void)setCurrentPageName:(id)arg1 withKey:(id)arg2 ifH5:(id)arg3;
- (void)removePageItemForKey:(id)arg1;
- (id)pageItemForKey:(id)arg1;
- (void)addPageItem:(id)arg1 with:(id)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

