//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

@class NSString, NSURL, YXCourseInfoModel, YXCovers;

@interface YXPaidServiceModel : YXModel
{
    _Bool _isShowSellNum;
    NSString *_scid;
    NSString *_memberid;
    YXCovers *_covers;
    NSURL *_avatar;
    NSString *_nickname;
    long long _is_purchased;
    long long _can_preview;
    NSString *_yzb_remain_seconds;
    NSString *_yzb_free_watch_seconds;
    NSString *_live_price;
    long long _live_pay_type;
    NSString *_live_course_id;
    NSString *_product_id;
    NSString *_live_period;
    YXCourseInfoModel *_course_info;
    long long _sell_num;
    long long _pay_live_status;
    NSString *_hints;
    NSString *_view_title;
    NSString *_view_operate_title;
    NSString *_view_operate;
    NSString *_jump_url;
    long long _pay_live_vip_type;
}

@property(nonatomic) long long pay_live_vip_type; // @synthesize pay_live_vip_type=_pay_live_vip_type;
@property(copy, nonatomic) NSString *jump_url; // @synthesize jump_url=_jump_url;
@property(copy, nonatomic) NSString *view_operate; // @synthesize view_operate=_view_operate;
@property(copy, nonatomic) NSString *view_operate_title; // @synthesize view_operate_title=_view_operate_title;
@property(copy, nonatomic) NSString *view_title; // @synthesize view_title=_view_title;
@property(copy, nonatomic) NSString *hints; // @synthesize hints=_hints;
@property(nonatomic) _Bool isShowSellNum; // @synthesize isShowSellNum=_isShowSellNum;
@property(nonatomic) long long pay_live_status; // @synthesize pay_live_status=_pay_live_status;
@property(nonatomic) long long sell_num; // @synthesize sell_num=_sell_num;
@property(retain, nonatomic) YXCourseInfoModel *course_info; // @synthesize course_info=_course_info;
@property(copy, nonatomic) NSString *live_period; // @synthesize live_period=_live_period;
@property(copy, nonatomic) NSString *product_id; // @synthesize product_id=_product_id;
@property(copy, nonatomic) NSString *live_course_id; // @synthesize live_course_id=_live_course_id;
@property(nonatomic) long long live_pay_type; // @synthesize live_pay_type=_live_pay_type;
@property(copy, nonatomic) NSString *live_price; // @synthesize live_price=_live_price;
@property(copy, nonatomic) NSString *yzb_free_watch_seconds; // @synthesize yzb_free_watch_seconds=_yzb_free_watch_seconds;
@property(copy, nonatomic) NSString *yzb_remain_seconds; // @synthesize yzb_remain_seconds=_yzb_remain_seconds;
@property(nonatomic) long long can_preview; // @synthesize can_preview=_can_preview;
@property(nonatomic) long long is_purchased; // @synthesize is_purchased=_is_purchased;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSURL *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) YXCovers *covers; // @synthesize covers=_covers;
@property(copy, nonatomic) NSString *memberid; // @synthesize memberid=_memberid;
@property(copy, nonatomic) NSString *scid; // @synthesize scid=_scid;
- (void).cxx_destruct;

@end

