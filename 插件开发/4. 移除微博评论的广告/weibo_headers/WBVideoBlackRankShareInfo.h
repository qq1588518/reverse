//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

#import "WBSharingObject-Protocol.h"

@class NSDictionary, NSString, WBTimelinePageInfo, WBTimelineURL, WBVideoBlackRankShareCardInfo;

@interface WBVideoBlackRankShareInfo : WBModelObject <WBSharingObject>
{
    _Bool _isAllowShare;
    NSString *_shareH5Title;
    NSString *_shareH5Description;
    NSString *_shareH5PictureURLString;
    NSString *_shareH5Scheme;
    NSString *_pageID;
    NSDictionary *_actionLog;
    WBVideoBlackRankShareCardInfo *_cardInfo;
}

@property(retain, nonatomic) WBVideoBlackRankShareCardInfo *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(retain, nonatomic) NSDictionary *actionLog; // @synthesize actionLog=_actionLog;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(retain, nonatomic) NSString *shareH5Scheme; // @synthesize shareH5Scheme=_shareH5Scheme;
@property(retain, nonatomic) NSString *shareH5PictureURLString; // @synthesize shareH5PictureURLString=_shareH5PictureURLString;
@property(retain, nonatomic) NSString *shareH5Description; // @synthesize shareH5Description=_shareH5Description;
@property(retain, nonatomic) NSString *shareH5Title; // @synthesize shareH5Title=_shareH5Title;
@property(nonatomic) _Bool isAllowShare; // @synthesize isAllowShare=_isAllowShare;
- (void).cxx_destruct;
- (id)composeJobPropertiesWithComposeElement:(id)arg1;
- (id)composeJobParametersWithComposeElement:(id)arg1;
- (long long)extraMessageType;
- (id)extraMessageID;
@property(readonly, nonatomic) WBTimelineURL *miniCard;
@property(readonly, nonatomic) WBTimelinePageInfo *sharingPageInfo;
@property(readonly, nonatomic) long long composeSharingType;
- (_Bool)updateWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned long long contentLength;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long extraMessageUid;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *pageUrl;
@property(readonly, nonatomic) _Bool removable;
@property(readonly) Class superclass;

@end

