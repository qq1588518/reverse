//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMCommentTalentInfo : NSObject
{
    unsigned long long _talentUid;
    NSString *_content;
    NSString *_color;
    NSString *_name;
    NSString *_icon;
}

+ (id)albumCommentTalentInfoFromDictionary:(id)arg1;
+ (id)commentTalentInfoFromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long talentUid; // @synthesize talentUid=_talentUid;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

