//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBSharingObject-Protocol.h"

@class NSString, WBTimelinePageInfo, WBTimelineURL;

@interface ULSWeiboShareObject : NSObject <WBSharingObject>
{
    long long _composeSharingType;
    WBTimelinePageInfo *_sharingPageInfo;
    NSString *_desc;
    NSString *_pageID;
    NSString *_roomTitle;
}

@property(copy, nonatomic) NSString *roomTitle; // @synthesize roomTitle=_roomTitle;
@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) WBTimelinePageInfo *sharingPageInfo; // @synthesize sharingPageInfo=_sharingPageInfo;
@property(nonatomic) long long composeSharingType; // @synthesize composeSharingType=_composeSharingType;
- (void).cxx_destruct;
- (id)composeJobParametersWithComposeElement:(id)arg1;
- (id)composeJobPropertiesWithComposeElement:(id)arg1;
- (id)extraMessageID;
- (long long)extraMessageType;
- (id)sharingTextConent;
- (id)initWithDescription:(id)arg1 pageID:(id)arg2 roomTitle:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) unsigned long long contentLength;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long extraMessageUid;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WBTimelineURL *miniCard;
@property(readonly, nonatomic) NSString *pageUrl;
@property(readonly, nonatomic) _Bool removable;
@property(readonly) Class superclass;

@end

