//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface XMWeKeSearchUser : NSObject
{
    _Bool _isVerified;
    NSDictionary *_dictionary;
    unsigned long long _uid;
    NSString *_nickname;
    NSString *_gender;
    NSString *_intro;
    NSString *_avatar;
    NSString *_smallPic;
    long long _anchorGrade;
    long long _followers_counts;
    long long _followings_counts;
    long long _verifyType;
}

@property(nonatomic) long long verifyType; // @synthesize verifyType=_verifyType;
@property(nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(nonatomic) long long followings_counts; // @synthesize followings_counts=_followings_counts;
@property(nonatomic) long long followers_counts; // @synthesize followers_counts=_followers_counts;
@property(nonatomic) long long anchorGrade; // @synthesize anchorGrade=_anchorGrade;
@property(retain, nonatomic) NSString *smallPic; // @synthesize smallPic=_smallPic;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

