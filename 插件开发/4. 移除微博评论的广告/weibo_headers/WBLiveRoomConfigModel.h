//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLBaseModel.h"

@class NSString;

@interface WBLiveRoomConfigModel : WBNLBaseModel
{
    _Bool _firstRecharge;
    _Bool _sendGift;
    _Bool _outerGift;
    _Bool _redPacket;
    _Bool _comments;
    _Bool _barrage;
    _Bool _praise;
    _Bool _shop;
    _Bool _anchorId;
    _Bool _anchorSidebar;
    _Bool _memberSidebar;
    _Bool _worldNotice;
    _Bool _goldCoinRank;
    _Bool _hourRank;
    _Bool _weekStarRank;
    _Bool _pkGloryRank;
    _Bool _activity;
    _Bool _cornerMark;
    _Bool _professGift;
    _Bool _worldRedPacket;
    _Bool _commentsEntrance;
    _Bool _specialEntrance;
    _Bool _pk;
    _Bool _togetherPlay;
    NSString *_shopStyle;
    NSString *_shopUrl;
    long long _shopOpenWay;
    unsigned long long _firstClass;
}

@property(nonatomic) _Bool togetherPlay; // @synthesize togetherPlay=_togetherPlay;
@property(nonatomic) _Bool pk; // @synthesize pk=_pk;
@property(nonatomic) _Bool specialEntrance; // @synthesize specialEntrance=_specialEntrance;
@property(nonatomic) _Bool commentsEntrance; // @synthesize commentsEntrance=_commentsEntrance;
@property(nonatomic) _Bool worldRedPacket; // @synthesize worldRedPacket=_worldRedPacket;
@property(nonatomic) _Bool professGift; // @synthesize professGift=_professGift;
@property(nonatomic) _Bool cornerMark; // @synthesize cornerMark=_cornerMark;
@property(nonatomic) _Bool activity; // @synthesize activity=_activity;
@property(nonatomic) _Bool pkGloryRank; // @synthesize pkGloryRank=_pkGloryRank;
@property(nonatomic) _Bool weekStarRank; // @synthesize weekStarRank=_weekStarRank;
@property(nonatomic) _Bool hourRank; // @synthesize hourRank=_hourRank;
@property(nonatomic) _Bool goldCoinRank; // @synthesize goldCoinRank=_goldCoinRank;
@property(nonatomic) _Bool worldNotice; // @synthesize worldNotice=_worldNotice;
@property(nonatomic) _Bool memberSidebar; // @synthesize memberSidebar=_memberSidebar;
@property(nonatomic) _Bool anchorSidebar; // @synthesize anchorSidebar=_anchorSidebar;
@property(nonatomic) unsigned long long firstClass; // @synthesize firstClass=_firstClass;
@property(nonatomic) _Bool anchorId; // @synthesize anchorId=_anchorId;
@property(nonatomic) long long shopOpenWay; // @synthesize shopOpenWay=_shopOpenWay;
@property(copy, nonatomic) NSString *shopUrl; // @synthesize shopUrl=_shopUrl;
@property(copy, nonatomic) NSString *shopStyle; // @synthesize shopStyle=_shopStyle;
@property(nonatomic) _Bool shop; // @synthesize shop=_shop;
@property(nonatomic) _Bool praise; // @synthesize praise=_praise;
@property(nonatomic) _Bool barrage; // @synthesize barrage=_barrage;
@property(nonatomic) _Bool comments; // @synthesize comments=_comments;
@property(nonatomic) _Bool redPacket; // @synthesize redPacket=_redPacket;
@property(nonatomic) _Bool outerGift; // @synthesize outerGift=_outerGift;
@property(nonatomic) _Bool sendGift; // @synthesize sendGift=_sendGift;
@property(nonatomic) _Bool firstRecharge; // @synthesize firstRecharge=_firstRecharge;
- (void).cxx_destruct;
- (id)getAllBOOLProperties;
- (void)updateConfigForMcRoom;
- (id)initWithDefault;

@end

