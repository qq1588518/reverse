//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSArray, NSString;

@interface XMFeedBackListDetailModel : XMModel
{
    long long _Id;
    NSString *_contentText;
    NSArray *_contentImgUrlList;
    long long _created;
    NSString *_sender;
    double _height;
}

+ (id)xmm_modelCustomPropertyMapper;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(nonatomic) long long created; // @synthesize created=_created;
@property(retain, nonatomic) NSArray *contentImgUrlList; // @synthesize contentImgUrlList=_contentImgUrlList;
@property(retain, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(nonatomic) long long Id; // @synthesize Id=_Id;
- (void).cxx_destruct;
- (void)caculateContentHeight;

@end

