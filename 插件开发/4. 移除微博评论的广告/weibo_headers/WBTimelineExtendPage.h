//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

#import "WBPromotionProvider-Protocol.h"

@class NSArray, NSDictionary, NSString, WBPromotion;

@interface WBTimelineExtendPage : WBModelObject <WBPromotionProvider>
{
    NSString *_url;
    NSString *_img;
    NSString *_name;
    NSString *_desc;
    unsigned long long _type;
    NSDictionary *_actionLog;
    NSArray *_buttonModels;
    NSString *_stage;
    NSArray *_shopTag;
    NSString *_buyInfo;
    NSDictionary *_promotionDic;
    double _ratio;
    unsigned long long _hiddenMask;
}

+ (_Bool)isValidForDictionary:(id)arg1;
@property(nonatomic) unsigned long long hiddenMask; // @synthesize hiddenMask=_hiddenMask;
@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(retain, nonatomic) NSDictionary *promotionDic; // @synthesize promotionDic=_promotionDic;
@property(retain, nonatomic) NSString *buyInfo; // @synthesize buyInfo=_buyInfo;
@property(copy, nonatomic) NSArray *shopTag; // @synthesize shopTag=_shopTag;
@property(retain, nonatomic) NSString *stage; // @synthesize stage=_stage;
@property(retain, nonatomic) NSArray *buttonModels; // @synthesize buttonModels=_buttonModels;
@property(retain, nonatomic) NSDictionary *actionLog; // @synthesize actionLog=_actionLog;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)dictionaryWithValues;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;
@property(readonly, nonatomic) WBPromotion *promotion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

