//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMLiveActivityPendantInfo : XMModel
{
    _Bool _showPopup;
    _Bool _isWebPendant;
    unsigned long long _pendantId;
    NSString *_imageUrl;
    NSString *_targetUrl;
    NSString *_webViewUrl;
    unsigned long long _tabType;
    unsigned long long _giftType;
}

+ (id)xmm_modelCustomPropertyMapper;
- (void).cxx_destruct;
@property(nonatomic) _Bool isWebPendant; // @synthesize isWebPendant=_isWebPendant;
@property(nonatomic) unsigned long long giftType; // @synthesize giftType=_giftType;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) _Bool showPopup; // @synthesize showPopup=_showPopup;
@property(retain, nonatomic) NSString *webViewUrl; // @synthesize webViewUrl=_webViewUrl;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) unsigned long long pendantId; // @synthesize pendantId=_pendantId;

@end

