//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;
@protocol DWImageItem;

@interface XMDubshowMaterialDetailSlice : XMModel
{
    NSString *_originalPicUrl;
    NSString *_smallPicUrl;
    NSString *_content;
    id <DWImageItem> _localPic;
}

@property(retain, nonatomic) id <DWImageItem> localPic; // @synthesize localPic=_localPic;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *smallPicUrl; // @synthesize smallPicUrl=_smallPicUrl;
@property(retain, nonatomic) NSString *originalPicUrl; // @synthesize originalPicUrl=_originalPicUrl;
- (void).cxx_destruct;

@end

