//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSArray, NSString, WBUser;

@interface WBVideoPlaylistItem : WBModelObject
{
    _Bool _subscribed;
    NSString *_playlistID;
    NSString *_name;
    NSString *_icon;
    long long _videosCount;
    WBUser *_user;
    NSArray *_statuses;
    NSArray *_collections;
    NSString *_sinceId;
    NSString *_extParamsForRequest;
    NSString *_cacheid;
}

@property(retain, nonatomic) NSString *cacheid; // @synthesize cacheid=_cacheid;
@property(retain, nonatomic) NSString *extParamsForRequest; // @synthesize extParamsForRequest=_extParamsForRequest;
@property(retain, nonatomic) NSString *sinceId; // @synthesize sinceId=_sinceId;
@property(retain, nonatomic) NSArray *collections; // @synthesize collections=_collections;
@property(retain, nonatomic) NSArray *statuses; // @synthesize statuses=_statuses;
@property(retain, nonatomic) WBUser *user; // @synthesize user=_user;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(nonatomic) long long videosCount; // @synthesize videosCount=_videosCount;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *playlistID; // @synthesize playlistID=_playlistID;
- (void).cxx_destruct;
- (id)trendItems;
- (void)tranceWBStatusToSelf:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;

@end

