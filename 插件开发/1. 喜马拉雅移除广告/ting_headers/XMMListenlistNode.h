//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseNode.h"

@class NSString, NSURL;

@interface XMMListenlistNode : XMMBaseNode
{
    _Bool _collected;
    unsigned long long _listenlistId;
    NSString *_title;
    NSURL *_coverUrl;
    long long _contentCount;
    NSString *_authorName;
    unsigned long long _uid;
    unsigned long long _type;
    long long _collectCount;
    long long _viewCount;
}

+ (id)modelCustomPropertyMapper;
@property(nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) _Bool collected; // @synthesize collected=_collected;
@property(nonatomic) long long collectCount; // @synthesize collectCount=_collectCount;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(nonatomic) long long contentCount; // @synthesize contentCount=_contentCount;
@property(retain, nonatomic) NSURL *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long listenlistId; // @synthesize listenlistId=_listenlistId;
- (void).cxx_destruct;
- (id)BBSRequestDictionary;
- (void)didInitialize;

@end

