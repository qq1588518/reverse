//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

@class NSDictionary, NSNumber, NSString, NSURL;

@interface YXSliderModel : YXModel
{
    NSString *_slideid;
    NSString *_title;
    NSURL *_cover;
    long long _type;
    NSString *_posid;
    NSString *_data;
    long long _status;
    NSString *_displayorder;
    NSNumber *_updatetime;
    NSDictionary *_linkInfo;
    NSDictionary *_share;
    NSString *_smallcover;
    NSString *_scid;
    NSString *_screenRecordUrl;
}

@property(copy, nonatomic) NSString *screenRecordUrl; // @synthesize screenRecordUrl=_screenRecordUrl;
@property(copy, nonatomic) NSString *scid; // @synthesize scid=_scid;
@property(copy, nonatomic) NSString *smallcover; // @synthesize smallcover=_smallcover;
@property(retain, nonatomic) NSDictionary *share; // @synthesize share=_share;
@property(retain, nonatomic) NSDictionary *linkInfo; // @synthesize linkInfo=_linkInfo;
@property(retain, nonatomic) NSNumber *updatetime; // @synthesize updatetime=_updatetime;
@property(copy, nonatomic) NSString *displayorder; // @synthesize displayorder=_displayorder;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *posid; // @synthesize posid=_posid;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSURL *cover; // @synthesize cover=_cover;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *slideid; // @synthesize slideid=_slideid;
- (void).cxx_destruct;

@end

