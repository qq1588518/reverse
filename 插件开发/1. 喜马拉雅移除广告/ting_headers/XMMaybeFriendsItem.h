//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

#import "XMTableCellModelProtocol-Protocol.h"

@class NSString;

@interface XMMaybeFriendsItem : XMModel <XMTableCellModelProtocol>
{
    _Bool _isFollowed;
    _Bool _showIntro;
    _Bool _isInvited;
    unsigned long long _followStatus;
    long long _uid;
    long long _vLogoType;
    NSString *_logoPic;
    NSString *_nickname;
    NSString *_sourceNickname;
    NSString *_sourceType;
    NSString *_sourceTypeImage;
    NSString *_sourceTypeString;
    NSString *_intro;
    unsigned long long _friendCellType;
    NSString *_mobileHash;
    NSString *_mobileNumber;
}

@property(nonatomic) _Bool isInvited; // @synthesize isInvited=_isInvited;
@property(copy, nonatomic) NSString *mobileNumber; // @synthesize mobileNumber=_mobileNumber;
@property(copy, nonatomic) NSString *mobileHash; // @synthesize mobileHash=_mobileHash;
@property(nonatomic) _Bool showIntro; // @synthesize showIntro=_showIntro;
@property(nonatomic) unsigned long long friendCellType; // @synthesize friendCellType=_friendCellType;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(copy, nonatomic) NSString *sourceTypeString; // @synthesize sourceTypeString=_sourceTypeString;
@property(copy, nonatomic) NSString *sourceTypeImage; // @synthesize sourceTypeImage=_sourceTypeImage;
@property(copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *sourceNickname; // @synthesize sourceNickname=_sourceNickname;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *logoPic; // @synthesize logoPic=_logoPic;
@property(nonatomic) long long vLogoType; // @synthesize vLogoType=_vLogoType;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) unsigned long long followStatus; // @synthesize followStatus=_followStatus;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

