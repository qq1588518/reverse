//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface XMMRecommendCommunityList : NSObject
{
    _Bool _hasMore;
    NSString *_recommendCommunityListId;
    NSString *_title;
    NSURL *_moreLink;
    NSArray *_details;
}

+ (id)modelCustomPropertyMapper;
+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSArray *details; // @synthesize details=_details;
@property(retain, nonatomic) NSURL *moreLink; // @synthesize moreLink=_moreLink;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *recommendCommunityListId; // @synthesize recommendCommunityListId=_recommendCommunityListId;
- (void).cxx_destruct;

@end

