//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSDictionary, NSString, WBShortBottomButtonInfo, WBShortVideoFloatViewInfo, WBShortVideoMaskInfo;

@interface WBShortVideoAdInfo : WBModelObject
{
    WBShortVideoMaskInfo *_maskInfo;
    WBShortBottomButtonInfo *_bottomButtonInfo;
    WBShortVideoFloatViewInfo *_floatViewInfo;
    NSString *_avatarText;
    NSDictionary *_promotionDic;
    NSString *_adMark;
    long long _adType;
    unsigned long long _videoType;
    NSDictionary *_oriAdInfo;
}

@property(copy, nonatomic) NSDictionary *oriAdInfo; // @synthesize oriAdInfo=_oriAdInfo;
@property(nonatomic) unsigned long long videoType; // @synthesize videoType=_videoType;
@property(nonatomic) long long adType; // @synthesize adType=_adType;
@property(copy, nonatomic) NSString *adMark; // @synthesize adMark=_adMark;
@property(retain, nonatomic) NSDictionary *promotionDic; // @synthesize promotionDic=_promotionDic;
@property(copy, nonatomic) NSString *avatarText; // @synthesize avatarText=_avatarText;
@property(retain, nonatomic) WBShortVideoFloatViewInfo *floatViewInfo; // @synthesize floatViewInfo=_floatViewInfo;
@property(retain, nonatomic) WBShortBottomButtonInfo *bottomButtonInfo; // @synthesize bottomButtonInfo=_bottomButtonInfo;
@property(retain, nonatomic) WBShortVideoMaskInfo *maskInfo; // @synthesize maskInfo=_maskInfo;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

