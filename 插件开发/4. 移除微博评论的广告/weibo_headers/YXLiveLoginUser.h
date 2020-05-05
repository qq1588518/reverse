//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

@class NSDictionary, NSNumber, NSString;

@interface YXLiveLoginUser : YXModel
{
    _Bool _check_weibo;
    _Bool _isWeiboLogin;
    int _isRoomController;
    NSString *_memberid;
    NSString *_avatar;
    NSString *_icon;
    NSString *_nickname;
    NSNumber *_sex;
    NSNumber *_birthday;
    NSString *_constellation;
    NSString *_desc;
    NSString *_checkmobile;
    NSString *_check;
    NSString *_mobile;
    NSString *_refreshtoken;
    NSString *_accesstoken;
    NSString *_weibo_expiretime;
    NSString *_weibo_openid;
    NSString *_weibo_refreshtoken;
    NSString *_weibo_token;
    long long _level;
    NSNumber *_type;
    NSNumber *_ytypevt;
    NSString *_country;
    long long _isblack;
    NSDictionary *_peerage_info;
    long long _consumeLevel;
    long long _colorfulNickName;
    NSString *_preffix_color;
}

+ (_Bool)isLogin;
+ (void)setNeedReLogin:(_Bool)arg1;
+ (_Bool)needReLogin;
+ (id)loginUser;
+ (_Bool)removeArchiver;
+ (id)unArchiver;
@property(copy, nonatomic) NSString *preffix_color; // @synthesize preffix_color=_preffix_color;
@property(nonatomic) long long colorfulNickName; // @synthesize colorfulNickName=_colorfulNickName;
@property(nonatomic) long long consumeLevel; // @synthesize consumeLevel=_consumeLevel;
@property(retain, nonatomic) NSDictionary *peerage_info; // @synthesize peerage_info=_peerage_info;
@property(nonatomic) long long isblack; // @synthesize isblack=_isblack;
@property(nonatomic) int isRoomController; // @synthesize isRoomController=_isRoomController;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSNumber *ytypevt; // @synthesize ytypevt=_ytypevt;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *weibo_token; // @synthesize weibo_token=_weibo_token;
@property(copy, nonatomic) NSString *weibo_refreshtoken; // @synthesize weibo_refreshtoken=_weibo_refreshtoken;
@property(copy, nonatomic) NSString *weibo_openid; // @synthesize weibo_openid=_weibo_openid;
@property(copy, nonatomic) NSString *weibo_expiretime; // @synthesize weibo_expiretime=_weibo_expiretime;
@property(copy, nonatomic) NSString *accesstoken; // @synthesize accesstoken=_accesstoken;
@property(copy, nonatomic) NSString *refreshtoken; // @synthesize refreshtoken=_refreshtoken;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *check; // @synthesize check=_check;
@property(nonatomic) _Bool isWeiboLogin; // @synthesize isWeiboLogin=_isWeiboLogin;
@property(nonatomic) _Bool check_weibo; // @synthesize check_weibo=_check_weibo;
@property(copy, nonatomic) NSString *checkmobile; // @synthesize checkmobile=_checkmobile;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *constellation; // @synthesize constellation=_constellation;
@property(retain, nonatomic) NSNumber *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSNumber *sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *memberid; // @synthesize memberid=_memberid;
- (void).cxx_destruct;
- (void)archiver;

@end

