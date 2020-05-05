//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLBaseModel.h"

@class NSString, YXLiveInRoomAnimationModel;

@interface YXLiveAudienceInViewModel : WBNLBaseModel
{
    int _isAnnoy;
    int _medalEffectId;
    int _medalLevel;
    long long _level;
    NSString *_nickname;
    NSString *_vtypeName;
    long long _verified_type;
    long long _noble_level;
    NSString *_noble_level_name;
    long long _msgFrom;
    NSString *_scid;
    NSString *_nick;
    NSString *_avatar;
    NSString *_memberid;
    long long _consumeLevel;
    long long _colorfulNickName;
    NSString *_preffixColor;
    NSString *_priorEffect;
    YXLiveInRoomAnimationModel *_animation;
}

+ (id)modelLevel:(long long)arg1 nick:(id)arg2 type:(id)arg3 verified_type:(long long)arg4 isAnnoy:(int)arg5;
@property(retain, nonatomic) YXLiveInRoomAnimationModel *animation; // @synthesize animation=_animation;
@property(copy, nonatomic) NSString *priorEffect; // @synthesize priorEffect=_priorEffect;
@property(copy, nonatomic) NSString *preffixColor; // @synthesize preffixColor=_preffixColor;
@property(nonatomic) long long colorfulNickName; // @synthesize colorfulNickName=_colorfulNickName;
@property(nonatomic) long long consumeLevel; // @synthesize consumeLevel=_consumeLevel;
@property(copy, nonatomic) NSString *memberid; // @synthesize memberid=_memberid;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(copy, nonatomic) NSString *scid; // @synthesize scid=_scid;
@property(nonatomic) int medalLevel; // @synthesize medalLevel=_medalLevel;
@property(nonatomic) int medalEffectId; // @synthesize medalEffectId=_medalEffectId;
@property(nonatomic) long long msgFrom; // @synthesize msgFrom=_msgFrom;
@property(retain, nonatomic) NSString *noble_level_name; // @synthesize noble_level_name=_noble_level_name;
@property(nonatomic) long long noble_level; // @synthesize noble_level=_noble_level;
@property(nonatomic) int isAnnoy; // @synthesize isAnnoy=_isAnnoy;
@property(nonatomic) long long verified_type; // @synthesize verified_type=_verified_type;
@property(copy, nonatomic) NSString *vtypeName; // @synthesize vtypeName=_vtypeName;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) long long level; // @synthesize level=_level;
- (void).cxx_destruct;

@end

