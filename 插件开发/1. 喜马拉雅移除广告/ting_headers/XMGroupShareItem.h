//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMGroupTalkContentItem.h"

@class NSString;

@interface XMGroupShareItem : XMGroupTalkContentItem
{
    long long _shareType;
    NSString *_sharedTitle;
    NSString *_sharedContent;
    long long _sharedAlbumId;
    NSString *_sharedUrl;
    long long _sharedTrackId;
    NSString *_picUrl;
    long long _topicId;
}

@property(nonatomic) long long topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(nonatomic) long long sharedTrackId; // @synthesize sharedTrackId=_sharedTrackId;
@property(retain, nonatomic) NSString *sharedUrl; // @synthesize sharedUrl=_sharedUrl;
@property(nonatomic) long long sharedAlbumId; // @synthesize sharedAlbumId=_sharedAlbumId;
@property(retain, nonatomic) NSString *sharedContent; // @synthesize sharedContent=_sharedContent;
@property(retain, nonatomic) NSString *sharedTitle; // @synthesize sharedTitle=_sharedTitle;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
- (void).cxx_destruct;
- (id)bubbleImage;
- (id)altLastContent;
- (void)handleShareMsg;
- (void)setContent:(id)arg1;

@end

