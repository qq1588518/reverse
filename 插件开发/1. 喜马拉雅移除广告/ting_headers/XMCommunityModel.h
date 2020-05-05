//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

#import "XMTableCellModelProtocol-Protocol.h"

@class NSArray, NSString, XMLatestEssenceArticleModel;

@interface XMCommunityModel : XMModel <XMTableCellModelProtocol>
{
    _Bool _isJoin;
    unsigned long long _communityId;
    unsigned long long _sectionId;
    NSString *_url;
    NSString *_logo;
    NSString *_logoSmall;
    NSString *_logoMiddle;
    NSString *_name;
    long long _type;
    long long _memberCount;
    long long _articleCount;
    NSString *_introduce;
    XMLatestEssenceArticleModel *_latestEssenceArticle;
    NSArray *_essenceArticles;
}

+ (id)xmm_modelContainerPropertyGenericClass;
+ (id)xmm_modelCustomPropertyMapper;
@property(retain, nonatomic) NSArray *essenceArticles; // @synthesize essenceArticles=_essenceArticles;
@property(retain, nonatomic) XMLatestEssenceArticleModel *latestEssenceArticle; // @synthesize latestEssenceArticle=_latestEssenceArticle;
@property(nonatomic) _Bool isJoin; // @synthesize isJoin=_isJoin;
@property(copy, nonatomic) NSString *introduce; // @synthesize introduce=_introduce;
@property(nonatomic) long long articleCount; // @synthesize articleCount=_articleCount;
@property(nonatomic) long long memberCount; // @synthesize memberCount=_memberCount;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *logoMiddle; // @synthesize logoMiddle=_logoMiddle;
@property(copy, nonatomic) NSString *logoSmall; // @synthesize logoSmall=_logoSmall;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long sectionId; // @synthesize sectionId=_sectionId;
@property(nonatomic) unsigned long long communityId; // @synthesize communityId=_communityId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

