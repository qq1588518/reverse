//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMMomentActiveUserInfo : NSObject
{
    _Bool _isVerified;
    _Bool _isFollowed;
    int _anchorGrade;
    NSString *_nickname;
    NSString *_avatar;
    long long _uid;
    long long _followers;
    NSString *_simpleDesc;
    long long _vLogoType;
    NSString *_recSrc;
    NSString *_recTrack;
}

@property(copy, nonatomic) NSString *recTrack; // @synthesize recTrack=_recTrack;
@property(copy, nonatomic) NSString *recSrc; // @synthesize recSrc=_recSrc;
@property(nonatomic) long long vLogoType; // @synthesize vLogoType=_vLogoType;
@property(copy, nonatomic) NSString *simpleDesc; // @synthesize simpleDesc=_simpleDesc;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(nonatomic) long long followers; // @synthesize followers=_followers;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) int anchorGrade; // @synthesize anchorGrade=_anchorGrade;
@property(nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
- (void).cxx_destruct;

@end

